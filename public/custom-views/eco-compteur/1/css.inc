:root {
    --main-color: var(--section-titles);
    --secondary-color: var(--highlight);
    --bg-color: var(--section-titles-background);
    --menu-text-color: var(--text);
    --menu-bg-color: white;
    --menu-button-bg-color: var(--highlight);
    --menu-button-text-color: white;
}

/* Remove custom view padding */
.ods-tabs__pane.ods-tabs__pane--horizontal {
    padding: 0;
}

/* Subheader
========================================================================== */
.subheader-wrapper {
    background-color: var(--menu-bg-color);
    position: sticky;
    top: 0;
    left: 0;
    right: 0;
    z-index: 90;
}

.subheader {
    color: var(--menu-text-color);
    padding-top: 1.5rem;
    padding-bottom: 1.5rem;
    box-shadow: 0 10px 12px -8px #bec2d5;
}

@media screen and (min-width: 992px) {
    .subheader {
        flex-direction: row;
        align-items: center;
    }
}
.subheader-top {
    display: flex;
    align-items: center;
    justify-content: space-between;
}

.subheader-button {
    padding: 0.5rem 2.5rem;
    font-weight: bold;
    background-repeat: no-repeat;
    background-position: right 0.7rem top 50%, 0 0;
    background-size: 19px;
}

.subheader-button-active {
    color: #000000;
    background-color: #D3AA25;
    background-image: url("/assets/theme_image/icon-close-panel.svg");
}

.subheader-panel {
    background-color: var(--menu-button-bg-color);
    z-index: 1;
    width: 100%;
    box-shadow: 0 5px 14px black;
    max-height: calc(100vh - 100px);
    overflow: auto;
}

.subheader-panel-wrapper {
    padding: 45px 0;
    color: var(--menu-text-color);
    display: flex;
    gap: 10px;
    flex-direction: column;
}

@media screen and (min-width: 767px) {
    .subheader-panel-wrapper {
        flex-direction: row;
        align-items: stretch;
        justify-content: space-between;
    }
}
.subheader-panel-item {
    color: var(--menu-button-text-color);
}
@media (min-width: 992px) {
    .subheader-panel-item.carte {
        flex: 3;
    }
}
@media (min-width: 767px) {
    .subheader-panel-item.carte {
        flex: 2;
    }
}
@media (min-width: 767px) {
    .subheader-panel-item.detail-capteur {
        flex: 1;
    }
}

.subheader-panel-flex {
    display: flex;
    gap: 10px;
    align-items: baseline;
    justify-content: space-between;
    margin-bottom: 20px;
}

.subheader-panel-flex h3 {
    margin: 0;
}

.subheader-panel-flex-right {
    display: flex;
    flex-wrap: wrap;
    gap: 10px;
    align-items: center;
}
.subheader-panel-flex-right button {
    height: 31px;
}

@media screen and (min-width: 767px) {
    .subheader-separator {
        display: block;
        flex: 0 0 auto;
        width: 1px;
        background-color: rgba(255, 255, 255, 0.26);
    }
}

.subheader-title {
    font-size: 1.375rem;
    font-weight: bold;
    margin-bottom: 1.5rem;
    color: var(--menu-button-text-color);
    text-transform: uppercase;
}

.subheader-timerange {
    text-align: left;
    display: flex;
    flex-direction: column;
    align-items: flex-start;
}

.subheader-timerange .odswidget-timerange__input {
    background-color: transparent;
    color: white;
    border-radius: 0;
    border-color: #D3AA25;
}

.subheader-select {
    width: min(230px, 100%);
    padding: 5px;
}

.subheader-text {
    color: var(--menu-text-color);
}

.subheader-info {
    color: var(--menu-text-color);
    text-transform: uppercase;
    font-weight: bold;
    font-style: italic;
    font-size: 1.1em;
}

.subheader-panel .odswidget-date-range-slider .irs--flat .irs-from,
.subheader-panel .odswidget-date-range-slider .irs--flat .irs-single,
.subheader-panel .odswidget-date-range-slider .irs--flat .irs-to {
    background-color: var(--main-color);
}

