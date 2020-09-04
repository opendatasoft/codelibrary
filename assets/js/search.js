import Fuse from 'fuse.js'

const options = {
  // isCaseSensitive: false,
  // includeScore: false,
  // shouldSort: true,
  // includeMatches: false,
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
    "author.firstName"
  ]
};

const searchBox = document.getElementById('search-box')
const searchResultsBox = document.getElementById('search-results-box')

const initFuse = async () => {
  const res = await fetch('index.json')
  const list = await res.json()
  const fuseInstance = new Fuse(list, options)
  return fuseInstance
}

const updateSearch = fuseInstance => event => {
  const pattern = event.target.value
  const searchResults = fuseInstance.search(pattern)
  searchResultsBox.innerText = JSON.stringify(searchResults)
}

export default async () => {
  const fuse = await initFuse()
  searchBox && searchBox.addEventListener('input', updateSearch(fuse))
}
