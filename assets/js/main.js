import { initCopyToCB } from './copy.js'
window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true});

import { addAnchorsToHeaders } from './utils'
window.addEventListener("DOMContentLoaded", addAnchorsToHeaders);

import { initSearch } from './algolia.js'
initSearch();

import Prism from 'prismjs'
Prism.highlightAll();

//import 'van11y-accessible-tab-panel-aria'
import './van11y'

//import '@fortawesome/fontawesome-free/js/all'

import { responsiveNavbar } from './navbar.js';
responsiveNavbar()