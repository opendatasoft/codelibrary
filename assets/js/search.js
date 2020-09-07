import Fuse from 'fuse.js'

const options = {
  // isCaseSensitive: false,
  // includeScore: false,
  // shouldSort: true,
  includeMatches: true,
  // findAllMatches: false,
  // minMatchCharLength: 1,
  // location: 0,
  // threshold: 0.6,
  // distance: 100,
  // useExtendedSearch: false,
  // ignoreLocation: false,
  // ignoreFieldNorm: false,
  keys: [
    "title",
    "contents",
    "tags",
    "categories"
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
  const extract  = result.matches.map(match => {
    const temp = {
      title: result.item.title,
      item: result.item
    }
    const start = match.indices[0][0]
    const end = match.indices[0][1]
    const key = match.key
    const highlight = '...'
      + match.value.slice(start - 15, start)
      + '<strong>'
      + match.value.slice(start, end+1)
      + '</strong>'
      + match.value.slice(end+1, end + 15)
      + '...'
    temp[key] = highlight;
    temp['match'] = key;
    console.log(temp)
    return temp
  })
  return extract
}

const updateSearch = fuseInstance => event => {
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

export default async () => {
  const fuse = await initFuse()
  searchBox && searchBox.addEventListener('input', updateSearch(fuse))
}

