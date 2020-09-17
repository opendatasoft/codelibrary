/* ==========================================================================
   Cards
   ========================================================================== */
/**
 * Styling for the different types of cards:
 * - Colored Card
 * - Content card
 * - Search box card
 * - KPI card
 * - Image card
 */
/* Variables & Shared classes
   ========================================================================== */
:root {
    --secondary-color: #142E7B;
}
.text-center {
	text-align: center;
}
.centered-card {
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
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
}
/* Colored Card (Basic card)
   ========================================================================== */
.color-card {
	background-color: var(--links); /* Background color for IE */
	background-color: var(--secondary-color);
	color: #FFFFFF;
	text-align: center;
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
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	height: 100%;
	text-decoration: none;
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
}
.color-card:hover,
.color-card:focus {
	text-decoration: none;
    -webkit-transform: scale(1.02);
        -ms-transform: scale(1.02);
            transform: scale(1.02);
    -webkit-box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
            box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
}
.color-card-icon {
	font-size: 2rem;
	margin-bottom: 13px;
}
.color-card-picto {
	width: auto;
	height: 56px;
	margin-bottom: 13px;
	max-width: 100%;
}
.color-card-title {
	color: inherit;
	font-size: 1.2rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 0;
	max-width: 100%;
}
.color-card-description {
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	color: inherit;
	margin-top: 13px;
	margin-bottom: 26px;
	max-width: 100%;
}
.color-card-link {
	color: inherit;
	font-weight: bold;
	margin-top: auto;
	max-width: 100%;
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
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
	opacity: 1;
	max-width: 100%;
}
.content-card-link:hover {
	opacity: .7;
	text-decoration: none;
}
.content-card-button {
	color: var(--highlight); /* Color for IE */
	color: var(--secondary-color);
	border: 1px solid var(--highlight); /* Border color for IE because it doesn't support CSS variables. */
	border: 1px solid var(--secondary-color);
    background: transparent;
	display: inline-block;
	text-align: center;
	font-size: .867rem;
    border-radius: 4px;
    padding: .5rem 1.15rem;
    text-decoration: none;
    -webkit-transition: all .2s;
    -o-transition: all .2s;
    transition: all .2s;
}
.content-card-button:hover {
	background-color: var(--highlight); /* Color for IE */
	background-color: var(--secondary-color);
	color: #FFFFFF;
	text-decoration: none;
}
/* Search Box Card
   ========================================================================== */
.search-card {
	background-color: rgba(0,0,0,.1);
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-orient: vertical;
	-webkit-box-direction: normal;
	    -ms-flex-direction: column;
	        flex-direction: column;
	-webkit-box-align: stretch;
	    -ms-flex-align: stretch;
	        align-items: stretch;
	text-align: center;
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
	text-align: center;
}
.search-card-container {
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
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
}
.search-card-searchbox {
	margin-bottom: 0;
	-webkit-box-flex: 1;
	    -ms-flex: 1 1 auto;
	        flex: 1 1 auto;
}
.search-card-searchbox .odswidget-searchbox__box {
	font-size: 1rem;
    display: block;
    width: 100%;
    max-width: 500px;
    padding: 8px 13px;
    border-radius: 4px 0 0 4px;
    border: none;
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
	-webkit-transition: opacity .2s;
	-o-transition: opacity .2s;
	transition: opacity .2s;
}
.search-card-submit-button:hover {
	text-decoration: none;
	opacity: .7;
}
/* KPI Card
   ========================================================================== */
