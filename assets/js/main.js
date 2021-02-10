import { initCopyToCB } from './copy'
import { initCopyColorToCB } from './copy_colors'
import { initSearch } from './algolia'
import { responsiveNavbar } from './navbar'
import Prism from 'prismjs'
import makeDocumentAccessible from './van11y'

window.addEventListener("DOMContentLoaded", initCopyToCB, {once: true})
window.addEventListener("DOMContentLoaded", initCopyColorToCB, {once: true})
initSearch()
Prism.highlightAll()
responsiveNavbar()
makeDocumentAccessible()
