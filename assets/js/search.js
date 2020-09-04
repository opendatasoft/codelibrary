import Fuse from 'fuse.js'
import { list } from './list.js'

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

const fuse = new Fuse(list, options)

const searchBox = document.getElementById('search-box')
const searchResultsBox = document.getElementById('search-results-box')

const updateSearch = (event) => {
  const pattern = event.target.value
  const searchResults = fuse.search(pattern)
  searchResultsBox.innerText = JSON.stringify(searchResults)
}

export default () => {
  searchBox && searchBox.addEventListener('input', updateSearch)
}
