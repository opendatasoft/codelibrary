html {
  font-size: 16px;
}

/* ODS override */
.highcharts-axis-labels span {
  font-size: 13px !important;
}

.highcharts-point {
  stroke: transparent !important;
  rx: 8px;
  width: 20px;
}

.highcharts-label text {
  font-size: 13px !important;
}

.hide-y .highcharts-yaxis-grid path.highcharts-grid-line,
.hide-y .highcharts-yaxis-labels text,
.hide-y .highcharts-yaxis-labels span,
.hide-y .highcharts-yaxis-labels,
.hide-y .highcharts-legend,
.hide-y .highcharts-axis-title {
  display: none !important;
}

.hide-x-grid .highcharts-xaxis tspan,
.hide-x-grid .highcharts-axis.highcharts-xaxis path.highcharts-axis-line,
.hide-x-grid .highcharts-xaxis-grid path.highcharts-grid-line,
.hide-x-grid .highcharts-tick {
  display: none !important;
}

.leaflet-vectormarker-singleicon {
  stroke: black;
}

/* Utilites */
.is-hidden {
  visibility: hidden;
  display: none;
}

@media screen and (min-width: 993px) {
  .is-hidden-desktop {
    display: none !important;
    visibility: hidden !important;
  }
}

.is-size-3 {
  font-size: 1.2rem;
}

@media screen and (max-width: 992px) {
  .is-size-3 {
    font-size: 1rem;
  }
}

.level {
  display: flex;
  flex-wrap: wrap;
  justify-content: space-between;
  align-items: baseline;
}

/* Elements */
.text-icon {
  display: inline-flex;
  align-items: center;
  justify-content: space-between;
}

.icon {
  font-size: 1em;
}

.button {
  display: inline-flex;
  justify-content: center;
  align-items: center;
  border-radius: 999px;
  background-color: #142e7b;
  color: white;
  border: none;
  padding: 0.5em 1em;
}

.button:not(:first-child) {
  margin-left: 0.25em;
}

.icon-cta {
  border: none;
  height: 1.5em;
  width: 1.5em;
  background-color: transparent;
  color: black;
  padding: 8px;
}

.icon-cta:hover {
  background-color: #cbd2db;
}

/* Layout & Components */
.container {
  position: relative;
  max-width: 992px;
}

#chart-header {
  background: white;
  padding: 8px;
  border-bottom: 1px solid;
}

#charts {
  position: relative;
  width: 100%;
  height: 400px;
  overflow-y: scroll;
  overflow-x: hidden;
}

@media screen and (max-width: 992px) {
  #charts {
    height: 100%;
  }

  #charts.is-hidden {
    height: 0;
  }
}

#details {
  position: absolute;
  top: 0;
  right: 0;
  width: 100%;
  padding: 16px 0;
  opacity: 1;
  transition: right 200ms 200ms ease-in-out;
}

#details.is-hidden {
  right: -100%;
  opacity: 0;
  transition: all 200ms 200ms ease-in-out;
}

#ranking {
  position: relative;
  width: 100%;
  color: #565656;
}

#ranking p:first-child {
  border-bottom: 1px solid;
}

#ranking.is-hidden {
  left: -100%;
  opacity: 0;
}

#map {
  height: 432px;
  padding: 16px 0;
  background: white;
}

@media screen and (max-width: 992px) {
  #map {
    visibility: hidden;
    height: 0;
    padding: 0;
  }

  #map.is-visible {
    visibility: visible;
    height: 432px;
    padding: 16px 0;
  }
}

#map-and-legend {
  position: sticky;
  top: 0;
  z-index: 3;
}

#map-legend {
  position: absolute;
  bottom: 80px;
  right: 8px;
  background: white;
  border: 1px solid #565656;
  z-index: 10;
}

@media screen and (max-width: 992px) {
  #map-legend {
    width: 100%;
    right: 0;
    bottom: 88px;
    border: none;
  }

  #map-legend .odswidget-legend__title {
    font-size: 0.8rem;
  }

  #map-legend .odswidget-legend__indexes {
    flex-direction: row;
    flex-wrap: wrap;
  }

  #map-legend .odswidget-legend__index-circle {
    height: 1em;
    width: 1em;
  }
}

#map-button {
  display: block;
  margin: 8px 0;
  width: 100%;
}