.subheader-panel .irs--flat .irs-from,
.subheader-panel .irs--flat .irs-to,
.subheader-panel .irs--flat .irs-single {
    color: var(--menu-button-bg-color);
}

.subheader-panel .odswidget-date-range-slider .irs--flat .irs-bar {
    background-color: var(--menu-button-bg-color);
}

.subheader-panel .odswidget-date-range-slider .irs--flat .irs-from:before,
.subheader-panel .odswidget-date-range-slider .irs--flat .irs-single:before,
.subheader-panel .odswidget-date-range-slider .irs--flat .irs-to:before {
    border-top-color: var(--menu-button-bg-color);
}

.subheader-panel .odswidget-date-range-slider .irs--flat .irs-handle > i:first-child {
    background-color: var(--menu-button-bg-color);
}

.subheader-panel .odswidget.odswidget-date-range-slider {
    margin: 0 50px 10px;
}

/* Buttons
========================================================================== */
.subheader-button {
    display: inline-block;
    text-decoration: none;
    cursor: pointer;
    font-size: 1.1rem;
    font-weight: normal;
    color: var(--menu-button-bg-color);
    background-color: var(--menu-button-text-color);
    border: 1px solid var(--menu-button-bg-color);
    padding: 0.3rem 1.5rem;
    border-radius: 0px;
    transition: all 0.2s;
}

.subheader-button-active {
    color: var(--menu-button-text-color);
    background-color: var(--menu-button-bg-color);
    border: 1px solid var(--menu-button-text-color);
    text-decoration: none;
}

.subheader-button:hover {
    opacity: 0.65;
}

.subheader-button-large {
    padding: 0.5rem 2rem;
}

/* Detail capteur */
.detail-capteur-content dt {
    font-weight: 200;
}
.detail-capteur-content dd {
    font-weight: 500;
    margin-left: 1.5rem;
}
.detail-capteur-content img {
    border: 2px solid var(--menu-button-text-color);
    max-height: 200px;
    object-fit: cover;
}

/* Section elements
========================================================================== */
.page-section {
    padding: 4.5rem 1.5rem;
    background: linear-gradient(180deg, white, #fcfcff);
}
.page-section.bg-white {
    background: white;
}

/* Map */
#dot-icon path {
    stroke: black;
}

/* Indicateur */
h2.indicateur {
    padding: 4px 4px 4px 15px;
    margin-top: 40px;
    margin-bottom: 20px;
    font-size: 2.5rem;
    width: calc(100% + 20px);
    color: var(--main-color);
    background: var(--bg-color);
}

h2.indicateur .label {
    font-size: 1.5rem;
    font-weight: 400;
}

h2.indicateur ~ p {
    font-size: 1.2rem;
    margin-bottom: 15px;
}

.sous-indicateur {
    margin-bottom: 30px;
    border-left: solid 4px var(--main-color);
}

.sous-indicateur h3, .sous-indicateur p {
    padding-left: 10px;
}

.sous-indicateur h3 {
    font-size: 1.5rem;
}

.sous-indicateur p {
    font-size: 1.2rem;
}

.indicateur-box {
    padding: 4px;
    background: var(--bg-color);
}

section:nth-child(even) h2.indicateur {
    width: 100%;
    margin-left: -20px;
    padding-left: 20px;
}
@media screen and (max-width: 1169px) {
    section:nth-child(even) .row {
        display: flex;
        flex-direction: column-reverse;
    }
}
@media screen and (max-width: 1169px) {
    section:nth-child(odd) h2.indicateur {
        width: 100%;
    }
}
@media screen and (max-width: 1169px) {
    section:nth-child(even) h2.indicateur {
        margin-left: 0;
    }
}

