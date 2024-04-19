/* General Layout
========================================================================== */

:root {
    --secondary-color: black;  
}

main {
    margin: 6rem 0 3em 0;
}



@media screen and (min-width: 992px) {
    .row-equal-height {
        display: -webkit-box;
        display: -ms-flexbox;
        display: flex;
        -ms-flex-wrap: wrap;
        flex-wrap: wrap;
        margin-bottom: 20px;
    }
    /* Fix for early content wrapping in Safari*/
    .row-equal-height:before,
    .row-equal-height:after {
        content: normal;
    }
}

.page-title {
    font-size: 3rem;
    font-weight: bold;
    margin-top: 0;
    margin-bottom: 1rem;
}

.page-subtitle {
    font-size: 1.2rem;
    line-height: 2;
    margin-top: 0;
    margin-bottom: 3rem;
}

.margin-bottom-20 {
    margin-bottom: 20px;
}


/* Search Module
========================================================================== */

.search-module-container {
    padding: 26px;
    margin-bottom: 25px;
}

.search-module {
    display: flex;
    align-items: stretch;
    border-bottom: 1px solid #dee5ef;
    margin-bottom: 13px;
    transition: all .2s;
}

.search-module:hover,
.search-module:focus-within {
    border-bottom-color: var(--links);
}

.search-module-icon {
    color: #898d92;
    margin-right: 8px;
    align-self: center;
}

.search-module-input {
    background-color: transparent;
    width: 100%;
    outline: none;
    border: none;
    padding: 12px 0;
    transition: all .2s;
    color: var(--text);
}

.search-module-input::placeholder {
    transition: all .2s;
}

.search-module-clear {
    color: #898d92;
    font-size: 1rem;
    background: transparent;
    border: none;
    margin: 0;
    outline: none;
    padding: 0 0 0 12px;
    transition: all .2s;
}

.search-module-clear:hover {
    opacity: .65;
}

.search-module:hover .search-module-icon,
.search-module:focus-within .search-module-icon,
.search-module:hover .search-module-input::placeholder,
.search-module:focus-within .search-module-input::placeholder {
    color: var(--links)
}


/* Filters
========================================================================== */

.filter-list {
    display: flex;
    flex-wrap: wrap;
    position: relative;
}

.filter-list>* {
    margin: 0 0 10px;
    width: 100%;
}

.odswidget-select .odswidget-select-dropdown.open .odswidget-select-dropdown-menu {
    width: 100%
}

.clear-filters {
    display: flex;
    align-items: center;
    justify-content: center;
}

.clear-filters-button:hover {
    opacity: 0.65;
}

.odswidget-select,
.odswidget-select .odswidget-select-dropdown {
    width: 100%;
}

@media screen and (min-width: 500px) {
    .filter-list>* {
        margin: 0 10px 10px 0;
        width: inherit;
    }
    .odswidget-select .odswidget-select-dropdown.open .odswidget-select-dropdown-menu {
        width: max-content;
        min-width: 240px;
    }
}


/*********** Filter date ************/

.filter-date {
    display: flex;
    flex-direction: column;
    align-items: center;
    margin: 13px 26px 32px 26px;
}

.odswidget-date-range-slider {
    width: 100%;
}

.filter-date-button {
    margin-left: 0;
    margin-top: 13px;
    white-space: nowrap;
    text-decoration: underline;
}

.filter-date-button:not(.filter-date-button-disabled):hover {
    opacity: 0.65;
}

.filter-date-button-disabled {
    opacity: 0.5;
    pointer-event: none;
    text-decoration: none;
}

@media screen and (min-width: 500px) {
    .filter-date {
        flex-direction: row;
    }
    .filter-date-button {
        margin-left: 50px;
        margin-top: 0;
    }
}


/* date range slider style override */

.odswidget-date-range-slider .irs--flat .irs-from,
.odswidget-date-range-slider .irs--flat .irs-single,
.odswidget-date-range-slider .irs--flat .irs-to {
    color: var(--text);
    border: 1px solid #cbd2db;
    border-radius: 2rem;
    background: #FFFFFF;
}