.kpi-card {
	background-color: var(--boxes-background);
	height: 100%;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
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
.kpi-description {
	color: var(--text);
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 0;
	max-width: 100%;
}
/* Image Card
   ========================================================================== */
.image-card {
	background-color: rgba(0,0,0,.1);
	background-color: var(--secondary-color);
	color: #FFFFFF;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	min-height: 300px;
	height: 100%;
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-orient: vertical;
	-webkit-box-direction: normal;
	    -ms-flex-direction: column;
	        flex-direction: column;
	-webkit-box-align: stretch;
	    -ms-flex-align: stretch;
	        align-items: stretch;
	text-align: center;
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
	background-position: center center;
	background-repeat: no-repeat;
	background-size: cover;
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
	text-decoration: none;
}
.image-card:hover,
.image-card:focus {
	text-decoration: none;
    -webkit-transform: scale(1.02);
        -ms-transform: scale(1.02);
            transform: scale(1.02);
    -webkit-box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
            box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
}
.image-title {
	color: inherit;
	font-size: 1.733rem;
	line-height: 2.26;
	font-weight: bold;
	margin-top: 0;
	margin-bottom: 13px;
}
.image-description {
	color: inherit;
	font-size: 1rem;
	line-height: 1.5;
	font-weight: bold;
	margin: 0;
}
/* Image card backgrounds
   ========================================================================== */
/**
 * - Replace the background image url.
 * - Change the class name to something related to your project.
 */
.image-card-mobility {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/mobility-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/mobility-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/mobility-bg.jpg');
}
.image-card-garden {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/garden-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/garden-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/garden-bg.jpg');
}
.image-card-gastronomy {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/gastronomy-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/gastronomy-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/gastronomy-bg.jpg');
}
.image-card-sport {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/sport-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/sport-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/sport-bg.jpg');
}
.image-card-culture {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/culture-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/culture-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/culture-bg.jpg');
}
.image-card-education {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('https://discovery.opendatasoft.com/assets/theme_image/education-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/education-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('https://discovery.opendatasoft.com/assets/theme_image/education-bg.jpg');
}
/* ==========================================================================
   Homepage Styles
   ========================================================================== */
/*
The CSS rules below will only be applied to the HTML used in the </> HTML tab
and will not be applied to other pages of your platform.
The 'home-' prefix is used for classes that belong to this page only. This makes it easier
to understand which classes are used here and which ones are in the Platform Theme Stylesheet.
*/
/* Shared Styles
========================================================================== */
/*
These styles are used by different elements in the home page
*/
main {
    /* Overrides an existing CSS rule so the banner image can be "edge-to-edge" */
    margin: 20px 0 0 0;
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
.home-subtitle {
	color: var(--titles);
	font-size: 1.2rem;
	line-height: 1.5;
	font-weight: normal;
	margin-bottom: 26px;
}
.margin-bottom-2 {
	margin-bottom: 20px;
}
/* Home welcome card
========================================================================== */
.welcome-card {
	color: #FFFFFF;
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-orient: vertical;
	-webkit-box-direction: normal;
	    -ms-flex-direction: column;
	        flex-direction: column;
	-webkit-box-align: start;
	    -ms-flex-align: start;
	        align-items: flex-start;
    -webkit-box-pack: end;
        -ms-flex-pack: end;
            justify-content: flex-end;
    height: 100%;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
    background-color: var(--highlight);
}
.welcome-card-title {
	color: inherit;
    font-size: 2.8rem;
    margin-top: 0;
    margin-bottom: 0;
    line-height: 1.5;
	font-weight: bold;
	max-width: 100%;
}
/* Most Popular / Last Updated datasets section
========================================================================== */
.odswidget-most-popular-datasets__datasets,
.odswidget-last-datasets-feed__datasets {
	margin-top: 0;
	margin-bottom: 20px;
}
.odswidget-most-popular-datasets__dataset,
.odswidget-last-datasets-feed__dataset {
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
    -webkit-box-align: center;
        -ms-flex-align: center;
            align-items: center;
    padding: 13px;
    background-color: #FFFFFF;
    border-radius: 4px;
	margin-bottom: 13px;
}
.odswidget-most-popular-datasets__theme-picto,
.odswidget-last-datasets-feed__theme-picto {
	margin-top: 0;
}
.odswidget-most-popular-datasets__dataset-details,
.odswidget-last-datasets-feed__dataset-details {
	margin-left: 13px;
}
.odswidget-most-popular-datasets__dataset-details-title,
.odswidget-last-datasets-feed__dataset-details-title {
	font-size: 1rem;
}
.odswidget-most-popular-datasets__dataset-details-title a,
.odswidget-last-datasets-feed__dataset-details-title a {
	color: var(--titles);
}
.odswidget-most-popular-datasets__dataset-details-count,
.odswidget-last-datasets-feed__dataset-details-modified {
	opacity: .8;
	border-bottom: none;
	cursor: default;
}
.odswidget-most-popular-datasets__dataset-details-count .fa,
.odswidget-last-datasets-feed__dataset-details-modified .fa {
	display: none;
}
