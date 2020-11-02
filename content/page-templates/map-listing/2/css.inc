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

.modal {
    display: none;
    flex-direction: column;
    background-color: #FFFFFF;
    box-shadow: 0 1px 5px rgba(0,0,0,0.65);
    width: 100vw;
    height: 100vh;
    position: absolute;
    top: 0;
    left: 0;
    border-radius: 0;
    z-index: 30;
    overflow: hidden; /* Disable horizontal scroll */
}

@media screen and (min-width: 768px) {
	.modal {
		display: flex;
		width: 400px;
		height: calc(100vh - 55px);
		top: 10px;
		left: 47px;
		border-radius: 6px;
	}
}

.modal.is-visible {
	display: flex;
}

.modal-open-mobile {
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

.modal-open-mobile:hover {
	background-color: #f2f2f2;
}

@media screen and (min-width: 768px) {
	.modal-open-mobile {
		display: none;
	}
}

.modal-open-mobile-title {
	margin: 0;
	font-weight: bold;
}

.modal-close-mobile {
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

.modal-close-mobile:hover {
	background-color: #f2f2f2;
	opacity: 1;
}

@media screen and (min-width: 768px) {
	.modal-close-mobile {
		display: none;
	}
}

.modal-header {
    padding: 26px 26px 0 26px;
    box-shadow: 0 1px 2px rgba(0,0,0,.13);
}

.modal-title {
    margin-top: 0;
    margin-bottom: 13px;
    text-align: center;
    font-weight: 400;
    font-size: 1.5rem;
}

.modal-content {
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
}

.dropdown {
    display: inline-block;
    width: 100%;
    margin: 13px 0 0 0;
    position: relative;
}

/* Button */

.dropdown-button {
    width: 100%;
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
    width: 100%;
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