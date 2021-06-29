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

/* MOBILE SPECIFICS - STYLE OF ODS HEADER
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

/* DESKTOP SPECIFICS - STYLE OF DROPDOWN MENU
========================================================================== */

.dropdown-menu-content {
    position: absolute;
    background-color: var(--header-background);
    filter: drop-shadow(0px 14px 8px rgba(37, 48, 59, 0.1));
    z-index: 1;
    padding: 10px 20px;
    min-width: 150px;  
}

.dropdown-menu-content a {
    color: var(--links);
    text-decoration: none;
    display: block;
    opacity:1;
    padding: 5px;
    font-size: 0.8rem;
    line-height: 35px;
}

.dropdown-menu-content a:hover {
    color: var(--links);
    text-decoration: underline;
}

@media screen and (min-width: 1000px){
    .dropdown-menu-content {
        display: none;
    }

    .dropdown-menu:hover  .dropdown-menu-content {
        display: block;
    }

    .dropdown-menu:hover .ods-front-header__menu-item-link {
        opacity: 1;
    }   
}

/* MOBILE SPECIFICS - STYLE OF DROPDOWN MENU
========================================================================== */

@media screen and (max-width: 1000px){    
    .dropdown-menu-content {
        position: relative;
        padding-left: 25px;
        filter: none;
    }
}