/**
* License: MIT License
* Generated on 26 May 2021
* Author: Fpassaniti for Opendatasoft
* Version: 0.1
* Description: ods-chart CUSTOM CSS LIBRARY. Go to http://codelibrary.opendatasoft.com/widget-tricks/ods-chart-css/ for more information (doc & examples).
*/
.extralarge-y-values .highcharts-yaxis-labels text, .large-y-values .highcharts-yaxis-labels text {
    transform: translate(0, 4px);
}

.hide-chart-legend .highcharts-legend-item span, .hide-chart-series .highcharts-series path.highcharts-graph, .hide-chart-series .highcharts-series rect, .hide-data-values .highcharts-data-label tspan, .hide-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .hide-tooltip-text .ods-highcharts__tooltip span, .hide-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .hide-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .hide-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .hide-x-legend .highcharts-xaxis tspan, .hide-x-values .highcharts-xaxis-labels span, .hide-x-values .highcharts-xaxis-labels text, .hide-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .hide-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line, .hide-y-legend .highcharts-yaxis tspan, .hide-y-values .highcharts-yaxis-labels span, .hide-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    display: none !important;
}

.highcharts-axis tspan, .highcharts-data-label tspan, .highcharts-label span, .highcharts-legend-item span, .highcharts-xaxis-labels text, .highcharts-yaxis-labels text {
    font-family: Gotham-book, Arial, sans-serif !important;
}

.name-tooltip-value .ods-highcharts__tooltip b, .small-chart-legend .highcharts-legend-item span, .small-data-values .highcharts-data-label tspan, .small-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .small-tooltip-text .ods-highcharts__tooltip span, .small-x-legend .highcharts-xaxis tspan, .small-x-values .highcharts-xaxis-labels span, .small-x-values .highcharts-xaxis-labels text, .small-y-legend .highcharts-yaxis tspan, .small-y-values .highcharts-yaxis-labels span, .small-y-values .highcharts-yaxis-labels text {
    font-size: 12px !important;
}

.medium-chart-legend .highcharts-legend-item span, .medium-data-values .highcharts-data-label tspan, .medium-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .medium-tooltip-text .ods-highcharts__tooltip span, .medium-x-legend .highcharts-xaxis tspan, .medium-x-values .highcharts-xaxis-labels span, .medium-x-values .highcharts-xaxis-labels text, .medium-y-legend .highcharts-yaxis tspan, .medium-y-values .highcharts-yaxis-labels span, .medium-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 14px !important;
}

.large-chart-legend .highcharts-legend-item span, .large-data-values .highcharts-data-label tspan, .large-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .large-tooltip-text .ods-highcharts__tooltip span, .large-x-legend .highcharts-xaxis tspan, .large-x-values .highcharts-xaxis-labels span, .large-x-values .highcharts-xaxis-labels text, .large-y-legend .highcharts-yaxis tspan, .large-y-values .highcharts-yaxis-labels span, .large-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 16px !important;
}

.extralarge-chart-legend .highcharts-legend-item span, .extralarge-data-values .highcharts-data-label tspan, .extralarge-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .extralarge-tooltip-text .ods-highcharts__tooltip span, .extralarge-x-legend .highcharts-xaxis tspan, .extralarge-x-values .highcharts-xaxis-labels span, .extralarge-x-values .highcharts-xaxis-labels text, .extralarge-y-legend .highcharts-yaxis tspan, .extralarge-y-values .highcharts-yaxis-labels span, .extralarge-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 18px !important;
}

.light-chart-legend .highcharts-legend-item span, .light-data-values .highcharts-data-label tspan, .light-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .light-tooltip-text .ods-highcharts__tooltip span, .light-x-legend .highcharts-xaxis tspan, .light-x-values .highcharts-xaxis-labels span, .light-x-values .highcharts-xaxis-labels text, .light-y-legend .highcharts-yaxis tspan, .light-y-values .highcharts-yaxis-labels span, .light-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    font-weight: 100 !important;
}

