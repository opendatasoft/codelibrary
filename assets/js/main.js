import { initCopyToCB } from './copy.js'
window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})

import { initSearch } from './algolia.js'
initSearch();

import Prism from 'prismjs'
Prism.highlightAll();

//import 'van11y-accessible-tab-panel-aria'
import './van11y'
