import Turbolinks from 'turbolinks'
import Prism from 'prismjs'
import { initCopyToCB } from './copy.js'
import { initCopyColorToCB } from './copy_colors.js'
import { initSearch } from './algolia.js'
//import 'van11y-accessible-tab-panel-aria'
import './van11y'
import { responsiveNavbar } from './navbar.js'
//import '@fortawesome/fontawesome-free/js/all'

Turbolinks.start()

window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})
window.addEventListener("DOMContentLoaded", initCopyColorToCB, {once: true})

initSearch();

Prism.highlightAll();

responsiveNavbar()
