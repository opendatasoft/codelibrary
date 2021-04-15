body {
    background-color: white;
}
.row {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
}
.row > * {
    flex-grow: 1;
    margin-bottom: 20px;
}
/* Fix for early content wrapping in Safari*/
.row:before,
.row:after {
    content: normal;
}
.ods-box {
    height: 100%;
    background-color: var(--boxes-background);
}
/** DO NOT COPY CSS ABOVE THIS LINE, FOR DISPLAY/LAYOUT NEEDS OF THE EXAMPLE **/


/*** Custom CSS for charts ***/

/* Columns / Bars */
.highcharts-series rect {
    stroke: var(--chartColor);
    /* Fill with svg gradient declared in HTML code */
    fill: url(#svg-gradient) !important;
}

/* Areas */
.highcharts-series path.highcharts-area {
    /* Fill with svg gradient declared in HTML code */
    fill: url(#gradient-top-bottom) !important;
}






/****** ods-chart CUSTOM CSS LIBRARY ******/
.highcharts-yaxis-labels text,
.highcharts-xaxis-labels text,
.highcharts-axis tspan,
.highcharts-legend-item span,
.highcharts-label span,
.highcharts-data-label tspan {
    font-family: "Gotham-book", Arial, sans-serif !important; }

.small-data-values .highcharts-data-label tspan {
    font-size: 12px !important; }

.small-x-values .highcharts-xaxis-labels text,
.small-x-values .highcharts-xaxis-labels span {
    font-size: 12px !important; }

.small-x-legend .highcharts-xaxis tspan {
    font-size: 12px !important; }

.small-data-values .highcharts-data-label tspan {
    font-size: 12px !important; }

.small-y-values .highcharts-yaxis-labels text,
.small-y-values .highcharts-yaxis-labels span {
    font-size: 12px !important; }

.small-y-legend .highcharts-yaxis tspan {
    font-size: 12px !important; }

.small-chart-legend .highcharts-legend-item span {
    font-size: 12px !important; }

.small-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.small-tooltip-text .ods-highcharts__tooltip span {
    font-size: 12px !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 12px !important; }

.medium-data-values .highcharts-data-label tspan {
    font-size: 14px !important; }

.medium-x-values .highcharts-xaxis-labels text,
.medium-x-values .highcharts-xaxis-labels span {
    font-size: 14px !important; }

.medium-x-legend .highcharts-xaxis tspan {
    font-size: 14px !important; }

.medium-data-values .highcharts-data-label tspan {
    font-size: 14px !important; }

.medium-y-values .highcharts-yaxis-labels text,
.medium-y-values .highcharts-yaxis-labels span {
    font-size: 14px !important; }

.medium-y-legend .highcharts-yaxis tspan {
    font-size: 14px !important; }

.medium-chart-legend .highcharts-legend-item span {
    font-size: 14px !important; }

.medium-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.medium-tooltip-text .ods-highcharts__tooltip span {
    font-size: 14px !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 14px !important; }

.large-data-values .highcharts-data-label tspan {
    font-size: 16px !important; }

.large-x-values .highcharts-xaxis-labels text,
.large-x-values .highcharts-xaxis-labels span {
    font-size: 16px !important; }

.large-x-legend .highcharts-xaxis tspan {
    font-size: 16px !important; }

.large-data-values .highcharts-data-label tspan {
    font-size: 16px !important; }

.large-y-values {
    /* when yaxis text is too big, it needs to be translated (ie. shift) slightly ! */ }
.large-y-values .highcharts-yaxis-labels text,
.large-y-values .highcharts-yaxis-labels span {
    font-size: 16px !important; }
.large-y-values .highcharts-yaxis-labels text {
    transform: translate(0, 4px); }

.large-y-legend .highcharts-yaxis tspan {
    font-size: 16px !important; }

.large-chart-legend .highcharts-legend-item span {
    font-size: 16px !important; }

.large-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.large-tooltip-text .ods-highcharts__tooltip span {
    font-size: 16px !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 16px !important; }

.extralarge-data-values .highcharts-data-label tspan {
    font-size: 18px !important; }

.extralarge-x-values .highcharts-xaxis-labels text,
.extralarge-x-values .highcharts-xaxis-labels span {
    font-size: 18px !important; }

.extralarge-x-legend .highcharts-xaxis tspan {
    font-size: 18px !important; }

.extralarge-data-values .highcharts-data-label tspan {
    font-size: 18px !important; }

.extralarge-y-values {
    /* when yaxis text is too big, it needs to be translated (ie. shift) slightly ! */ }
.extralarge-y-values .highcharts-yaxis-labels text,
.extralarge-y-values .highcharts-yaxis-labels span {
    font-size: 18px !important; }
.extralarge-y-values .highcharts-yaxis-labels text {
    transform: translate(0, 4px); }

.extralarge-y-legend .highcharts-yaxis tspan {
    font-size: 18px !important; }

.extralarge-chart-legend .highcharts-legend-item span {
    font-size: 18px !important; }

.extralarge-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.extralarge-tooltip-text .ods-highcharts__tooltip span {
    font-size: 18px !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-size: 18px !important; }

.light-data-values .highcharts-data-label tspan {
    font-weight: 100 !important; }

.light-x-values .highcharts-xaxis-labels text,
.light-x-values .highcharts-xaxis-labels span {
    font-weight: 100 !important; }

.light-x-legend .highcharts-xaxis tspan {
    font-weight: 100 !important; }

.light-data-values .highcharts-data-label tspan {
    font-weight: 100 !important; }

.light-y-values .highcharts-yaxis-labels text,
.light-y-values .highcharts-yaxis-labels span {
    font-weight: 100 !important; }

.light-y-legend .highcharts-yaxis tspan {
    font-weight: 100 !important; }

.light-chart-legend .highcharts-legend-item span {
    font-weight: 100 !important; }

.light-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.light-tooltip-text .ods-highcharts__tooltip span {
    font-weight: 100 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-weight: 100 !important; }

.normal-data-values .highcharts-data-label tspan {
    font-weight: 400 !important; }

.normal-x-values .highcharts-xaxis-labels text,
.normal-x-values .highcharts-xaxis-labels span {
    font-weight: 400 !important; }

.normal-x-legend .highcharts-xaxis tspan {
    font-weight: 400 !important; }

.normal-data-values .highcharts-data-label tspan {
    font-weight: 400 !important; }

.normal-y-values .highcharts-yaxis-labels text,
.normal-y-values .highcharts-yaxis-labels span {
    font-weight: 400 !important; }

.normal-y-legend .highcharts-yaxis tspan {
    font-weight: 400 !important; }

.normal-chart-legend .highcharts-legend-item span {
    font-weight: 400 !important; }

.normal-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.normal-tooltip-text .ods-highcharts__tooltip span {
    font-weight: 400 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-weight: 400 !important; }

.bold-data-values .highcharts-data-label tspan {
    font-weight: 600 !important; }

.bold-x-values .highcharts-xaxis-labels text,
.bold-x-values .highcharts-xaxis-labels span {
    font-weight: 600 !important; }

.bold-x-legend .highcharts-xaxis tspan {
    font-weight: 600 !important; }

.bold-data-values .highcharts-data-label tspan {
    font-weight: 600 !important; }

.bold-y-values .highcharts-yaxis-labels text,
.bold-y-values .highcharts-yaxis-labels span {
    font-weight: 600 !important; }

.bold-y-legend .highcharts-yaxis tspan {
    font-weight: 600 !important; }

.bold-chart-legend .highcharts-legend-item span {
    font-weight: 600 !important; }

.bold-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.bold-tooltip-text .ods-highcharts__tooltip span {
    font-weight: 600 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    font-weight: 600 !important; }

.lightgrey-data-values .highcharts-data-label tspan {
    fill: #565656 !important; }

.lightgrey-x-values .highcharts-xaxis-labels text,
.lightgrey-x-values .highcharts-xaxis-labels span {
    fill: #565656 !important; }

.lightgrey-x-legend .highcharts-xaxis tspan {
    fill: #565656 !important; }

.lightgrey-data-values .highcharts-data-label tspan {
    fill: #565656 !important; }

.lightgrey-y-values .highcharts-yaxis-labels text,
.lightgrey-y-values .highcharts-yaxis-labels span {
    fill: #565656 !important; }

.lightgrey-y-legend .highcharts-yaxis tspan {
    fill: #565656 !important; }

.lightgrey-chart-legend .highcharts-legend-item span {
    fill: #565656 !important; }

.lightgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.lightgrey-tooltip-text .ods-highcharts__tooltip span {
    fill: #565656 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    fill: #565656 !important; }

.lightgrey-data-values .highcharts-data-label tspan {
    color: #565656 !important; }

.lightgrey-x-values .highcharts-xaxis-labels text,
.lightgrey-x-values .highcharts-xaxis-labels span {
    color: #565656 !important; }

.lightgrey-x-legend .highcharts-xaxis tspan {
    color: #565656 !important; }

.lightgrey-data-values .highcharts-data-label tspan {
    color: #565656 !important; }

.lightgrey-y-values .highcharts-yaxis-labels text,
.lightgrey-y-values .highcharts-yaxis-labels span {
    color: #565656 !important; }

.lightgrey-y-legend .highcharts-yaxis tspan {
    color: #565656 !important; }

.lightgrey-chart-legend .highcharts-legend-item span {
    color: #565656 !important; }

.lightgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.lightgrey-tooltip-text .ods-highcharts__tooltip span {
    color: #565656 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    color: #565656 !important; }

.darkgrey-data-values .highcharts-data-label tspan {
    fill: #333 !important; }

.darkgrey-x-values .highcharts-xaxis-labels text,
.darkgrey-x-values .highcharts-xaxis-labels span {
    fill: #333 !important; }

.darkgrey-x-legend .highcharts-xaxis tspan {
    fill: #333 !important; }

.darkgrey-data-values .highcharts-data-label tspan {
    fill: #333 !important; }

.darkgrey-y-values .highcharts-yaxis-labels text,
.darkgrey-y-values .highcharts-yaxis-labels span {
    fill: #333 !important; }

.darkgrey-y-legend .highcharts-yaxis tspan {
    fill: #333 !important; }

.darkgrey-chart-legend .highcharts-legend-item span {
    fill: #333 !important; }

.darkgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.darkgrey-tooltip-text .ods-highcharts__tooltip span {
    fill: #333 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    fill: #333 !important; }

.darkgrey-data-values .highcharts-data-label tspan {
    color: #333 !important; }

.darkgrey-x-values .highcharts-xaxis-labels text,
.darkgrey-x-values .highcharts-xaxis-labels span {
    color: #333 !important; }

.darkgrey-x-legend .highcharts-xaxis tspan {
    color: #333 !important; }

.darkgrey-data-values .highcharts-data-label tspan {
    color: #333 !important; }

.darkgrey-y-values .highcharts-yaxis-labels text,
.darkgrey-y-values .highcharts-yaxis-labels span {
    color: #333 !important; }

.darkgrey-y-legend .highcharts-yaxis tspan {
    color: #333 !important; }

.darkgrey-chart-legend .highcharts-legend-item span {
    color: #333 !important; }

.darkgrey-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.darkgrey-tooltip-text .ods-highcharts__tooltip span {
    color: #333 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    color: #333 !important; }

.black-data-values .highcharts-data-label tspan {
    fill: #000 !important; }

.black-x-values .highcharts-xaxis-labels text,
.black-x-values .highcharts-xaxis-labels span {
    fill: #000 !important; }

.black-x-legend .highcharts-xaxis tspan {
    fill: #000 !important; }

.black-data-values .highcharts-data-label tspan {
    fill: #000 !important; }

.black-y-values .highcharts-yaxis-labels text,
.black-y-values .highcharts-yaxis-labels span {
    fill: #000 !important; }

.black-y-legend .highcharts-yaxis tspan {
    fill: #000 !important; }

.black-chart-legend .highcharts-legend-item span {
    fill: #000 !important; }

.black-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.black-tooltip-text .ods-highcharts__tooltip span {
    fill: #000 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    fill: #000 !important; }

.black-data-values .highcharts-data-label tspan {
    color: #000 !important; }

.black-x-values .highcharts-xaxis-labels text,
.black-x-values .highcharts-xaxis-labels span {
    color: #000 !important; }

.black-x-legend .highcharts-xaxis tspan {
    color: #000 !important; }

.black-data-values .highcharts-data-label tspan {
    color: #000 !important; }

.black-y-values .highcharts-yaxis-labels text,
.black-y-values .highcharts-yaxis-labels span {
    color: #000 !important; }

.black-y-legend .highcharts-yaxis tspan {
    color: #000 !important; }

.black-chart-legend .highcharts-legend-item span {
    color: #000 !important; }

.black-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.black-tooltip-text .ods-highcharts__tooltip span {
    color: #000 !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    color: #000 !important; }

.hide-data-values .highcharts-data-label tspan {
    display: none !important; }

.hide-x-values .highcharts-xaxis-labels text,
.hide-x-values .highcharts-xaxis-labels span {
    display: none !important; }

.hide-x-legend .highcharts-xaxis tspan {
    display: none !important; }

.hide-data-values .highcharts-data-label tspan {
    display: none !important; }

.hide-y-values .highcharts-yaxis-labels text,
.hide-y-values .highcharts-yaxis-labels span {
    display: none !important; }

.hide-y-legend .highcharts-yaxis tspan {
    display: none !important; }

.hide-chart-legend .highcharts-legend-item span {
    display: none !important; }

.hide-tooltip-text .highcharts-tooltip .highcharts-tooltip-container,
.hide-tooltip-text .ods-highcharts__tooltip span {
    display: none !important; }

.name-tooltip-value .ods-highcharts__tooltip b {
    display: none !important; }

.small-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke-width: 0.8px !important; }

.small-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke-width: 0.8px !important; }

.small-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke-width: 0.8px !important; }

.small-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 0.8px !important; }

.small-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke-width: 0.8px !important; }

.small-chart-series .highcharts-series path.highcharts-graph {
    stroke-width: 0.8px !important; }

.small-chart-series .highcharts-series rect {
    stroke-width: 0.8px !important; }

.small-chart-legend-dash .highcharts-legend-item path {
    stroke-width: 0.8px !important; }

.medium-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke-width: 1.5px !important; }

.medium-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke-width: 1.5px !important; }

.medium-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke-width: 1.5px !important; }

.medium-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 1.5px !important; }

.medium-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke-width: 1.5px !important; }

.medium-chart-series .highcharts-series path.highcharts-graph {
    stroke-width: 1.5px !important; }

.medium-chart-series .highcharts-series rect {
    stroke-width: 1.5px !important; }

.medium-chart-legend-dash .highcharts-legend-item path {
    stroke-width: 1.5px !important; }

.large-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke-width: 3px !important; }

.large-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke-width: 3px !important; }

.large-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke-width: 3px !important; }

.large-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 3px !important; }

.large-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke-width: 3px !important; }

.large-chart-series .highcharts-series path.highcharts-graph {
    stroke-width: 3px !important; }

.large-chart-series .highcharts-series rect {
    stroke-width: 3px !important; }

.large-chart-legend-dash .highcharts-legend-item path {
    stroke-width: 3px !important; }

.extralarge-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke-width: 5px !important; }

.extralarge-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke-width: 5px !important; }

.extralarge-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke-width: 5px !important; }

.extralarge-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 5px !important; }

.extralarge-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke-width: 5px !important; }

.extralarge-chart-series .highcharts-series path.highcharts-graph {
    stroke-width: 5px !important; }

.extralarge-chart-series .highcharts-series rect {
    stroke-width: 5px !important; }

.extralarge-chart-legend-dash .highcharts-legend-item path {
    stroke-width: 5px !important; }

.lightgrey-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke: #565656 !important; }

.lightgrey-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke: #565656 !important; }

.lightgrey-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke: #565656 !important; }

.lightgrey-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #565656 !important; }

.lightgrey-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke: #565656 !important; }

.lightgrey-chart-series .highcharts-series path.highcharts-graph {
    stroke: #565656 !important; }

.lightgrey-chart-series .highcharts-series rect {
    stroke: #565656 !important; }

.lightgrey-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #565656 !important; }

.darkgrey-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke: #333 !important; }

.darkgrey-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke: #333 !important; }

.darkgrey-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke: #333 !important; }

.darkgrey-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #333 !important; }

.darkgrey-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke: #333 !important; }

.darkgrey-chart-series .highcharts-series path.highcharts-graph {
    stroke: #333 !important; }

.darkgrey-chart-series .highcharts-series rect {
    stroke: #333 !important; }

.darkgrey-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #333 !important; }

.black-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    stroke: #000 !important; }

.black-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    stroke: #000 !important; }

.black-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    stroke: #000 !important; }

.black-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke: #000 !important; }

.black-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    stroke: #000 !important; }

.black-chart-series .highcharts-series path.highcharts-graph {
    stroke: #000 !important; }

.black-chart-series .highcharts-series rect {
    stroke: #000 !important; }

.black-chart-legend-dash .highcharts-legend-item path {
    stroke-width: #000 !important; }

.hide-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    display: none !important; }

.hide-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    display: none !important; }

.hide-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    display: none !important; }

.hide-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    display: none !important; }

.hide-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    display: none !important; }

.hide-chart-series .highcharts-series path.highcharts-graph {
    display: none !important; }

.hide-chart-series .highcharts-series rect {
    display: none !important; }

.hide-chart-legend-dash .highcharts-legend-item path {
    stroke-width: none !important; }

.small-chart-legend-circle g.highcharts-legend-item rect {
    width: 10px !important;
    height: 10px !important;
    x: 5 !important;
    y: 5 !important; }

.medium-chart-legend-circle g.highcharts-legend-item rect {
    width: 12px !important;
    height: 12px !important;
    x: 3 !important;
    y: 4 !important; }

.large-chart-legend-circle g.highcharts-legend-item rect {
    width: 15px !important;
    height: 15px !important;
    x: 2 !important;
    y: 2 !important; }

.extralarge-chart-legend-circle g.highcharts-legend-item rect {
    width: 18px !important;
    height: 18px !important;
    x: 0 !important;
    y: 0 !important; }

.centered-tooltip .highcharts-tooltip .highcharts-tooltip-container {
    text-align: center; }

.centered-tooltip .ods-highcharts__tooltip {
    justify-content: center; }

.transparent-background rect.highcharts-background,
.remove-background rect.highcharts-background,
.no-background rect.highcharts-background,
.no-bg rect.highcharts-background {
    fill: transparent !important; }

/** Tech **/
.ods-highcharts__tooltip {
    align-items: center; }

g.highcharts-legend-item rect {
    rx: 100%;
    /* keep it round, no matter the size */
    ry: 100%; }

.hide-x-values .highcharts-xaxis-labels text,
.hide-x-values .highcharts-xaxis-labels span {
    display: none !important; }

.hide-x-legend .highcharts-xaxis tspan {
    display: none !important; }

.hide-x-axisline .highcharts-axis.highcharts-xaxis path.highcharts-axis-line {
    display: none !important; }

.hide-x-gridline .highcharts-xaxis-grid path.highcharts-grid-line {
    display: none !important; }

.hide-y-values .highcharts-yaxis-labels text,
.hide-y-values .highcharts-yaxis-labels span {
    display: none !important; }

.hide-y-legend .highcharts-yaxis tspan {
    display: none !important; }

.hide-y-axisline .highcharts-axis.highcharts-yaxis path.highcharts-axis-line {
    display: none !important; }

.hide-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    display: none !important; }

.hide-x-axisline-ticks .highcharts-axis.highcharts-xaxis path.highcharts-tick {
    display: none !important; }
