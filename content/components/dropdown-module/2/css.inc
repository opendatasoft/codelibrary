/* Dropdown menu with pill styling
   ========================================================================== */
.cl-dropdown {
    display: inline-block;
    margin: 13px 0 26px 0;
    position: relative;
}
/* Button */
.cl-dropdown-button {
    font-size: 1rem;
    color: var(--text);
    border: 1px solid #cbd2db;
    border-radius: 2rem;
    background: #FFFFFF;
    padding: .37rem 1rem;
    margin-right: 6px;
    transition: all .2s;
}
.cl-dropdown-button:hover,
.cl-dropdown-button:focus {
    color: var(--links);
    border-color: var(--links);
}
.cl-dropdown-button-open {
    border-color: var(--links);
    box-shadow: 0 0 0 3px rgba(20, 46, 123, .2);
}
.cl-dropdown-button-active {
    color: var(--links);
    border-color: var(--links);
    background-color: rgba(20, 46, 123, 0.1);
}
/* Dropdown styling */
.cl-dropdown-menu {
    background-color: #FFFFFF;
    border: 1px solid #dee5ef;
	max-width: 350px;
    overflow-x: auto;
    border-radius: 4px;
    box-shadow: 0px 2px 4px rgba(0,0,0,0.15);
    visibility: hidden;
    opacity: 0;
    position: absolute;
    top: 0;
    z-index: 11;
    white-space: nowrap;
    transition: visibility 0s, opacity 0.1s ease, top 0.1s ease;
}
.cl-dropdown-visible {
    opacity: 1;
    visibility: visible;
    top: 38px;
}
/* Dropdown items */
.cl-dropdown-menu {
    padding: 26px 0;
}
.cl-dropdown-title {
    font-size: 1.3rem;
    color: var(--text);
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 0;
    padding: 0 26px;
}
.cl-dropdown-items {
    list-style: none;
    padding: 0 26px;
    margin: 0;
    display: flex;
    flex-direction: column;
    max-height: 180px;
    overflow-y: auto;
}
.cl-dropdown-item {
    font-size: 1rem;
    display: block;
    margin-top: 13px;
}
.cl-dropdown-item:hover {
    text-decoration: none;
}
.cl-dropdown-input {
    margin-right: 4px;
}
.cl-dropdown-label {
    display: block;
    margin-bottom: 0;
    cursor: pointer;
	max-width: 100%;
    text-overflow: ellipsis;
    overflow: hidden;
    padding-left: 2px;
}
/* Backdrop */
.cl-dropdown-backdrop {
    position: fixed;
    top: 0;
    bottom: 0;
    left: 0;
    right: 0;
    cursor: auto;
	z-index: 10;
}
/* Class used to center the content within the card */
.centered-card {
	display: flex;
	flex-direction: column;
	align-items: center;
	justify-content: center;
}
/* Content Card
   ========================================================================== */
.content-card {
	background-color: var(--boxes-background);
	padding: 26px;
	border-radius: 4px;
	margin-bottom: 20px;
	height: 100%;
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
