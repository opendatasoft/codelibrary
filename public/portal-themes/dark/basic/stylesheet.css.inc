/* ==========================================================================
DARK BASIC HEADER THEME
========================================================================== */
/*
The CSS rules below apply to the whole portal.
Some suggestions:
- You should add below CSS rules that apply to elements that show up in all pages (such as the
header or footer) or built-in pages such as the Explore page, the MapBuilder, the ChartBuilder and the API
page.
- For CSS that applies to a specific user-created page, add it directly in the "CSS"
tab in the page edit section. This makes it easier to keep track of which classes
are page specific and which ones are generic and apply to the whole portal.
*/
/* Portal Header - Logo and main navigation
   ========================================================================== */
   .portal-header {
    padding: 0 26px 0 13px;
    border-bottom: 1px solid #DEE5EF;
}
/* Logo */
.ods-front-header__logo {
    display: block;
    width: auto; /* Logo width */
    max-height: 48px;
    height: auto; /* Logo height */
    padding-left: 13px;
    margin-right: 65px;
}
.ods-responsive-menu-collapsible__content {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-align: center;
        -ms-flex-align: center;
            align-items: center;
}
.portal-navigation {
    margin: 0;
    -webkit-box-flex: 1;
        -ms-flex: 1 1 auto;
            flex: 1 1 auto;
}
.ods-front-header__menu {
    margin: 0;
}
.ods-front-header__menu-item-link {
    border: none;
    font-size: .733rem;
    text-transform: uppercase;
    letter-spacing: .8px;
    line-height: 59px;
    padding: 0 13px;
    opacity: 1;
}
.ods-front-header__menu-item-link:hover,
.ods-front-header__menu-item-link--active {
    background-color: var(--highlight);
    color: #FFFFFF; /* Header link color when the link is active */
}
/* Management Menu
   ========================================================================== */
.ods-front-header__management-menu {
    position: static;
    top: auto;
    right: auto;
    line-height: 59px;
    font-size: .833rem;
}
.ods-front-header__management-menu-item {
    margin: 0 0 0 26px;
}
.ods-front-header__management-menu-item-link--active,
.ods-front-header__management-menu-item-link:hover {
    border: none;
    color: var(--highlight);
}
.ods-front-header__account-avatar-container {
    margin-bottom: 0;
    vertical-align: middle;
}
.ods-front-header__management-menu-item--backoffice {
    padding: 0;
    border: none;
    background: none;
}
/* Button "Back Office" in header */
.ods-front-header__management-menu-item--backoffice .ods-front-header__management-menu-item-link--backoffice {
    display: inline-block;
    color: #FFFFFF;
    border: 1px solid #FFFFFF;
    padding: 5px;
    background-color: transparent;
    border-radius: 4px;
}
.ods-front-header__management-menu-item-link--backoffice:hover {
    color: #000000;
    background-color: #FFFFFF;
}
.ods-front-header__management-menu-item-link {
    padding-bottom: 0;
}
/* Header - Mobile (small screens)
   ========================================================================== */
