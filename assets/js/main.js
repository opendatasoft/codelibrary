import { initSearch } from './search.js'
import { initCopyToCB } from './copy.js'

initSearch()
window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})
