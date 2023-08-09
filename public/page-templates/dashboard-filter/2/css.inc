/* Variables & Shared classes
========================================================================== */
:root {
    --secondary-color: #142e7b;
}

main {
    margin: 0;
}

/* HEADER */
section {
    padding-top: 2rem;
}

.header {
    background: var(--boxes-background);
}

.heading {
    display: flex;
    flex-direction: column;
    align-items: start;
    margin: 2rem;
}
.heading h1.title {
    font-size: 3em;
}
.heading h3.title {
    font-size: 1.7em;
}
@media screen and (min-width: 640px) {
    .heading {
        margin: 2rem 12%;
    }
}
.description  {
    margin-bottom: 2em;
}

/***** Inlined SELECT *****/
.ods-selects {
    display: flex;
    flex-wrap: wrap;
    align-items: center;
    gap: 20px;
    padding: 10px 0px;
}

.odswidget-select {
    min-width: 200px;
}

/***** Clear filters button *****/

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

/* VIZ */

.viz-card {
    background-color: var(--boxes-background);
    height: auto;
    width: 100%;
    border-radius: 4px;
}

/* KPI Card
========================================================================== */
.kpi-container {
    display: flex;
    justify-content: space-around;
    gap: 20px;
}

.kpi-card {
    padding: 39px;
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
}
.kpi-icon {
    color: var(--highlight);
    color: var(--secondary-color);
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}
.kpi-title {
    font-weight: normal;
    color: var(--highlight);
    font-size: 3.2rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
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

/* Content Card
   ========================================================================== */
.content-card {
    padding: 26px;
    margin-bottom: 20px;
}
.content-card-title {
    color: var(--titles);
    font-size: 1.2rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 26px;
    max-width: 100%;
}

/* Charts
   ========================================================================== */
rect.highcharts-background {
    fill: transparent !important;
}