.ods-responsive-menu-placeholder.ods-responsive-menu-placeholder--active {
    height: 100%;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-align: center;
        -ms-flex-align: center;
            align-items: center;
}
.ods-responsive-menu--collapsed .ods-responsive-menu-collapsible__content {
    -webkit-box-align: start;
        -ms-flex-align: start;
            align-items: flex-start;
    -webkit-box-orient: vertical;
    -webkit-box-direction: normal;
        -ms-flex-direction: column;
            flex-direction: column;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__logo {
    display: none;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__menu-item-link {
    width: 100%;
    border-left: none;
}
.ods-responsive-menu-collapsible--collapsed .portal-navigation,
.ods-responsive-menu-collapsible--collapsed .ods-front-header__menu,
.ods-responsive-menu-collapsible--collapsed .portal-management-menu {
    width: 100%;
}
/* Management Menu - Mobile (small screens)
   ========================================================================== */
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu {
    padding: 13px;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu-item {
    padding-left: 0;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu-item--backoffice {
    padding: 0;
}
.ods-responsive-menu-collapsible--collapsed .ods-front-header__management-menu-item-link--backoffice {
    display: -webkit-inline-box;
    display: -ms-inline-flexbox;
    display: inline-flex;
    -webkit-box-align: center;
        -ms-flex-align: center;
            align-items: center;
}
/* Portal Footer
   ========================================================================== */
.portal-footer {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-pack: justify;
        -ms-flex-pack: justify;
            justify-content: space-between;
    -webkit-box-align: center;
        -ms-flex-align: center;
            align-items: center;
    border-top: 1px solid #DEE5EF;
    background-color: var(--footer-background);
    height: auto;
    min-height: 50px;
    padding: 0 26px;
}
.ods-front-footer__link--active {
    font-weight: normal;
    color: var(--highlight); /* Give current language a color highlight */
}
/* Explore Page - Catalog Cards
   ========================================================================== */
.ods-catalog-card {
    border-radius: 4px;
    padding: 26px;
    -webkit-transition: all .2s;
    -o-transition: all .2s;
    transition: all .2s;
}
.ods-catalog-card:hover {
    -webkit-transform: scale(1.02);
        -ms-transform: scale(1.02);
            transform: scale(1.02);
    -webkit-box-shadow: 0 0 10px 0 #e3e9f1;
            box-shadow: 0 0 10px 0 #e3e9f1;
}
.ods-catalog-card:hover:before {
    display: none;
}
.ods-catalog-card__theme-icon {
    position: absolute;
    top: 26px;
    left: 26px;
}
.ods-catalog-card__title {
    color: var(--highlight);
    font-weight: 400;
    font-size: 1.44rem;
    line-height: 1.2;
}
.ods-catalog-card__metadata-item {
    font-size: .833rem;
    line-height: 1.4;
    margin-bottom: 4px;
}
.ods-catalog-card__visualization {
    color: var(--text);
    padding: 0 0 4px 0;
}
.ods-catalog-card__keyword {
    color: var(--text);
    font-size: 0.833rem;
    padding: .15rem .35rem;
    background-color: var(--boxes-border);
    border-radius: 7px;
}
.ods-catalog-card__keyword:hover {
    color: #FFFFFF;
    background-color: #142E7B;
}
/* Edit dataset button */
.ods-dataset-visualization__edit-dataset-link {
    color: #FFFFFF;
}
/* Explore Page - Filter Sidebar
   ========================================================================== */
/* Improve sidebar title size and alignement */
.ods-filters__count,
.ods-filters__export-catalog-title,
.ods-filters__filters,
.ods-filters__filters-summary{
    font-size: 1.44rem;
    line-height: 1.2;
    font-weight: 400;
    padding: 0;
}
.ods-catalog-sort-labels {
    font-size: .833rem;
    line-height: 1.4;
}
.odswidget-facet__facet-title {
    font-size: 1.2rem;
    line-height: 1.3;
    margin-bottom: 13px;
    font-weight: 400;
}
.odswidget-text-search__search-box {
    font-size: 1rem;
}
/* Catalog Sort Selector */
.ods-catalog-sort__selector {
    font-size: .833rem;
}
.ods-catalog-sort__selector__opt,
.ods-catalog-sort__selector__opt--select .ods-catalog-sort__selector__more-button {
    background-color: var(--page-background);
    border-color: #142E7B;
    color: #142E7B;
}
.ods-catalog-sort__selector__opt--selected,
.ods-catalog-sort__selector__opt--selected:hover,
.ods-catalog-sort__selector__opt:hover:not(.ods-catalog-sort__selector__opt--selected),
.ods-catalog-sort__selector__opt:hover:not(.ods-catalog-sort__selector__opt--selected) button {
    color: #FFFFFF;
    background-color: #142E7B;
    border-color: #142E7B;
}
/* Removed small left border from sidebar items */
.odswidget-facet__category,
.ods-filters__export-catalog-link {
    padding-left: 0;
    border: none;
}
.odswidget-facet--disjunctive .odswidget-facet__category:hover:before {
   content: '';
}
