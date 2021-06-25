/* DESKTOP SPECIFICS - STYLE OF SCROLLING MENU
========================================================================== */

.dropdown-content {
    position: absolute;
    background-color: #FFF;
    filter: drop-shadow(0px 14px 8px rgba(37, 48, 59, 0.1));
    z-index: 1;
    padding: 10px 20px;
    min-width: 150px;  
}

.dropdown-content a {
    color: var(--links);
    text-decoration: none;
    display: block;
    opacity:1;
    padding: 5px;
    font-size: 0.8rem;
    line-height: 35px;
}

.dropdown-content a:hover {
    text-decoration: underline;
    background-color: #FFF;
    color: var(--links);
}

@media screen and (min-width: 1000px){
    .dropdown-content {
        display: none;
    }

    .scrolling-menu:hover  .dropdown-content {
        display: block;
    }

    .scrolling-menu:hover .ods-front-header__menu-item-link {
         background-color: var(--highlight);
         color: #FFFFFF; /* Header link color when the link is active */
    }   
    .scrolling-menu:hover .dropdown-content a {
            background-color: #FFF;
    color: var(--links);
    }
}

/* MOBILE SPECIFICS - STYLE OF SCROLLING MENU
========================================================================== */

@media screen and (max-width: 1000px){    
    .dropdown-content {
        position: relative;
        padding-left: 25px;
        filter: none;
    }
}