/* Search Box Card
   ========================================================================== */
.search-card-container {
	display: flex;
	justify-content: center;
	width: 100%;
	max-width: 500px;
	margin: 0 auto;
}
.search-card-title {
	color: var(--titles);
	font-size: 1.2rem;
	line-height: 1.5;
	font-weight: normal;
	text-align: center;
}
.search-card-searchbox {
	margin-bottom: 0;
	flex: 1 1 auto;
}
.search-card-searchbox .odswidget-searchbox__box {
	font-size: 1rem;
    display: block;
    width: 100%;
    max-width: 500px;
    padding: 8px 13px;
    border-radius: 4px 0 0 4px;
    border-top: 1px solid #cbd2db;
    border-left: 1px solid #cbd2db;
    border-bottom: 1px solid #cbd2db;
    border-right: none;
    margin: 0 auto;
}
.search-card-submit-button {
	border: none;
	background-color: var(--highlight);
	color: #FFFFFF;
	font-size: .866rem;
	font-weight: bold;
	text-align: center;
	padding: 8px 12px;
	border-radius: 0 4px 4px 0;
	transition: opacity .2s;
	cursor: pointer;
}
.search-card-submit-button:hover {
	text-decoration: none;
	opacity: .8;
}
