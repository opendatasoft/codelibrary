/***** Observatory *****/
:root {
    --boxes-radius: 6px;
}

main {
    margin: 0;
}

.observatory {
    background-color: var(--page-background);
    /* prerequisite for full height modal bar */
    position: relative;
}

/***** GRID ******/
[class^=grid] {
    display: grid;
    grid-gap: 1rem;
}

@media screen and (min-width: 768px), print {

    .md\:grid-4 {
        grid-template-columns: repeat(4, minmax(0, 1fr));
    }
}
@media screen and (min-width: 1024px), print {

    .lg\:grid-4 {
        grid-template-columns: repeat(4, minmax(0, 1fr));
    }
}

[class*=":cell"] {
    display: flex;
    flex-direction: column;
    /*grid-column: 1 / -1;*/
    justify-content: stretch;
}
@media screen and (min-width: 768px), print {

    .md\:cell-full {
        grid-column: 1/-1;
    }

    .md\:cell-2 {
        grid-column: span 2/span 2;
    }
}
@media screen and (min-width: 1024px), print {

    .lg\:cell-2 {
        grid-column: span 2/span 2;
    }

    .lg\:cell-order-1 {
        order: 1;
    }

    .lg\:cell-order-2 {
        order: 2;
    }

    .lg\:cell-order-3 {
        order: 3;
    }

    .lg\:cell-order-4 {
        order: 4;
    }
}

.gap-6,
.gap-6 [class^=grid] {
    gap: 1.5rem;
}


section.head {
    background-color: white;
    padding: 26px 0;
}

.filter-block {
    position: sticky;
    top: 0;
    z-index: 1;
    box-shadow: 0px 15px 10px -15px #2b2b2b;
    margin-bottom: 35px;
    background-color: black;
}
.filter-block .container {
    display: flex;
    align-items: center;
    padding: 18px 0;
}
.filter-block button {
    padding: 0 13px;
    margin: 0 10px;
    border-radius: 100000px;
    display: flex;
    align-items: center;
    background-color: white;
    color: black;
    border: 1px solid black;
    height: 36px;
    min-width: max-content;
}
.filter-block button:hover {
    filter: invert();
}
.filter-block button svg {
    margin-right: 6px;
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
    font-size: 1.1em;
    line-height: 1.8em;
    margin-top: 26px;
}
@media screen and (min-width: 640px) {
    #resume {
        margin-right: 33%;
    }
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
    -webkit-transition: visibility 0.5s, opacity 0.5s;
    transition: visibility 0.5s, opacity 0.5s;
}

.backdrop-active {
    visibility: visible;
    opacity: 0.6;
    /* make a more or less darker backdrop, 1:totally dark, 0:totally transparent (invisibile) */
}

/* MODAL */
.cl-modal {
    display: flex;
    flex-direction: column;
    position: fixed;
    top: 0;
    right: -400px;
    bottom: 0;
    width: 400px;
    background-color: white;
    z-index: 1000;
    overflow: hidden;
    /* Disable horizontal scroll */
    transition: ease-in 0.3s;
}

.cl-modal-active {
    right: 0;
}

/* specific because ods-widgets are loaded inside */
.cl-modal__content {
    width: 400px;
}

@media (max-width: 420px) {
    .cl-modal-active {
        width: 100%;
    }

    .cl-modal__content {
        width: 100vw;
    }
}
.cl-modal__header {
    min-height: 35px;
    background-color: white;
    padding: 0 10px;
    display: flex;
    align-items: center;
    justify-content: start;
    opacity: 0;
    transition: opacity 0s;
}
.cl-modal__header .closebtn {
    padding: 0 13px;
    color: black;
}

.cl-modal-active .cl-modal__header {
    opacity: 1;
    transition-delay: 0.3s;
}

/* CONTENT OF THE MODAL */
/* HEADER / UPPER PART */
.cl-modal__header {
    border-bottom: 1px solid lightgrey;
}

