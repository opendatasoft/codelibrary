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
    margin-bottom: 20px;
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
.filter-list > * {
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
    .filter-list > * {
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
.odswidget-date-range-slider .irs--flat .irs-from, .odswidget-date-range-slider .irs--flat .irs-single, .odswidget-date-range-slider .irs--flat .irs-to {
    color: var(--text);
    border: 1px solid #cbd2db;
    border-radius: 2rem;
    background: #FFFFFF;
}
.odswidget-date-range-slider .irs--flat .irs-from:before, .odswidget-date-range-slider .irs--flat .irs-single:before, .odswidget-date-range-slider .irs--flat .irs-to:before {
    border-top-color: var(--text);
}
.odswidget-date-range-slider .irs--flat .irs-bar {
    background-color: var(--highlight);
}
.odswidget-date-range-slider .irs--flat .irs-handle>i:first-child {
    background-color: var(--highlight);
}
.odswidget-date-range-slider .irs--flat .irs-handle.state_hover>i:first-child, .odswidget-date-range-slider .irs--flat .irs-handle:hover>i:first-child {
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

.content-card-horizontal {
    display: flex;
}

.content-card-horizontal .content-card-img {
    height: auto;
    flex: 0 0 25%;
    width: 25%;
    border-radius: 4px 0 0 4px;
}

.content-card-img {
    display: block;
    height: 110px;
    background-position: center;
    background-size: cover;
    background-repeat: no-repeat;
}

.content-card-body {
    padding: 26px;
    flex: 1 1 auto;
}

.content-card-title {
    color: var(--titles);
    font-size: 1.2rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}

.content-card-description {
    color: var(--text);
    font-size: 1rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 26px;
    max-width: 100%;
}

.content-card-fields dt {
    font-size: 0.8rem;
    opacity: 0.8;
}

.content-card-fields dd {
    margin-left: 0;
}

.content-card-icon {
    color: var(--highlight);
    font-size: 2rem;
    margin-bottom: 13px;
    max-width: 100%;
}

.content-card-link {
    color: var(--links);
    font-weight: bold;
    transition: all .2s;
    opacity: 1;
    max-width: 100%;
}

.content-card-link:hover {
    opacity: .7;
    text-decoration: none;
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
    padding: 39px;
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

.kpi-icon {
    color: var(--highlight);
    color: var(--secondary-color);
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}

.kpi-title {
    font-weight: normal;
    color: var(--highlight);
    font-size: 3.2rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}

.kpi-unit {
    font-size: 0.8em;
    color: var(--secondary-color);
}

.kpi-description {
    color: var(--text);
    font-size: 1rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 0;
    max-width: 100%;
}


/* Table Module Basic
========================================================================== */

.table-module {
    height: 1000px;
    overflow-y: auto;
}

.table-basic {
    display: table;
    border-collapse: collapse;
    width: 100%;
    white-space: nowrap;
    background-color: #FFFFFF;
    margin-bottom: 20px;
}

.table-basic thead th {
    color: var(--titles);
    background-color: #f6f8fb;
    font-weight: 500;
    padding: 13px 3px;
    position: sticky;
    top: 0;
    z-index: 1;
}

.table-basic thead th:first-child,
.table-basic tbody td:first-child {
    padding-left: 13px;
}

.table-basic tr td,
.table-basic tbody th {
    font-weight: normal;
    border-top: 1px solid #dee5ef;
}

.table-basic tr td {
    padding: 13px 3px;
}

.table-basic td {
    overflow: hidden;
    white-space: nowrap;
    text-overflow: ellipsis;
}

.table-dropdown-button {
    width: 28px;
    height: 28px;
    padding: 0;
    line-height: 1;
    display: flex;
    align-items: center;
    justify-content: center;
    background: white;
    border: 1px solid transparent;
    border-radius: 4px;
    margin-left: auto;
}

.table-basic tr:hover .table-dropdown-button {
    border-color: var(--highlight);
    text-decoration: none;
}
