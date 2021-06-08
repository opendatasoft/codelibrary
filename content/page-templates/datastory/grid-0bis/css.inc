main {
    margin: 0;
}

/* Data story */
section {
    padding-top: 2rem;
    background: linear-gradient(0deg, #F2F3F8, white);
}

.heading {
    display: flex;
    flex-direction: column;
    align-items: center;
    text-align: center;
    margin: 2rem;
}

.heading h1.title {
    font-size: 3em;
}

.heading h1 ~ .subtitle {
    font-size: 2em;
    font-weight: 200;
    margin: 0 1em 2em;
}

.heading h3.title {
    font-size: 1.7em;
}

.heading p {
    text-align: center;
}

@media screen and (min-width: 640px) {
    .heading {
        margin: 2rem 12%;
    }
}

.my-4\.5 {
    margin-top: 4.5rem;
    margin-bottom: 4.5rem;
}

.content-box {
    height: 100%;
    /* Content management */
    word-break: break-word;
    position: relative;
}

.content-box.text {
    padding: 1rem;
}

.content-box.heavy-shadow {
    box-shadow: 30px 20px 70px lightgrey;
}

.content-box .ods-chart {
    height: 400px;
}

g.highcharts-label.highcharts-data-label {
    display: none;
}

g.highcharts-label.highcharts-data-label:first-child, g.highcharts-label.highcharts-data-label:nth-child(5n) {
    display: inherit;
}

/***** GRID ******/
[class^=grid] {
    display: grid;
    grid-gap: 1rem;
}

@media screen and (min-width: 640px), print {

    .sm\:grid-5 {
        grid-template-columns: repeat(5, minmax(0, 1fr));
    }
}

[class*=":cell"] {
    display: flex;
    flex-direction: column;
    /*grid-column: 1 / -1;*/
    justify-content: stretch;
}

@media screen and (min-width: 640px), print {

    .sm\:cell-2 {
        grid-column: span 2/span 2;
    }

    .sm\:cell-3 {
        grid-column: span 3/span 3;
    }

    .sm\:cell-order-1 {
        order: 1;
    }

    .sm\:cell-order-2 {
        order: 2;
    }
}

.gap-1,
.gap-1 [class^=grid] {
    gap: 0.25rem;
}

.gap-10,
.gap-10 [class^=grid] {
    gap: 2.5rem;
}

/**
 * License: MIT License
 * Generated on 26 May 2021
 * Author: Labs from Opendatasoft
 * Version: 0.1
 * Description: ods-chart CSS Library
 */

.hide-x-legend .highcharts-xaxis tspan, .hide-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line, .hide-y-values .highcharts-yaxis-labels span, .hide-y-values .highcharts-yaxis-labels text {
    display: none !important;
}

.highcharts-axis tspan, .highcharts-data-label tspan, .highcharts-label span, .highcharts-xaxis-labels text, .highcharts-yaxis-labels text {
    font-family: Gotham-book, Arial, sans-serif !important;
}

.medium-x-values .highcharts-xaxis-labels span, .medium-x-values .highcharts-xaxis-labels text, .medium-y-values .highcharts-yaxis-labels span, .medium-y-values .highcharts-yaxis-labels text {
    font-size: 14px !important;
}

.small-chart-series .highcharts-series path.highcharts-graph, .small-chart-series .highcharts-series rect, .small-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 0.8px !important;
}

.no-bg rect.highcharts-background {
    fill: transparent !important;
}

.ods-highcharts__tooltip {
    align-items: center;
}