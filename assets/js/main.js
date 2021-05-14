import initCopyToCB from "./copy.js";
import { initSearch } from "./algolia.js";
import Prism from "prismjs";
import makeTabsAccessible from "./van11y";
import { responsiveNavbar } from "./navbar.js";
import initToggleCode from "./show-code.js";

// window.addEventListener("DOMContentLoaded", initCopyToCB, { once: true });

initCopyToCB();
initSearch();
Prism.highlightAll();
responsiveNavbar();
makeTabsAccessible();
initToggleCode();
