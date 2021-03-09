/* General Layout
========================================================================== */

body, .main--page {
    padding: 0;
    margin: 0;
}

.ods-front-header, .ods-front-footer, .ods-content:after, footer {
    display: none;
}

ods-dataset-context {
    display: block;
    position: relative;
}

.odswidget.odswidget-map {
    width: 100%;
    height: 100vh;
}

/* Modal
   ========================================================================== */

.cl-modal {
    display: none;
    flex-direction: column;
    background-color: #FFFFFF;
    box-shadow: 0 1px 5px rgba(0,0,0,0.65);
    width: 100vw;
    height: 100vh;
    position: absolute;
    top: 35%;
    left: 0;
    border-radius: 6px 6px 0 0;
    z-index: 30;
    overflow: hidden; /* Disable horizontal scroll */
}

@media screen and (min-width: 768px) {
    .cl-modal {
        display: flex;
        width: 400px;
        height: calc(100vh - 55px);
        top: 10px;
        left: 47px;
        border-radius: 6px;
    }
}

.cl-modal.is-visible {
    display: flex;
}

.cl-modal-open-mobile {
    position: absolute;
    bottom: 0;
    text-align: center;
    width: 100vw;
    background-color: #FFFFFF;
    padding: 13px;
    z-index: 20;
    border-radius: 6px 6px 0 0;
    box-shadow: 0 0 5px rgba(0,0,0,0.65);
    transition: all .2s;
}

.cl-modal-open-mobile:hover {
    background-color: #f2f2f2;
}

@media screen and (min-width: 768px) {
    .cl-modal-open-mobile {
        display: none;
    }
}

.cl-modal-open-mobile-title {
    margin: 0;
    font-weight: bold;
}

.cl-modal-close-mobile {
    position: absolute;
    top: 5px;
    right: 5px;
    background-color: transparent;
    border-radius: 10000px;
    border: none;
    font-size: 2.5rem;
    opacity: .6;
    transition: all .2s;
}

.cl-modal-close-mobile:hover {
    background-color: #f2f2f2;
    opacity: 1;
}

@media screen and (min-width: 768px) {
    .cl-modal-close-mobile {
        display: none;
    }
}

.cl-modal-header {
    padding: 26px 26px 0 26px;
    box-shadow: 0 1px 2px rgba(0,0,0,.13);
}

.cl-modal-title {
    margin-top: 0;
    margin-bottom: 13px;
    text-align: center;
    font-weight: 400;
    font-size: 1.5rem;
}

.cl-modal-content {
    height: 100%;
    overflow-y: auto;
}


/* Search Module
   ========================================================================== */

.search-module {
    display: flex;
    align-items: stretch;
    border-bottom: 1px solid #dee5ef;
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

/* Dropdown menu with pill styling
========================================================================== */

.filter-list {
    display: flex;
    flex-wrap: wrap;
    margin-bottom: 20px;
}

.filter-list > div {
    width: 100%;
    margin-top: 13px;
}

.clear-filters {
    display: flex;
    align-items: center;
    justify-content: center;
}
.clear-filters-button:hover {
    opacity: 0.65;
}

/* Results
   ========================================================================== */

.result-list {
    list-style: none;
    padding-left: 0;
    margin-top: 0;
    overflow-y: auto;
}

.result {
    padding: 1rem 26px;
    border-top: 1px solid #DEE5EF;
}

.result:hover {
    background-color: #f5f7fa;
}

.result-title {
    color: var(--titles);
    font-size: 1rem;
    font-weight: bold;
    margin-top: 0;
    margin-bottom: 5px;
}

.result-info {
    list-style: none;
    padding-left: 0;
    margin-top: 0;
    margin-bottom: 10px;
    overflow-wrap: break-word;
}

.result-info dt {
    font-size: .9rem;
    opacity: .9;
}

.result-info dd {
    margin-left: 0;
    margin-bottom: 5px;
}

.result-footer {
    display: flex;
    flex-wrap: wrap;
    align-items: center;
    justify-content: space-between;
}

.result-button {
    display: inline-flex;
    align-items: center;
    background-color: transparent;
    border: 1px solid var(--links);
    color: var(--links);
    line-height: 1.5;
    border-radius: 20px;
    padding: .1rem .8rem;
    margin-right: 4px;
    margin-bottom: 2px;
    transition: all .2s;
}

.result-button .feather-x {
    height: 15px;
    width: 15px;
    margin-left: 4px;
}

.result-button:hover {
    opacity: .65;
    text-decoration: none;
}
