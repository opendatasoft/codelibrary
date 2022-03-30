/* General Layout
========================================================================== */
:root {
  --left-color: #08a8ab;
  --right-color: #d5ac00;
  --secondary-color: black;
}

.left {
  color: var(--left-color);
}

.right {
  color: var(--right-color);
}

.background-left {
  background-color: var(--left-color);
}

.background-right {
  background-color: var(--right-color);
}

@media screen and (min-width: 992px) {
  .row-equal-height {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
    margin-bottom: 20px;
    width: 100%;
    justify-content: space-around;
  }

  /* Fix for early content wrapping in Safari*/
  .row-equal-height:before,
.row-equal-height:after {
    content: normal;
  }
}
.page-title {
  font-size: 3rem;
  font-weight: bold;
  margin-top: 0;
  margin-bottom: 1rem;
}

.page-subtitle {
  font-size: 1.2rem;
  line-height: 2;
  margin-top: 0;
  margin-bottom: 3rem;
}

.box-container {
  padding: 10px 0px;
}

@media screen and (min-width: 992px) {
  .box-container {
    display: flex;
    justify-content: center;
  }
}
/* Filters
========================================================================== */
.ods-selects {
  display: flex;
  flex-direction: column;
  gap: 5px;
}

.filterbloc {
  background-color: var(--boxes-background);
  height: 100%;
  padding: 20px 0px;
  border-radius: 4px;
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
  margin: 10px 0px;
  width: 100%;
}

.filterbloc-title {
  text-align: center;
}

.filter-list {
  display: flex;
  flex-wrap: wrap;
  position: relative;
  margin-bottom: 20px;
  justify-content: space-around;
}

.filter-list > * {
  margin: 0 0 10px;
  width: 100%;
}

.filter-box {
  display: flex;
  flex-direction: column;
  gap: 10px;
  align-items: center;
}

.filter-title {
  margin-top: 15px;
  margin-bottom: 0px;
}

.odswidget-select .odswidget-select-dropdown.open .odswidget-select-dropdown-menu {
  width: 100%;
}

.odswidget-select,
.odswidget-select .odswidget-select-dropdown {
  width: 100%;
}

@media screen and (min-width: 500px) {
  .filter-list > * {
    margin: 0 10px 10px 0;
    width: inherit;
  }

  .odswidget-select .odswidget-select-dropdown.open .odswidget-select-dropdown-menu, .odswidget-select-input, .odswidget-select-dropdown {
    width: max-content;
    min-width: 266px;
  }
}
.select-left .odswidget-select-dropdown-item-close-icon, .select-left .odswidget-select-dropdown-item-icon.fa-check-square,
.select-left .odswidget-select-dropdown-item-icon.fa-minus-square,
.select-left .odswidget-select-dropdown-menu-item:hover i.fa-square-o {
  color: var(--left-color);
}

.select-right .odswidget-select-dropdown-item-close-icon, .select-right .odswidget-select-dropdown-item-icon.fa-check-square,
.select-right .odswidget-select-dropdown-item-icon.fa-minus-square,
.select-right .odswidget-select-dropdown-menu-item:hover i.fa-square-o {
  color: var(--right-color);
}

.clear-filters {
  display: flex;
  align-items: center;
  justify-content: center;
  margin-top: 5px;
}

.clear-filters-button {
  background: none;
  border: none;
  color: var(--text);
}

.clear-filters-button:hover {
  opacity: 0.65;
}

/* KPI Card
========================================================================== */
.kpi-card {
  background-color: var(--boxes-background);
  height: 100%;
  padding: 39px;
  border-radius: 4px;
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
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
  width: 100%;
  margin-bottom: 5px;
}

.kpi-icon {
  color: var(--secondary-color);
  font-size: 4rem;
  margin-top: 0;
  margin-bottom: 13px;
  max-width: 100%;
}

.kpi-title {
  font-weight: normal;
  font-size: 3.2rem;
  margin-top: 0;
  max-width: 100%;
  margin-bottom: 5px;
}

.kpi-compare {
  font-weight: normal;
  font-size: 1.8rem;
  margin-top: 0;
  margin-bottom: 0px;
  max-width: 100%;
}

.kpi-unit {
  font-size: 0.8em;
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

.kpi-subtitle {
  font-weight: bold;
  text-transform: uppercase;
  margin-bottom: 0;
}

.kpi-compare-subtitle {
  text-transform: uppercase;
  margin-bottom: 0;
}

/* Charts
========================================================================== */
.chart-card {
  background-color: var(--boxes-background);
  height: 100%;
  padding: 39px;
  border-radius: 4px;
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13);
  display: block;
  width: 100%;
  margin-bottom: 10px;
}

.chart-title:first-child {
  margin-top: 20px;
}

rect.highcharts-background {
  fill: transparent !important;
}

/* Custom Charts
========================================================================== */
.custom-graph {
  display: flex;
  flex-direction: column;
  margin-bottom: 4rem;
  width: 100%;
}

.custom-graph-body {
  display: flex;
  align-items: stretch;
}

.custom-graph-block {
  flex: 1 1 auto;
}

.custom-graph-separator {
  width: 3px;
  background-color: #232423;
}

.custom-graph-header {
  display: block;
  margin-bottom: 0.5rem;
}
.custom-graph-header h4 {
  margin-top: 0;
}

.header-right {
  text-align: right;
}

.custom-graph-title {
  font-size: 1.43rem;
  margin: 0;
  text-transform: uppercase;
  color: var(--titles);
  font-weight: bold;
}

.custom-graph-content {
  display: grid;
}

.custom-graph-item {
  border-bottom: 1px solid #979797;
  margin-top: 0.5rem;
  display: flex;
  align-items: center;
  justify-content: space-between;
  min-height: 50px;
}

.custom-graph-item-title {
  font-size: 0.75rem;
  color: var(--titles);
  font-weight: normal;
  margin: 0;
  flex: 0 0 35%;
}

.custom-graph-progress-container {
  align-self: end;
  flex: 1 1 65%;
}

.custom-graph-progress {
  height: 30px;
  display: flex;
  align-items: center;
}

.custom-graph-progress-value {
  font-size: 0.625rem;
  color: var(--titles);
  margin: 0 9px;
}

.custom-graph-content-left .custom-graph-progress {
  margin-left: auto;
  border-radius: 8px 0 0 8px;
  justify-content: flex-end;
}

.custom-graph-content-right .custom-graph-item-title {
  order: 1;
  text-align: right;
}

.custom-graph-content-right .custom-graph-progress {
  order: 1;
  margin-right: auto;
  border-radius: 0 8px 8px 0;
  justify-content: flex-start;
}

.custom-graph-inverted-text-color .custom-graph-progress-value,
.custom-graph-inverted-text-color .custom-graph-item-title {
  color: inherit;
}