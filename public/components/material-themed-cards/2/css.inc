:root {
  /* primary color : hsl(14, 98%, 56%) */
  --primary-hue: 14;
  --primary-saturation: 98%;
  --primary-lightness: 56%;

  --surface: hsl(50, 100%, 95%);
  --background: white;
  --card-text: hsl(162, 32%, 31%);
  --body-text: black;

  /* These are automatically computed unless you need to overwrite them */
  --primary:    hsl(var(--primary-hue), var(--primary-saturation), var(--primary-lightness));
  --primary-10: hsl(var(--primary-hue), var(--primary-saturation), 10%);
  --primary-20: hsl(var(--primary-hue), var(--primary-saturation), 20%);
  --primary-30: hsl(var(--primary-hue), var(--primary-saturation), 30%);
  --primary-40: hsl(var(--primary-hue), var(--primary-saturation), 40%);
  --primary-50: hsl(var(--primary-hue), var(--primary-saturation), 50%);
  --primary-60: hsl(var(--primary-hue), var(--primary-saturation), 60%);
  --primary-70: hsl(var(--primary-hue), var(--primary-saturation), 70%);
  --primary-80: hsl(var(--primary-hue), var(--primary-saturation), 80%);
  --primary-90: hsl(var(--primary-hue), var(--primary-saturation), 90%);

  --overlay-10: hsla(var(--primary-hue), var(--primary-saturation), 70%, 10%);
}

body {
  background-color: var(--background);
  color: var(--body-text);
}

h1 {
  color: var(--body-text);
}

/* ODS Over-ride */
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

.odswidget-select-button-label,
.odswidget-select-button,
.odswidget-select-input {
  color: var(--card-text);
}

.odswidget-select-dropdown-menu {
  background-color: var(--surface);
  border: 1px solid var(--overlay-10);
}

.odswidget-select-dropdown-menu-item:hover {
  background-color: var(--overlay-10);
}

.odswidget-select-dropdown-item-close-icon {
  color: var(--primary);
}

.odswidget-select-input-container {
  border: none;
}

.odswidget-timerange__reset {
  color: var(--primary);
}

.odswidget-timerange__reset:hover {
  color: var(--primary-80);
}

.odswidgets-rd-container.rd-container
 {
  background: var(--surface);
  border: 1px solid var(--overlay-10);
}

.odswidgets-rd-container .rd-time-list {
  background-color: var(--surface);
  color: var(--card-text);
}

.odswidgets-rd-container .rd-next,
.odswidgets-rd-container .rd-back {
  background-color: var(--surface);
  color: var(--card-text);
}

.odswidgets-rd-container .rd-day-body:hover,
.odswidgets-rd-container .rd-day-selected,
.odswidgets-rd-container .rd-time-selected,
.odswidgets-rd-container .rd-time-selected:hover,
.odswidgets-rd-container .rd-time-option:hover,
{
  background-color: var(--primary);
}

.odswidget-charts {
  margin: 0 -12px;
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

.mini-card .highcharts-point.highcharts-color-0 {
  fill: var(--primary) !important;
}
.mini-card .highcharts-point.highcharts-color-1 {
  fill: var(--primary-50) !important;
}
.mini-card .highcharts-point.highcharts-color-2 {
  fill: var(--primary-40) !important;
}
.mini-card .highcharts-point.highcharts-color-3 {
  fill: var(--primary-60) !important;
}
.mini-card .highcharts-point.highcharts-color-4 {
  fill: var(--primary-30) !important;
}
.mini-card .highcharts-point.highcharts-color-5 {
  fill: var(--primary-70) !important;
}
.mini-card .highcharts-point.highcharts-color-6 {
  fill: var(--primary-20) !important;
}
.mini-card .highcharts-point.highcharts-color-7  {
  fill: var(--primary-80) !important;
}
.mini-card .highcharts-point.highcharts-color-8 {
  fill: var(--primary-10) !important;
}
.mini-card .highcharts-point.highcharts-color-9 {
  fill: var(--primary-90) !important;
}
.mini-card .highcharts-color-0.highcharts-data-label-connector {
  stroke: var(--primary) !important;
}
.mini-card .highcharts-color-1.highcharts-data-label-connector {
  stroke: var(--primary-50) !important;
}
.mini-card .highcharts-color-2.highcharts-data-label-connector {
  stroke: var(--primary-40) !important;
}
.mini-card .highcharts-color-3.highcharts-data-label-connector {
  stroke: var(--primary-60) !important;
}
.mini-card .highcharts-color-4.highcharts-data-label-connector {
  stroke: var(--primary-30) !important;
}
.mini-card .highcharts-color-5.highcharts-data-label-connector {
  stroke: var(--primary-70) !important;
}
.mini-card .highcharts-color-6.highcharts-data-label-connector {
  stroke: var(--primary-20) !important;
}
.mini-card .highcharts-color-7.highcharts-data-label-connector  {
  stroke: var(--primary-80) !important;
}
.mini-card .highcharts-color-8.highcharts-data-label-connector {
  stroke: var(--primary-10) !important;
}
.mini-card .highcharts-color-9.highcharts-data-label-connector {
  stroke: var(--primary-90) !important;
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

/* Utilities */
.z-depth-1 {
  z-index: 1;
  box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.14),
    0 3px 1px -2px rgba(0, 0, 0, 0.12), 0 1px 5px 0 rgba(0, 0, 0, 0.2);
}

.z-depth-2 {
  z-index: 2;
  box-shadow: 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12),
    0 2px 4px -1px rgba(0, 0, 0, 0.3);
}

.row-sticky {
  position: sticky;
  top: 0;
  z-index: 20;
}

/* Elements */
section {
  padding: 0 16px;
  margin: 16px 0;
}

.title {
  margin-bottom: 1em;
}

.subtitle {
  margin-top: -0.75em;
}

h1.title {
  font-size: 2.25rem;
}

h2.title {
  font-size: 1.5rem;
}

h5.subtitle {
  font-size: 1.25rem;
  font-weight: 600;
  margin: 0;
}

/* Components */
.card {
  background: var(--surface);
  color: var(--card-text);
  border-radius: 4px;
  padding: 16px;
  height: 100%;
}

.card-head {
  padding-bottom: 2rem;
}

.card .title,
.card .subtitle {
  color: var(--card-text);
}