/* THEN THE MIDDLE / CONTENT */
.cl-modal__content {
    height: 100%;
    overflow-y: auto;
    padding: 25px;
    opacity: 0;
    transition: opacity 0s;
}

/* WARNING ! This part is very important : it renders the content only after the end of the openning of the modal
ie. when the modal is resized, nothing is visible, after 0.3s of resizing, it's displays the content
this trick is very important to avoid the browser the resize all the content during the modal opening */
.cl-modal-active .cl-modal__content {
    opacity: 1;
    transition-delay: 0.3s;
}

/** FILTER SUMMARY */
ul.odswidget.odswidget-filter-summary {
    font-size: 1em;
    margin-left: 13px;
    position: relative;
}

@media (min-width: 420px) {
    ul.odswidget.odswidget-filter-summary {
        display: flex;
        flex-wrap: wrap;
        align-items: center;
    }
}
li.odswidget-filter-summary__active-filter,
li.odswidget-filter-summary__clear-all {
    border-radius: 3px;
    margin: 2px 4px;
    padding: 0;
}

li.odswidget-filter-summary__active-filter {
    color: white;
}

.odswidget-filter-summary__active-filter-label {
    color: black;
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
    color: white;
    opacity: 0.8;
}
a.odswidget-clear-all-filters:hover {
    color: white;
    opacity: 1;
}

a.odswidget-clear-all-filters i {
    margin-right: 3px;
}

.box {
    position: relative;
    padding: 13px;
}
.box.colored {
    padding-top: calc(13px + 9px);
}
.box.colored:before {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    height: 9px;
    content: "";
    border-radius: var(--boxes-radius) var(--boxes-radius) 0 0;
}
.box.colored.services:before {
    background-color: #ff714d;
}
.box.colored.sante:before {
    background-color: #25c9ff;
}
.box.white {
    background-color: white;
}
.box.flat {
    border: 1px solid #dfdfdf;
    border-radius: var(--boxes-radius);
}

.advanced-kpi {
    height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
}

.advanced-kpi--top .title {
    font-size: 1.2em;
    margin: 0 auto 6px;
}
.advanced-kpi--top .description {
    margin: 0 auto;
    color: #565656;
    font-size: 1em;
    font-weight: 400;
}

.advanced-kpi--middle {
    display: flex;
    flex-direction: column;
    margin: 20px 0;
}
.advanced-kpi--middle.centered {
    align-items: center;
}
.advanced-kpi--middle > * {
    margin: 5px 0;
}
.advanced-kpi--middle .value {
    color: var(--highlight);
    font-weight: 600;
    font-size: 3rem;
}

.advanced-kpi--bottom {
    font-size: 0.8em;
}
.advanced-kpi--bottom .advanced-kpi--bottom-second-stage {
    display: flex;
    justify-content: space-between;
}
.advanced-kpi--bottom .source {
    text-decoration: underline;
    color: var(--links);
}
.advanced-kpi--bottom .source i {
    margin-left: 6px;
}
.advanced-kpi--bottom .source:hover {
    opacity: 0.65;
}
.advanced-kpi--bottom .source:hover i {
    animation: bounce 0.7s ease infinite;
}

@keyframes bounce {
    from {
        margin-left: 6px;
        margin-right: 0;
    }
    50% {
        margin-left: 2px;
        margin-right: 4px;
    }
    to {
        margin-left: 6px;
        margin-right: 0;
    }
}
/* CHARTS */
.ods-chart {
    min-height: inherit;
}

.medium-chart {
    height: 350px;
}

.small-chart {
    height: 130px;
}

.highcharts-axis tspan, .highcharts-data-label tspan, .highcharts-label span, .highcharts-xaxis-labels text, .highcharts-yaxis-labels text {
    font-family: Gotham-book, Arial, sans-serif !important;
}

.ods-highcharts__tooltip {
    align-items: center;
}