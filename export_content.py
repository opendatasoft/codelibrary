#!/usr/bin/env python3
"""
Script to generate a markdown file with all content from the 'content' directory.
Combines all resources with their titles, descriptions, HTML and CSS code blocks.
"""

import os
import re
from pathlib import Path
from typing import Dict, List, Tuple, Optional


def extract_frontmatter(content: str) -> Tuple[Dict, str]:
    """
    Extract YAML frontmatter and return both the parsed dict and the body text.
    Expects frontmatter between --- delimiters.
    Simple parser without external dependencies.
    """
    if not content.startswith('---'):
        return {}, content

    # Find the closing ---
    match = re.match(r'^---\n(.*?)\n---\n(.*)', content, re.DOTALL)
    if match:
        frontmatter_str = match.group(1)
        body = match.group(2)
        frontmatter = parse_simple_yaml(frontmatter_str)
        return frontmatter, body.strip()

    return {}, content


def parse_simple_yaml(yaml_str: str) -> Dict:
    """
    Simple YAML parser for basic key: value pairs.
    Handles strings, booleans, and lists in a basic way.
    """
    result = {}
    for line in yaml_str.strip().split('\n'):
        line = line.strip()
        if not line or line.startswith('#'):
            continue

        if ':' not in line:
            continue

        key, value = line.split(':', 1)
        key = key.strip()
        value = value.strip()

        # Remove quotes if present
        if (value.startswith('"') and value.endswith('"')) or \
           (value.startswith("'") and value.endswith("'")):
            value = value[1:-1]

        # Handle basic types
        if value.lower() in ('true', 'yes'):
            value = True
        elif value.lower() in ('false', 'no'):
            value = False
        elif value.isdigit():
            value = int(value)

        result[key] = value

    return result


def read_file(filepath: Path) -> str:
    """Safely read a file, return empty string if not found."""
    try:
        return filepath.read_text(encoding='utf-8')
    except FileNotFoundError:
        return ""


def get_variant_number(path: Path) -> Optional[int]:
    """Extract variant number from a numbered folder path."""
    try:
        return int(path.name)
    except ValueError:
        return None


def process_resource(resource_path: Path, category_name: str) -> Optional[Dict]:
    """
    Process a single resource folder.
    Returns a dict with title, description, and list of variants.
    """
    index_file = resource_path / 'index.md'

    if not index_file.exists():
        return None

    # Read the resource's index.md
    content = read_file(index_file)
    frontmatter, body = extract_frontmatter(content)

    title = frontmatter.get('title', resource_path.name)
    description = body or frontmatter.get('description', '')

    # Find all numbered variant folders
    variants = []
    try:
        for item in sorted(resource_path.iterdir()):
            if item.is_dir() and get_variant_number(item) is not None:
                variant_num = get_variant_number(item)

                # Read variant files
                variant_index = item / 'index.md'
                html_file = item / 'html.inc'
                css_file = item / 'css.inc'

                variant_title = ""
                if variant_index.exists():
                    variant_content = read_file(variant_index)
                    variant_fm, _ = extract_frontmatter(variant_content)
                    variant_title = variant_fm.get('title', f'Variant {variant_num}')

                html_code = read_file(html_file)
                css_code = read_file(css_file)

                if html_code or css_code:  # Only add if there's content
                    variants.append({
                        'number': variant_num,
                        'title': variant_title,
                        'html': html_code,
                        'css': css_code,
                    })
    except Exception as e:
        print(f"Warning: Error processing variants in {resource_path}: {e}")

    if not variants:
        return None

    return {
        'name': resource_path.name,
        'title': title,
        'description': description,
        'category': category_name,
        'variants': sorted(variants, key=lambda x: x['number']),
    }


def process_category(category_path: Path) -> List[Dict]:
    """Process all resources in a category folder."""
    resources = []
    category_name = category_path.name

    try:
        for item in sorted(category_path.iterdir()):
            if item.is_dir() and not item.name.startswith('_'):
                resource = process_resource(item, category_name)
                if resource:
                    resources.append(resource)
    except Exception as e:
        print(f"Warning: Error processing category {category_path}: {e}")

    return resources


def generate_markdown(all_resources: List[Dict]) -> str:
    """Generate the complete markdown content."""
    lines = []

    lines.append("# Code Library - Complete Export\n")
    lines.append("_Auto-generated document with all resources, components, and examples_\n")

    # Group by category
    by_category = {}
    for resource in all_resources:
        cat = resource['category']
        if cat not in by_category:
            by_category[cat] = []
        by_category[cat].append(resource)

    # Generate markdown for each category
    for category in sorted(by_category.keys()):
        lines.append(f"\n## {category.replace('-', ' ').title()}\n")

        for resource in sorted(by_category[category], key=lambda x: x['name']):
            # Resource header
            lines.append(f"### {resource['title']}\n")

            if resource['description']:
                lines.append(f"_{resource['description']}_\n")

            # Process each variant
            for variant in resource['variants']:
                variant_title = variant['title'] or f"Example {variant['number']}"
                lines.append(f"#### {variant_title}\n")

                # HTML block
                if variant['html']:
                    lines.append("**HTML:**\n")
                    lines.append("```html\n")
                    lines.append(variant['html'])
                    if not variant['html'].endswith('\n'):
                        lines.append('\n')
                    lines.append("```\n")

                # CSS block
                if variant['css']:
                    lines.append("**CSS:**\n")
                    lines.append("```css\n")
                    lines.append(variant['css'])
                    if not variant['css'].endswith('\n'):
                        lines.append('\n')
                    lines.append("```\n")

                lines.append("")

    return "\n".join(lines)


def main():
    """Main execution function."""
    content_dir = Path('content')

    if not content_dir.exists():
        print("Error: 'content' directory not found in current directory")
        return

    print("🔍 Scanning content directory...")

    all_resources = []

    # Process each category folder
    try:
        for item in sorted(content_dir.iterdir()):
            if item.is_dir() and not item.name.startswith('_'):
                print(f"  Processing category: {item.name}")
                resources = process_category(item)
                all_resources.extend(resources)
                print(f"    ✓ Found {len(resources)} resources")
    except Exception as e:
        print(f"Error: Failed to process content directory: {e}")
        return

    print(f"\n📝 Generating markdown for {len(all_resources)} total resources...")
    markdown_content = generate_markdown(all_resources)

    # Write output file
    output_file = Path('EXPORT.md')
    try:
        output_file.write_text(markdown_content, encoding='utf-8')
        print(f"✅ Export complete: {output_file}")
        print(f"   File size: {len(markdown_content) / 1024:.2f} KB")
    except Exception as e:
        print(f"Error: Failed to write output file: {e}")


if __name__ == '__main__':
    main()
