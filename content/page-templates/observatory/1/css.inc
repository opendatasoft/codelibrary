:root {
    /* change values by the size of the header & the footer to make the modal fit your page properly */
    --header-size: 20px;
    --footer-size: 20px;
    --modal-margin: calc(var(--header-size) + var(--footer-size));
}

/* ALL PAGE CONTAINER */
.observatory {
    background-color: #F6F8FB !important;
    /* prerequisite for full height modal bar */
    position: relative;
    /* prevent the page to be shrinked if the content is less than the browser height, force a minimal height */
    min-height: calc(100vh - var(--modal-margin));
}

.level {
    margin: 70px 0 40px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}
button {
    background-color: black;
    color: white;
    line-height: 36px;
    padding: 0 13px;
    border-radius: 100000px;
    font-size: 1.1em;
    border: 1px solid #142e7b;
    display: flex;
    align-items: center;
    min-width: max-content;
}
button svg {
    margin-right: 6px;
}
button:hover {
    opacity: 0.65;
}
.level button {
    margin-top: 13px;
}
@media screen and (min-width: 768px) {
    .level {
        justify-content: space-between;
        flex-direction: row;
    }
    .level button {
        margin-top: 0;
    }
}


h1 .smaller {
    font-size: 0.5em;
}
h2 .smaller {
    font-size: 0.8em;
}
.ods-box {
    border-radius: 0px;
}
.titre {
    font-size: 37px;
    margin: 26px 0 6px;
}
.edito {
    margin: 0;
    font-size: 19px;
}
.edito q {
    font-style: italic;
}
#resume {
    text-align: justify;
    font-size: 1.1em;
    line-height: 1.8em;
}

.row ~ h2 {
    font-size: 2em;
    margin: 26px 0;
}
/* BOX */
.box {
    padding-left: 12.5px;
    padding-right: 12.5px;
}
.grey-box {
    position: relative;
    background: white;
    border-radius: 6px;
    padding: 20px;
    margin-bottom: 25px;
    height: 453px;
}
.grey-box.half-box {
    height: 213.5px;
}
.grey-box.colored:before {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    height: 9px;
    content: '';
}
.grey-box.colored.services:before {
    background-color: #D8D8DD;
}
.grey-box.colored.sante:before {
    background-color: #D1F1FF;
}



/* BOX CONTENT */
.title {
    font-size: 1.2em;
    margin: 0 auto 6px;
}
.description {
    margin: 0 auto;
    color: #565656;
    font-size: 1em;
    font-weight: 400;
}
.kpi {
    color: black;
    font-size: 2.2em;
    margin-top: 35px;
    font-weight: 500;
    text-align: center;
}
.kpi-footer {
    font-size: 0.8em;
}
.kpi-footer-date {
    position: absolute;
    bottom: 6px;
    left: 13px;
}
a.kpi-footer-source {
    position: absolute;
    bottom: 6px;
    right: 13px;
    color: black;
    text-decoration: underline;
}
a.kpi-footer-source {
    color: blue;
}
a.kpi-footer-source:hover {
    opacity: 0.65;
}
/* BOX Title Line */
h2.grey-box {
    height: 70px;
    font-size: 1.3em;
    display: flex;
    align-items: center;
}
/* CHARTS */
.ods-chart {
    min-height: inherit;
}
.grey-box .ods-chart {
    height: 350px;
}
.grey-box.half-box .ods-chart {
    height: 130px;
}
.odswidget-charts {
    margin-top: 10px;
}
.odswidget-table {
    height: 338px;
    margin-top: 10px;
}
rect.highcharts-background {
    fill: transparent !important;
}





/** FILTER SUMMARY */
ul.odswidget.odswidget-filter-summary {
    font-size: 1.2em;
    margin: 15px 0;
    position: relative;
}
@media (min-width: 420px) {
    ul.odswidget.odswidget-filter-summary {
        display: flex;
        flex-wrap: wrap;
        align-items: center;
    }
}
li.odswidget-filter-summary__active-filter:first-child {
    margin-left: 110px;
}
li.odswidget-filter-summary__active-filter:first-child:before {
    content: 'Filtres actifs: ';
    font-weight: 600;
    line-height: 1.8em;
    position: absolute;
    left: 0;
}

li.odswidget-filter-summary__active-filter,
li.odswidget-filter-summary__clear-all {
    border-radius: 3px;
    margin: 2px 4px;
    padding: 0;
}
li.odswidget-filter-summary__active-filter {
    background-color: #f3f3f3;
}
li.odswidget-filter-summary__active-filter-label {
    font-size: 1rem;
}
a.odswidget-filter-summary__active-filter-link,
a.odswidget-clear-all-filters {
    border-left: none;
    margin: 0;
    padding: 2px 4px 2px 2px;
    display: flex;
    align-items: center;
}
a.odswidget-clear-all-filters {
    align-items: center;
}
a.odswidget-clear-all-filters i {
    margin-right: 3px;
}



/* BACKDROP (black screen when modal active) */
.backdrop {
    visibility: hidden;
    opacity: 0;
    position: absolute;
    height: 100%;
    width: 100%;
    z-index: 900;
    background-color: #000;
    cursor: default;
    -webkit-transition: visibility .5s,opacity .5s;
    transition: visibility .5s,opacity .5s;
}
.backdrop-active {
    visibility: visible;
    opacity: .6; /* make a more or less darker backdrop, 1:totally dark, 0:totally transparent (invisibile) */
}
/* MODAL */
/* The modal is composed of 2 parts:
the leftside, that is the banner that is always visible, and contains an icon on top to click and actiavte the modal
the right side, that contains filters, searchbar, charts etc... that is not visible, activated on demand
the modal default size (width) is 57px, it correspond to the leftside width */
.modal {
    display: flex;
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    width: 0;
    background-color: white;
    z-index: 1000;
    overflow: hidden; /* Disable horizontal scroll */
    transition: ease-in 0.3s;
}
.modal-active {
    width: 400px; /* size of the modal when active */
}
/* specific because charts are loaded inside */
.modal__content {
    width: 400px;
}
@media (max-width: 420px) {
    .modal-active {
        width: 100%;
    }
    .modal__content {
        width: 100vw;
    }
}

/* SHOW/HIDE SIDE */
.modal__rightside {
    display: flex;
    flex-direction: column;
    border-left: solid 1px lightgrey;
}
.modal__header,
.modal__footer {
    min-height: 35px;
    background-color: white;
    padding: 0 10px;
    display: flex;
    align-items: center;
    justify-content: start;
    opacity: 0;
    transition: opacity 0s;
}
.modal-active .modal__header, .modal-active .modal__footer {
    opacity: 1;
    transition-delay: 0.3s;
}
/* CONTENT OF THE MODAL */
/* HEADER / UPPER PART */
.modal__header {
    border-bottom: 1px solid lightgrey;
}
/* FOOTER / LOWER PART (optionnal) */
.modal__footer {
    border-top: 1px solid lightgrey;
}
/* THEN THE MIDDLE / CONTENT */
.modal__content {
    height: 100%;
    overflow-y: auto;
    padding: 25px;
    opacity: 0;
    transition: opacity 0s;
}
/* WARNING ! This part is very important : it renders the content only after the end of the openning of the modal
ie. when the modal is resized, nothing is visible, after 0.3s of resizing, it's displays the content
this trick is very important to avoid the browser the resize all the content during the modal opening */
.modal-active .modal__content {
    opacity: 1;
    transition-delay: 0.3s;
}