.name-tooltip-value .ods-highcharts__tooltip b, .normal-chart-legend .highcharts-legend-item span, .normal-data-values .highcharts-data-label tspan, .normal-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .normal-tooltip-text .ods-highcharts__tooltip span, .normal-x-legend .highcharts-xaxis tspan, .normal-x-values .highcharts-xaxis-labels span, .normal-x-values .highcharts-xaxis-labels text, .normal-y-legend .highcharts-yaxis tspan, .normal-y-values .highcharts-yaxis-labels span, .normal-y-values .highcharts-yaxis-labels text {
    font-weight: 400 !important;
}

.bold-chart-legend .highcharts-legend-item span, .bold-data-values .highcharts-data-label tspan, .bold-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .bold-tooltip-text .ods-highcharts__tooltip span, .bold-x-legend .highcharts-xaxis tspan, .bold-x-values .highcharts-xaxis-labels span, .bold-x-values .highcharts-xaxis-labels text, .bold-y-legend .highcharts-yaxis tspan, .bold-y-values .highcharts-yaxis-labels span, .bold-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    font-weight: 600 !important;
}

.lightgrey-chart-legend .highcharts-legend-item span, .lightgrey-data-values .highcharts-data-label tspan, .lightgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .lightgrey-tooltip-text .ods-highcharts__tooltip span, .lightgrey-x-legend .highcharts-xaxis tspan, .lightgrey-x-values .highcharts-xaxis-labels span, .lightgrey-x-values .highcharts-xaxis-labels text, .lightgrey-y-legend .highcharts-yaxis tspan, .lightgrey-y-values .highcharts-yaxis-labels span, .lightgrey-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    fill: #565656 !important;
    color: #565656 !important;
}

.darkgrey-chart-legend .highcharts-legend-item span, .darkgrey-data-values .highcharts-data-label tspan, .darkgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .darkgrey-tooltip-text .ods-highcharts__tooltip span, .darkgrey-x-legend .highcharts-xaxis tspan, .darkgrey-x-values .highcharts-xaxis-labels span, .darkgrey-x-values .highcharts-xaxis-labels text, .darkgrey-y-legend .highcharts-yaxis tspan, .darkgrey-y-values .highcharts-yaxis-labels span, .darkgrey-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    fill: #333 !important;
    color: #333 !important;
}

.black-chart-legend .highcharts-legend-item span, .black-data-values .highcharts-data-label tspan, .black-tooltip-text .highcharts-tooltip .highcharts-tooltip-container, .black-tooltip-text .ods-highcharts__tooltip span, .black-x-legend .highcharts-xaxis tspan, .black-x-values .highcharts-xaxis-labels span, .black-x-values .highcharts-xaxis-labels text, .black-y-legend .highcharts-yaxis tspan, .black-y-values .highcharts-yaxis-labels span, .black-y-values .highcharts-yaxis-labels text, .name-tooltip-value .ods-highcharts__tooltip b {
    fill: #000 !important;
    color: #000 !important;
}

.small-chart-legend-dash .highcharts-legend-item path, .small-chart-series .highcharts-series path.highcharts-graph, .small-chart-series .highcharts-series rect, .small-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .small-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .small-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .small-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .small-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 0.8px !important;
}

.medium-chart-legend-dash .highcharts-legend-item path, .medium-chart-series .highcharts-series path.highcharts-graph, .medium-chart-series .highcharts-series rect, .medium-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .medium-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .medium-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .medium-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .medium-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 1.5px !important;
}

.large-chart-legend-dash .highcharts-legend-item path, .large-chart-series .highcharts-series path.highcharts-graph, .large-chart-series .highcharts-series rect, .large-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .large-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .large-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .large-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .large-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 3px !important;
}

.extralarge-chart-legend-dash .highcharts-legend-item path, .extralarge-chart-series .highcharts-series path.highcharts-graph, .extralarge-chart-series .highcharts-series rect, .extralarge-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .extralarge-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .extralarge-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .extralarge-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .extralarge-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 5px !important;
}

.lightgrey-chart-series .highcharts-series path.highcharts-graph, .lightgrey-chart-series .highcharts-series rect, .lightgrey-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .lightgrey-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .lightgrey-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .lightgrey-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .lightgrey-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #565656 !important;
}

