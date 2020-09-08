import { initCopyToCB } from './copy.js'
window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})

import { initSearch } from './algolia.js'
initSearch();

import Prism from 'prismjs'
Prism.highlightAll();
