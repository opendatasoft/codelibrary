
/* START - STYLE OF HEADER SCROLLING MENU
========================================================================== */

li.custom-menu-item {
    position: relative;
}

li.custom-menu-item:first-child {
    margin-left: inherit; }

li.custom-menu-item > a {
    display: flex;
    align-items: center;
    color: var(--header-links);
    font-size: 1rem;
    border: none;
    letter-spacing: .8px;
    line-height: 59px;
    opacity: 1;
    margin: 0;
    text-transform: uppercase;
    padding: 0 20px;
}

li.scrolling-menu i {
font-size: 1.2em;
    margin-left: 13.5px;
    color: var(--header-links);
}


li.custom-menu-item.custom-menu-item__active > a,
li.custom-menu-item.custom-menu-item:hover > a{
    background-color: var(--highlight);
    color: #FFFFFF;
    text-decoration: none;
}

ul.custom-menu-item-submenu {
    display: none;
    margin: 0;
    padding: 22px 28px;
    list-style: none;
    background-color: white; }

ul.custom-menu-item-submenu.custom-menu-item-submenu__active {
    display: inherit; }

li.custom-menu-item-submenu-item {
    margin-bottom: 26px; }

li.custom-menu-item-submenu-item:last-child {
    margin-bottom: inherit; 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) ul.custom-menu {
    display: flex;
    align-items: center; 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) ul.custom-menu-item-submenu {
    width: 230px;
    position: absolute;
    top: 59px;
    left: 1px;
    z-index: 1001;
    filter: drop-shadow(0px 14px 8px rgba(37, 48, 59, 0.1)); 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .custom-menu .custom-menu-item-submenu {
    width: auto !important;
    top: 59px !important;
    left: 1px !important;
    padding: 20px !important;
    filter: drop-shadow(0px 0px 8px rgba(37, 48, 59, 0.2)) !important; }

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .custom-menu .custom-menu-item-submenu a {
    white-space: nowrap; 
}

/* END - STYLE OF HEADER SCROLLING MENU
========================================================================== */
