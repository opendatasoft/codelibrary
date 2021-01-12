/* Navigation dropdown panel
========================================================================== */

.navbar-panel {
    padding-left: 25px;
    margin-bottom: 1rem;
}

@media screen and (min-width: 1000px) {
    .navbar-panel {
        position: absolute;
        left: 0;
        right: 0;
        margin-left: auto;
        margin-right: auto;
        width: 80%;
        z-index: 11;
        visibility: hidden;
        opacity: 0;
        position: absolute;
        padding-left: 0;
        transform: translateY(0);
        transition: visibility 0s, opacity 0.2s ease, transform 0.3s ease; 
    }    
}

@media screen and (min-width: 1000px) {
    .navbar-panel-visible {
        transform: translateY(13px);
        opacity: 1;
        visibility: visible;
    }
    
    .navbar-panel-content {
        background-color: rgba(255, 255, 255, .95);
        border-radius: 4px;
        padding: 26px;
        box-shadow: 0 1px 3px rgba(0, 0, 0, 0.12), 0 1px 2px rgba(0, 0, 0, 0.24);
        display: grid;
        grid-template-columns: 1fr 1fr 1fr;
        grid-column-gap: 20px;
        grid-row-gap: 20px;
    }
}

.navbar-panel-block-title {
    display: none;
}

@media screen and (min-width: 1000px) {
    .navbar-panel-block-title {
        display: block;
        font-size: 1.2rem;
        font-weight: normal;
        margin-bottom: 13px;
    }    
}

.navbar-panel-block-description {
    display: none;
}

@media screen and (min-width: 1000px) {
    .navbar-panel-block-description {
        display: block;
        font-size: 1rem;
        margin-bottom: 13px;
    }    
}

.navbar-panel-block-link {
    color: #FFFFFF;
    font-size: .866rem;
    text-decoration: none;
    transition: all .2s;
}

.navbar-panel-block-link:hover {
    text-decoration: none;
    opacity: .7;
}

.navbar-panel-block-link .fa {
    display: none;
}

@media screen and (min-width: 1000px) {
    .navbar-panel-block-link {
        font-size: 1rem;
        color: var(--links);
    }
    
    .navbar-panel-block-link .fa {
        display: inline-block;
    }
}

/* Backdrop */
.navbar-panel-backdrop {
    position: fixed;
    top: 0;
    bottom: 0;
    left: 0;
    right: 0;
    cursor: auto;
    z-index: 10;
}