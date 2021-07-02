/* DESKTOP SPECIFICS - STYLE OF ODS HEADER
========================================================================== */

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

/* DESKTOP SPECIFICS - STYLE OF DROPDOWN MENU
========================================================================== */

.ods-front-header__menu-item {
    position: relative;
}

.ods-front-header__menu-item-link--active {
    border-bottom: 0px solid;
    color: #FFF;
    opacity: 1;
}

li.dropdown-menu i {
    font-size: 1.2em;
    margin-left: 13.5px;
    color: var(--header-links);
}

ul.dropdown-menu-submenu {
    display: none;
    margin: 0;
    padding: 22px 28px;
    list-style: none;
    background-color: var(--header-background); 
}

ul.dropdown-menu-submenu.dropdown-menu-submenu__active {
    display: inherit; }

li.dropdown-menu-submenu-item {
    margin-bottom: 26px; }

li.dropdown-menu-submenu-item:last-child {
    margin-bottom: inherit; 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) ul.ods-front-header__menu {
    display: flex;
    align-items: center; 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) ul.dropdown-menu-submenu {
    position: absolute;
    top: 55px;
    left: 1px;
    z-index: 1001;
    filter: drop-shadow(0px 14px 8px rgba(37, 48, 59, 0.1)); 
}

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .ods-front-header__menu .custom-menu-item-submenu {
    width: auto !important;
    top: 55px !important;
    left: 1px !important;
    padding: 20px !important;
    filter: drop-shadow(0px 0px 8px rgba(37, 48, 59, 0.2)) !important; }

.ods-responsive-menu-collapsible:not(.ods-responsive-menu-collapsible--collapsed) .ods-front-header__menu .dropdown-menu-submenu a {
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

.ods-responsive-menu-collapsible--collapsed .ods-front-header__menu,
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu
{
    width: 100%;
}