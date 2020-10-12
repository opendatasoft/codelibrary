* General Layout
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


/* Dropdown menu with pill styling
========================================================================== */

.filter-list {
  display: flex;
  flex-wrap: wrap;
  margin-bottom: 20px;
}

.dropdown {
  display: inline-block;
  margin: 13px 0 0 0;
  position: relative;
}

/* Button */

.dropdown-button {
  font-size: 1rem;
  color: var(--text);
  border: 1px solid #cbd2db;
  border-radius: 2rem;
  background: #FFFFFF;
  padding: .37rem 1rem;
  margin-right: 6px;
  transition: all .2s;
}

.dropdown-button:hover,
.dropdown-button:focus {
  color: var(--links);
  border-color: var(--links);
}

.dropdown-button-open {
  border-color: var(--links);
  box-shadow: 0 0 0 3px rgba(20, 46, 123, .2);
}

.dropdown-button-active {
  color: var(--links);
  border-color: var(--links);
  background-color: rgba(20, 46, 123, 0.1);
}

/* Dropdown styling */

.dropdown-menu {
  background-color: #FFFFFF;
  border: 1px solid #dee5ef;
  border-radius: 4px;
  box-shadow: 0px 2px 4px rgba(0,0,0,0.15);
  max-width: 350px;
  overflow-x: auto;
  visibility: hidden;
  opacity: 0;
  position: absolute;
  top: 0;
  z-index: 11;
  white-space: nowrap;
  transition: visibility 0s, opacity 0.1s ease, top 0.1s ease;
}

.dropdown-visible {
  opacity: 1;
  visibility: visible;
  top: 38px;
}

/* Dropdown items */

.dropdown-menu {
  padding: 26px 0;
}

.dropdown-title {
  font-size: 1.3rem;
  color: var(--text);
  font-weight: normal;
  margin-top: 0;
  margin-bottom: 0;
  padding: 0 26px;
}

.dropdown-items {
  list-style: none;
  padding: 0 26px;
  margin: 0;
  display: flex;
  flex-direction: column;
  max-height: 180px;
  overflow-y: auto;
}

.dropdown-item {
  font-size: 1rem;
  display: block;
  margin-top: 13px;
}

.dropdown-item:hover {
  text-decoration: none;
}

.dropdown-input {
  margin-right: 4px;
}

.dropdown-label {
  display: block;
  margin-bottom: 0;
  cursor: pointer;
  max-width: 100%;
  text-overflow: ellipsis;
  overflow: hidden;
  padding-left: 2px;
}

/* Backdrop */

.dropdown-backdrop {
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  cursor: auto;
  z-index: 10;
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
  padding: 1rem 0;
  border-bottom: 1px solid #DEE5EF;
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