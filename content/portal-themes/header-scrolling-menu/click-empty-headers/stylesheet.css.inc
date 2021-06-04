
/* DESKTOP SPECIFICS - STYLE OF ODS HEADER
========================================================================== */

.ods-front-header {
    height: 60px;
}

.ods-responsive-menu-collapsible__content {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-align: center;
    -ms-flex-align: center;
    align-items: center;
}

.ods-front-header__portal-brand {
    display: flex;
    height: 40px;
    position: relative;
    top: 0;
}

/* DESKTOP SPECIFICS - STYLE OF SCROLLING MENU
========================================================================== */
.portal-navigation {
    margin: 0;
    -webkit-box-flex: 1;
    -ms-flex: 1 1 auto;
    flex: 1 1 auto;
}

li.custom-menu-item {
    position: relative;
}

li.custom-menu-item > a {
    display: flex;
    align-items: center;
    color: var(--header-links);
    font-size: 1.4rem;
        font-weight: 400;
    border: none;
    line-height: 55px;
    opacity: .5;
    margin: 0;
    padding: 0 20px;
}

li.scrolling-menu i {
    font-size: 1.2em;
    margin-left: 13.5px;
    color: var(--header-links);
}

li.custom-menu-item.custom-menu-item__active > a,
li.custom-menu-item.custom-menu-item:hover > a{
    color: white;
    opacity: 1;
    text-decoration: none;
}

ul.custom-menu-item-submenu {
    display: none;
    margin: 0;
    padding: 22px 28px;
    list-style: none;
    background-color: var(--header-background); 
}

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
    top: 55px;
    left: 1px;
    z-index: 1001;
    filter: drop-shadow(0px 14px 8px rgba(37, 48, 59, 0.1)); 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .custom-menu .custom-menu-item-submenu {
    width: auto !important;
    top: 55px !important;
    left: 1px !important;
    padding: 20px !important;
    filter: drop-shadow(0px 0px 8px rgba(37, 48, 59, 0.2)) !important; }

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .custom-menu .custom-menu-item-submenu a {
    white-space: nowrap; 
}


/* MOBILE SPECIFICS
========================================================================== */
.ods-responsive-menu-placeholder.ods-responsive-menu-placeholder--active {
    height: 100%;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-align: center;
    -ms-flex-align: center;
    align-items: center;
}

.ods-responsive-menu--collapsed .ods-responsive-menu-collapsible__content {
    -webkit-box-align: start;
    -ms-flex-align: start;
    align-items: flex-start;
    -webkit-box-orient: vertical;
    -webkit-box-direction: normal;
    -ms-flex-direction: column;
    flex-direction: column;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__logo {
    display: none;
}

.ods-responsive-menu-collapsible--collapsed .portal-navigation,
.ods-responsive-menu-collapsible--collapsed .ods-front-header__menu,
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu
{
    width: 100%;
}
