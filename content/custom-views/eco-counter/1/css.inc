:root {
    --primary: %%primary%%;
    --card-text: black;
    --body-text: black;
    --surface: white;
}

/* Grid system conversion to flexbox */
.row > *:first-child {
    margin-left: 0;
}

.row > *:last-child {
    margin-right: 0;
}

.row {
    display: flex;
    justify-content: center;
    flex-wrap: wrap;
}

@media screen and (max-width: 992px) {
    .row {
        flex-direction: column;
    }

    .row > *:not(:last-child) {
        margin-bottom: 16px;
    }
}

/* Override for minimal chart */

.row > *:first-child {
    margin-left: 0;
}

.row > *:last-child {
    margin-right: 0;
}

.row {
    display: flex;
    justify-content: center;
}

@media screen and (max-width: 992px) {
    .row {
        flex-direction: column;
    }

    .row > *:not(:last-child) {
        margin-bottom: 16px;
    }
}

.highcharts-halo {
    fill: var(--primary) !important;
}

.highcharts-root > * {
    width: 100%;
}

.highcharts-text-outline {
    display: none;
}

.highcharts-data-label text tspan {
    fill: var(--card-text);
}

.hide-y .highcharts-yaxis-grid path.highcharts-grid-line,
.hide-y .highcharts-yaxis-labels text,
.hide-y .highcharts-yaxis-labels span {
    display: none !important;
}

.hide-x .highcharts-xaxis-labels text,
.hide-x .highcharts-xaxis-labels span,
.hide-x .highcharts-xaxis tspan,
.hide-x .highcharts-axis.highcharts-xaxis path.highcharts-axis-line,
.hide-x .highcharts-xaxis-grid path.highcharts-grid-line,
.hide-x .highcharts-tick {
    display: none !important;
}

.hide-x-grid .highcharts-xaxis tspan,
.hide-x-grid .highcharts-axis.highcharts-xaxis path.highcharts-axis-line,
.hide-x-grid .highcharts-xaxis-grid path.highcharts-grid-line,
.hide-x-grid .highcharts-tick {
    display: none !important;
}

.y-values .highcharts-data-label:not(:first-child):not(:last-child) {
    display: none;
}

.y-values .highcharts-data-label:first-child,
.y-values .highcharts-data-label:last-child {
    opacity: 1;
    visibility: inherit; /* force the last child to be visible, as it can be hidden by highchart */
}

.mini-card .odswidget-charts {
    margin: 0 -12px;
}

.mini-card rect.highcharts-background {
    fill: transparent !important;
}

.mini-card text {
    fill: var(--card-text) !important;
    font-size: 13px !important;
}

.mini-card .highcharts-grid-line {
    stroke: var(--primary) !important;
    stroke-dasharray: 2 2;
}

.mini-card .highcharts-graph {
    stroke: var(--primary) !important;
}

.mini-card .highcharts-area {
    fill: transparent !important;
}

.mini-card .highcharts-legend {
    display: none;
}

.mini-card .highcharts-markers path {
    fill: var(--primary) !important;
}

.mini-card .highcharts-label-box:not(.highcharts-shadow) {
    stroke: var(--primary) !important;
}

.mini-card .highcharts-tooltip-container {
    background: var(--background);
    color: var(--body-text);
}

.mini-card .highcharts-label span {
    color: var(--card-text) !important;
}

.mini-card .ods-highcharts__tooltip span {
    color: var(--primary) !important;
}

.mini-card .highcharts-point {
    fill: var(--primary) !important;
    stroke: transparent !important;
    rx: 8px;
}

.mini-card .highcharts-grid-line:not(:first-child):not(:last-child),
.mini-card .highcharts-yaxis-labels text:not(:first-child):not(:last-child) {
    display: none;
}

.mini-card .highcharts-xaxis-labels span {
    color: var(--card-text) !important;
    font-size: 13px !important;;
}

/* Tooltpis override */
.odswidget-map-tooltip__scroll-control {
    display: none;
}

.odswidget-map-tooltip__limited-results-warning {
    display: none;
}

.odswidget .odswidget-media-gallery {
    height: auto !important;
    overflow-y: visible;
}

/* Tab pills override */
.tab-pills .ods-simple-tabs-nav-link {
    padding: 0.5rem 1.5rem;
    border-bottom: 0;
    border-radius: 30px;
    background-color: transparent;
}

.tab-pills .ods-simple-tabs-nav-link:hover {
    color: var(--links);
}

.tab-pills .ods-simple-tabs-nav-link-active {
    background-color: var(--links);
}

.tab-pills .ods-simple-tabs-nav-link-active,
.tab-pills .ods-simple-tabs-nav-link-active:hover {
    color: #FFFFFF;
}

.ods-simple-tabs-nav {
    padding: revert;
}

/* Custom view sitcky filters override */
.ods-app-explore-dataset .ods-filters {
    position: sticky;
    top: 16px;
}

/* Vega-lite default container height override */
.odswidget-vega-lite-chart {
    height: 300px;
}

/* Charts override */
.highcharts-axis-title tspan,
.highcharts-axis-labels text {
    fill: black !important;
    font-weight: 700;
}

.highcharts-yaxis-grid {
    stroke-dasharray: 4 2;
}

.highcharts-axis-title {
    display: none;
}

/* Utilities */
.has-background-light {
    background-color: #F2F3F8;
}

.has-text-primary {
    color: var(--primary);
}

.has-text-center {
    text-align: center;
}

.is-size-4 {
    font-size: 1rem;
}

.is-success {
    color: #4BC467;
}

.is-danger {
    color: #CE0037;
}

/* Elements */
section.row {
    padding: 13px;
    margin-bottom: 64px;
}
.title {
    font-weight: 700;
    margin-bottom: 1em;
}

.subtitle {
    font-weight: 400;
    margin-top: -1em;
}

.title .subtitle {
    justify-self: flex-start;
}

.title.is-1 {
    font-size: 2.3125rem;
}

.title.is-2,
.subtitle.is-2 {
    font-size:  1.4375rem;
}

.title.is-3,
.subtitle.is-3 {
    font-size: 1.25rem;
}

figure.image {
    margin: 0;
    max-height:300px;
    max-width: 220px;
}

.image img {
    height: 100%;
    width: 100%;
}

/* Components */
.chart-container {
    padding: 13px;
}

.chart-container:not(:last-child) {
    margin-right: 26px;
}

.card {
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: space-between;
    min-width: 200px;
    height: 100%;
    padding: 13px;
    border-radius: 6px;
    background: var(--surface);
    color: var(--card-text);
    border: 1px solid #CBD2DB;
}

.card-head,
.card-footer {
    flex: 0 1 48px;
}

.card-body {
    flex-grow: 1;
    display: flex;
    flex-direction: column;
    justify-content: center;
    width: 100%;
}

.card.mini-chart {
    align-items: unset;
}

.card .mini-card .chartplaceholder {
    height: 280px;
    width: 100%;
}