.odswidget-date-range-slider .irs--flat .irs-from:before,
.odswidget-date-range-slider .irs--flat .irs-single:before,
.odswidget-date-range-slider .irs--flat .irs-to:before {
    border-top-color: var(--text);
}

.odswidget-date-range-slider .irs--flat .irs-bar {
    background-color: var(--highlight);
}

.odswidget-date-range-slider .irs--flat .irs-handle>i:first-child {
    background-color: var(--highlight);
}

.odswidget-date-range-slider .irs--flat .irs-handle.state_hover>i:first-child,
.odswidget-date-range-slider .irs--flat .irs-handle:hover>i:first-child {
    background-color: var(--text);
}


/* Content Card
========================================================================== */

.content-card {
    background-color: var(--boxes-background);
    border-radius: 4px;
    height: 100%;
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
}

.content-card-button {
    color: var(--highlight);
    border: 1px solid var(--highlight);
    background: transparent;
    display: inline-block;
    text-align: center;
    font-size: .867rem;
    border-radius: 4px;
    padding: .5rem 1.15rem;
    text-decoration: none;
    transition: all .2s;
}

.content-card-button:hover {
    background-color: var(--highlight);
    color: #FFFFFF;
    text-decoration: none;
}


/* KPI Card
========================================================================== */

@media screen and (min-width: 992px) {
    .kpis-container {
        display: flex;
        justify-content: center;
    }
}

.kpi-card {
    background-color: var(--boxes-background);
    height: 100%;
    padding: 30px;
    border-radius: 4px;
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-orient: vertical;
    -webkit-box-direction: normal;
    -ms-flex-direction: column;
    flex-direction: column;
    -webkit-box-align: center;
    -ms-flex-align: center;
    align-items: center;
    text-align: center;
    -webkit-box-pack: center;
    -ms-flex-pack: center;
    justify-content: center;
    text-align: center;
}


.kpi-title {
    font-weight: normal;
    color: var(--highlight);
    font-size: 3.2rem;
    margin-top: 0;
    margin-bottom: 7px;
    max-width: 100%;
}

.kpi-unit {
    font-size: 0.8em;
    color: var(--secondary-color);
}

/* Access-card
========================================================================== */

.col-md-4 {
        padding-bottom: 20px
}


ul {
  padding-left: 13px;
}

.access-card {
    border-radius: 10px;
    background-color: #fff;
    height: 100%;
    background-color: #f6f8fb;
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.13);
    transition: all 0.3s;
    display: block;
    color: var(--text);
    margin-bottom: 10px;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    overflow: hidden;
    
}

.access-card:hover {
    box-shadow: 0px 6px 13px rgba(0, 0, 0, 0.5);
    text-decoration: none;
    overflow: hidden;
}

.access-card-img {
    background-repeat: no-repeat;
    background-size: cover;
    background-position: center;
    height: 250px;
    position: relative;
    border-radius: 10px 10px 0 0;
}

.access-card-content {
    padding: 26px 26px 10px 26px;
}

.access-card-pretitle {
    text-transform: uppercase;
    color: #FFF;
    background-color: var(--links) ;
    border-radius: 3px;
    font-weight: 400;
    margin: 0px;
    font-size: 12px;
    position: absolute;
    bottom: 15px;
    left: 26px;
    padding: 5px;
}

.access-card-title {
    font-weight: 400;
    margin: 10px 0px;
    font-size: 22px;
    border-bottom: solid var(--highlight) 2px;
    padding-bottom: 10px;
}

.access-card-subtitle {
    font-size: 16px;
    font-weight: 400;
    margin: 0px 0px 10px 0px;
}

.access-card-content p {
    margin: 5px 0px;
}

.access-card-button {
    display: flex;
    justify-content: center;
    margin: 0px 26px 26px;
    padding-top: 0px;
}

.access-card-button:hover {
    opacity: 0.7;
}

.access-card-button-content {
    background-color: var(--highlight);
    text-align: center;
    color: #FFF;
    border-radius: 24px;
    padding: 10px 20px 10px 20px;
    width: fit-content;
}
