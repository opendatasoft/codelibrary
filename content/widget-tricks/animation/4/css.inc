/* Variables & Shared classes
========================================================================== */
.row-equal-height {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
    margin-bottom: 20px;
}

/* Fix for early content wrapping in Safari*/
.row-equal-height:before,
.row-equal-height:after {
    content: normal;
}

/* KPI Card
========================================================================== */
.kpi-card {
    background-color: var(--boxes-background);
    height: 100%;
    padding: 39px;
    border-radius: 4px;
    margin-bottom: 20px;
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

/* Hide the ods-timer button
========================================================================== */
.ods-button.ods-widget-timer-controller {
    display: none;
}

/* ODS-Gauge
========================================================================== */
.odswidget-gauge--circle .odswidget-gauge__svg {
    -webkit-transform: rotate(
            -90deg
    );
    transform: rotate(
            -90deg
    );
    height: 100%;
}

.kpi-animated .odswidget-gauge__svg-filler {
    fill: none;
    stroke-width: 8px;
    stroke: var(--highlight);
    -webkit-transition: stroke-dasharray 0.1s;
    transition: stroke-dasharray 0.1s;
}

.odswidget-gauge {
    display: flex;
    height: 100%;
    width: 100%;
}