---
title: "Import a font icon library - Bootsrap icons"
avoidCSSHighlight: true
---

_[Bootstrap Icons](https://icons.getbootstrap.com/) - Free, high quality, open source icon library with over 1,300 icons._


**Install guide:**

- Get the full library font here: [bootstrap-icons.woff2](https://static.opendatasoft.com/fonts/bootstrap-icons/bootstrap-icons.woff2) 
- Upload it to your portal assets, in `backoffice -> assets -> fonts` (En Français : `Backoffice -> ressources -> police de caractères`)
- Copy the CSS into your portal theme, in `backoffice -> look & feel -> theme -> stylesheet` (En Français : `Backoffice -> Apparence -> Thème -> Feuille de style`)
- Make live (save and apply your theme)
- Finally, simply use icons into your pages

**Usage:**

In your HTML, on `i` tag, set the class to `bi-` followed by the name of the icon.
For example, for the `alarm`, try:
- `<i class="bi-alarm"></i>`
- `<i class="bi-alarm" style="font-size: 2rem; color: cornflowerblue;"></i>`
