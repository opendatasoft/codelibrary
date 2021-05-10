import initCopyToCB from "./copy.js";
import { initCopyColorToCB } from "./copy_colors.js";
import { initSearch } from "./algolia.js";
import Prism from "prismjs";
import makeTabsAccessible from "./van11y";
import { responsiveNavbar } from "./navbar.js";
import initToggleCode from "./show-code.js";

window.addEventListener("DOMContentLoaded", initCopyToCB, { once: true });
window.addEventListener("DOMContentLoaded", initCopyColorToCB, { once: true });

initSearch();
Prism.highlightAll();
responsiveNavbar();
makeTabsAccessible();
initToggleCode();
