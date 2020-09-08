import Fuse from 'fuse.js'
import Mark from 'mark.js'
import slugify from './utils.js'

const options = {
    // isCaseSensitive: false,
    includeScore: true,
    shouldSort: true,
    includeMatches: true,
    findAllMatches: false,
    threshold: 0.3, // 0 : perfect match only, 1 match n'imp, lesser is better
    tokenize: false,
    // location: 0,
    // distance: 100,
    ignoreLocation: true, // search everywhere in the contents, not only in the first "distance" characters starting from "location"
    minMatchCharLength: 3,
    keys: [
        {name: "title", weight: 0.8},
        {name: "contents", weight: 0.5},
        {name: "tags", weight: 0.3},
        {name: "categories", weight: 0.1}
    ]
};

const searchBox = document.getElementById('search-box')
const searchResultsBox = document.getElementById('search-results-box')

const initFuse = async () => {
    const res = await fetch('/codelibrary/index.json')
    const list = await res.json()
    const fuseInstance = new Fuse(list, options)
    return fuseInstance
}

const getMatchExtracts = (result) => {
    const extract = result.matches.map(match => {
        console.log(match);
        const temp = {
            title: result.item.title,
            item: result.item
        }
        const start = match.indices[0][0]
        const end = match.indices[0][1]
        const key = match.key
        const highlight = '...'
            + match.value.slice(start - 30, start)
            + '<strong>'
            + match.value.slice(start, end + 1)
            + '</strong>'
            + match.value.slice(end + 1, end + 30)
            + '...'
        temp[key] = highlight;
        temp['match'] = key;
        console.log(temp)
        return temp
    })
    return extract
}

const updateSearchold = fuseInstance => event => {
    const pattern = event.target.value
    const searchResults = fuseInstance.search(pattern)
    const extracts = searchResults.map(getMatchExtracts)
    searchResultsBox.innerHTML = '';
    extracts[0].forEach(extract => {
        console.log(extract);
        var li = document.createElement('li');
        li.innerHTML = `
      <a href="${extract.item.permalink}">
        Titre : ${extract.title}
        <p>${extract.match} : ${extract[extract.match]}</p>
      </a>
    `
        searchResultsBox.appendChild(li);
    });
}

const updateSearch = fuseInstance => event => {
    const pattern = event.target.value
    const result = fuseInstance.search(pattern);

    var searchResultsEl = document.getElementById("search-results-box");
    searchResultsEl.innerHTML = '';

    if (result.length > 0) {
        populateResults(result, pattern, searchResultsEl);
    } else {
        var para = document.createElement("li");
        para.innerText = "No matches found";
        searchResultsEl.appendChild(para);
    }
}

var summaryInclude = 60;

function populateResults(result, pattern, searchResultsEl) {
    result.forEach(function (value, key) {
        console.log(value);
        var content = value.item.contents;
        var snippet = "";
        var snippetHighlights = [];
        var tags = [];
        if (options.tokenize) {
            snippetHighlights.push(pattern);
        } else {
            value.matches.forEach(function (mvalue, matchKey) {
                if (mvalue.key == "tags" || mvalue.key == "categories") {
                    snippetHighlights.push(mvalue.value);
                } else if (mvalue.key == "contents") {
                    start = mvalue.indices[0][0] - summaryInclude > 0 ? mvalue.indices[0][0] - summaryInclude : 0;
                    end = mvalue.indices[0][1] + summaryInclude < content.length ? mvalue.indices[0][1] + summaryInclude : content.length;
                    snippet += content.substring(start, end);
                    snippetHighlights.push(mvalue.value.substring(mvalue.indices[0][0], mvalue.indices[0][1] - mvalue.indices[0][0] + 1));
                }
            });
        }

        if (snippet.length < 1) {
            snippet += content.substring(0, summaryInclude * 2);
        }

        var templateDefinition = document.getElementById("search-result-template").innerHTML;

        var output = render(templateDefinition, {
            key: key,
            title: value.item.title,
            link: value.item.permalink,
            tags: value.item.tags,
            categories: value.item.categories,
            score: value.score,
            snippet: snippet
        });

        searchResultsEl.appendChild(htmlToElement(output));

        snippetHighlights.forEach(function (snipvalue, snipkey) {
            new Mark(document.getElementById("summary-" + key)).mark(snipvalue);
        });

    });
}

populateResults

function render(templateString, data) {
    var conditionalMatches, conditionalPattern, copy;
    conditionalPattern = /\$\{\s*isset ([a-zA-Z]*) \s*\}(.*)\$\{\s*end\s*}/g;
    //since loop below depends on re.lastInxdex, we use a copy to capture any manipulations whilst inside the loop
    copy = templateString;
    while ((conditionalMatches = conditionalPattern.exec(templateString)) !== null) {
        if (data[conditionalMatches[1]]) {
            //valid key, remove conditionals, leave content.
            copy = copy.replace(conditionalMatches[0], conditionalMatches[2]);
        } else {
            //not valid, remove entire section
            copy = copy.replace(conditionalMatches[0], '');
        }
    }
    templateString = copy;
    //now any conditionals removed we can do simple substitution
    var key, find, re;
    for (key in data) {
        find = '\\$\\{\\s*' + key + '\\s*\\}';
        re = new RegExp(find, 'g');
        templateString = templateString.replace(re, data[key]);
    }
    return templateString;
}

/**
 * By Mark Amery: https://stackoverflow.com/a/35385518
 * @param {String} HTML representing a single element
 * @return {Element}
 */
function htmlToElement(html) {
    var template = document.createElement('template');
    html = html.trim(); // Never return a text node of whitespace as the result
    template.innerHTML = html;
    return template.content.firstChild;
}

export default async () => {
    const fuse = await initFuse()
    searchBox && searchBox.addEventListener('input', updateSearch(fuse))
}

