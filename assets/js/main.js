import { initSearch } from './search.js'
import { initCopyToCB } from './copy.js'
import Prism from 'prismjs'

window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})
initSearch()
Prism.highlightAll()
