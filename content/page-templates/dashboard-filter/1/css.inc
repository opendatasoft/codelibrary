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

/***** Share width inlined ods-select *****/
.shared-width-ods-selects {
    display: flex;
    flex-wrap: wrap;
    align-items: center;
}

.shared-width-ods-selects > div >.odswidget-select {
    margin: 3px 6px 3px 0px;
    flex: 1;
    /*
        To assure a minimum width, set a min-width property here.
     */
    min-width: 200px;
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
.kpi-description-detail {
    opacity: 0.9;
    font-style: italic;
    font-size: 0.9em;
    margin-top: 0.8em;
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
	margin-bottom: 13px;
	max-width: 100%;
}
.content-card-description {
	color: var(--text);
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 26px;
	max-width: 100%;
}
.content-card-icon {
	color: var(--highlight);
	font-size: 2rem;
	margin-bottom: 13px;
	max-width: 100%;
}
.content-card-link {
	color: var(--links);
	font-weight: bold;
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
	opacity: 1;
	max-width: 100%;
}
.content-card-link:hover {
	opacity: .7;
	text-decoration: none;
}
.content-card-button {
	color: var(--highlight); /* Color for IE */
	color: var(--secondary-color);
	border: 1px solid var(--highlight); /* Border color for IE because it doesn't support CSS variables. */
	border: 1px solid var(--secondary-color);
    background: transparent;
	display: inline-block;
	text-align: center;
	font-size: .867rem;
    border-radius: 4px;
    padding: .5rem 1.15rem;
    text-decoration: none;
    -webkit-transition: all .2s;
    -o-transition: all .2s;
    transition: all .2s;
}
.content-card-button:hover {
	background-color: var(--highlight); /* Color for IE */
	background-color: var(--secondary-color);
	color: #FFFFFF;
	text-decoration: none;
}

/* Charts
   ========================================================================== */

rect.highcharts-background {
    fill: transparent !important;
}