.lightgrey-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #565656 !important;
}

.darkgrey-chart-series .highcharts-series path.highcharts-graph, .darkgrey-chart-series .highcharts-series rect, .darkgrey-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .darkgrey-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .darkgrey-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .darkgrey-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .darkgrey-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #333 !important;
}

.darkgrey-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #333 !important;
}

.black-chart-series .highcharts-series path.highcharts-graph, .black-chart-series .highcharts-series rect, .black-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line, .black-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick, .black-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line, .black-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line, .black-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #000 !important;
}

.black-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #000 !important;
}

.hide-chart-legend-dash .highcharts-legend-item path {
    stroke-width: none !important;
}

.small-chart-legend-circle g.highcharts-legend-item rect {
    width: 10px !important;
    height: 10px !important;
    x: 5 !important;
    y: 5 !important;
}

.medium-chart-legend-circle g.highcharts-legend-item rect {
    width: 12px !important;
    height: 12px !important;
    x: 3 !important;
    y: 4 !important;
}

.large-chart-legend-circle g.highcharts-legend-item rect {
    width: 15px !important;
    height: 15px !important;
    x: 2 !important;
    y: 2 !important;
}

.extralarge-chart-legend-circle g.highcharts-legend-item rect {
    width: 18px !important;
    height: 18px !important;
    x: 0 !important;
    y: 0 !important;
}

.centered-tooltip .highcharts-tooltip .highcharts-tooltip-container {
    text-align: center;
}

.centered-tooltip .ods-highcharts__tooltip {
    justify-content: center;
}

.no-background rect.highcharts-background, .no-bg rect.highcharts-background, .remove-background rect.highcharts-background, .transparent-background rect.highcharts-background {
    fill: transparent !important;
}

.ods-highcharts__tooltip {
    align-items: center;
}

g.highcharts-legend-item rect {
    rx: 100%;
    ry: 100%;
}

.trend .highcharts-axis,
.trend .highcharts-yaxis-labels,
.trend .highcharts-ygrid,
.trend .highcharts-legend,
.trend .highcharts-yaxis-grid path:not(:first-child),
.trend .highcharts-label.highcharts-data-label:not(:first-child):not(:last-child) {
    display: none;
}

.trend .highcharts-label.highcharts-data-label {
    opacity: 1;
    visibility: inherit;
}

.trend {
    padding-top: 15px;
    background: white;
}

.trend .chartplaceholder {
    height: 280px;
    width: 100%;
}

.trend path.highcharts-area {
    fill: transparent;
}

.trend text {
    font-size: 13px !important;
}

/*path.highcharts-graph {
    stroke: #d4d700;
}*/
.top5-chart {
    height: 350px;
    margin: 0 auto;
}
.top5-chart .highcharts-xaxis path.highcharts-axis-line {
    stroke: var(--bg-color);
    stroke-width: 4px;
    transform: translate(-2px, 0);
}

/* Custom Tabs
   ========================================================================== */
.tabs {
    display: flex;
    flex-wrap: wrap;
    margin: 30px 15px;
}
.tabs .tab {
    font-size: 1.2rem;
    padding: 0 15px 5px;
}
.tabs .tab:hover {
    font-weight: 600;
}
.tabs .tab.tab__active {
    font-weight: 600;
    border-bottom: 4px solid var(--secondary-color);
}

.tabs-content .tab-content {
    position: relative;
}

.odswidget-spinner.odswidget-spinner--svg.heatmap {
    height: 4em;
    position: absolute;
    left: 50%;
    top: 40%;
    z-index: 0;
}

.vega-chart {
    z-index: 1;
    position: relative;
    background: white;
}

/* FIX Container for CV */
@media (min-width: 768px) {
    .container {
        width: inherit;
        max-width: 740px;
    }
}
@media (min-width: 992px) {
    .container {
        width: inherit;
        max-width: 960px;
    }
}
@media (min-width: 1200px) {
    .container {
        width: inherit;
        max-width: 1160px;
    }
}