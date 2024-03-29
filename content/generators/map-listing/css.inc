/* General Layout
========================================================================== */

main.main--page {
  margin: 0;
}

/* Body text */
p {
  text-align: justify;
  margin-top: 0;
  margin-bottom: 1.5rem;
}

ul {
  list-style: none;
  padding-left: 0;
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

.margin-bottom-20 {
  margin-bottom: 20px;
}

.page-section {
  margin-top: 2rem;
  margin-bottom: 6rem;
}

.section-title {
  font-size: 2.2rem;
  font-weight: 400;
  color: #FFF;
  background-color: var(--highlight);
  text-align: center;
  padding: 10px;
  margin-top: 1.5rem;
  margin-bottom: 1.5rem;
}

/* Header
========================================================================== */

.page-header {
  background-color: var(--highlight);
  min-height: 180px; /* Change the height of the image here by increasing or decreasing the pixels. */
  /* Properties of the title located within the image banner */
  display: flex;
  justify-content: center;
  align-items: flex-end;
  margin-bottom: 40px;
  background-size: cover;
  background-repeat: no-repeat;
  background-position: center center;
  background-image: url('');
}

.page-title {
  color: var(--highlight);
  text-align: center;
  background-color: var(--page-background);
  position: relative;
  vertical-align: bottom;
  margin: 0;
  font-weight: 400;
  font-size: 2.5rem;
  padding: 15px 20px 10px 20px;
  border-radius: 7px 7px 0px 0px;
}

.page-subtitle {
  font-weight: 400;
  margin-top: 0;
  margin-bottom: 20px;
  font-size: 1.14rem;
}


/* Search Module
========================================================================== */

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


/* Content Card
========================================================================== */

.content-card {
  background-color: var(--boxes-background);
  border-radius: 4px;
  height: 100%;
  padding: 26px;
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
  margin-bottom: 10px;
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


/* Results and Map
========================================================================== */

.odswidget-map__map {
  min-height: 550px;
}

@media screen and (min-width: 991px) {
  .col-md-5 {
    padding-right: 0;
  }

  .col-md-7 {
    padding-left: 0;
  }
}


.result-list {
  list-style: none;
  padding-left: 0;
  margin-top: 0;
  height: 550px;
  overflow-y: auto;
}

.result {
  margin-bottom: 10px;
  padding: 0 1rem 1rem 0;
  border-bottom: 1px solid #DEE5EF;
}

.result.result-img-horizontal {
  display: flex;
}

.result-img-horizontal .result-img {
  flex: 0 0 35%;
  width: 35%;
  height: auto;
}

.result-img {
  disaply: block;
  height: 118px;

  background-position: center;
  background-size: cover;
  background-repeat: no-repeat;
}

.result-img-horizontal .result-content {
  margin-left: 0.7rem;
}
:not(.result-img-horizontal) .result-content {
  margin-top: 0.7rem;
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
