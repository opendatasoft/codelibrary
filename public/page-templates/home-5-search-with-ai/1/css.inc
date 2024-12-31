/* Variables & Shared classes
========================================================================== */
:root {
    --secondary-color: #142e7b;
}

.bloc-p40 {
    padding: 40px 0px;
}

.colored-bg {
    background-color: var(--boxes-background);
}

.btn {
    border-radius: 22px;
    padding: 10px 44px;
}

.flex-container {
    display: flex;
    flex-direction: column;
    align-items: center;
}

.section-title {
    margin-bottom: 20px;
}

/***** HEADER *****/
.header {
    padding: 40px 0px 50px 0px;
    background: url(https://userclub.opendatasoft.com/assets/theme_image/bd47c8fb731520f9f0e78a7af0e0031c.jpeg)
        lightgray 50% / cover no-repeat;
}

.header-box {
    border-radius: 15px;
    background: linear-gradient(82deg, rgba(0, 0, 0, 0.64) 1.54%, rgba(102, 102, 102, 0.64) 100%);
    backdrop-filter: blur(4px);
    backdrop-filter: blur(3px);
    padding: 20px 80px;
    display: flex;
    flex-direction: column;
    align-items: center;
    text-align: center;
    max-width: 855px;
    flex-grow: 1;
    flex-basis: 0;
    color: #fff;
}

.header-box h1 {
    font-size: 50px;
    color: #fff;
}

.header-box p {
    font-size: 20px;
    line-height: normal;
}

/* SEARH BAR */
.searchbox {
    margin-bottom: -40px;
    border-radius: 15px;
    max-height: 50px;
    width: 100%;
    border: 1px solid #fff;
    box-shadow: 0px 4px 14px 0px rgba(0, 0, 0, 0.15);
    font-size: 14px;
    text-align: left;
}

/***** KPI *****/

.kpi-container {
    display: flex;
    flex-direction: row;
    margin-bottom: 20px;
    gap: 50px;
}

.kpi-box {
    display: flex;
    flex-direction: column;
}

.kpi-value {
    font-size: 32px;
    font-weight: 700;
    margin-bottom: 0;
    line-height: normal;
}

.kpi-description {
    font-size: 20px;
    font-weight: 400;
    line-height: normal;
}

/***** THEMES *****/
.themes-list {
    display: flex;
    flex-direction: row;
    flex-wrap: wrap;
    gap: 20px;
}

.theme {
    border-radius: 12px;
    background: var(--page-background);
    box-shadow: 0px 4px 12px 0px rgba(0, 0, 0, 0.12);
    display: flex;
    padding: 24px;
    flex-direction: column;
    align-items: center;
    gap: 16px;
    flex: 1 0 0;
    color: var(--secondary-color);
}

.theme:hover {
    box-shadow: 0px 8px 18px 0px rgba(0, 0, 0, 0.2);
    text-decoration: none;
}

.theme .odswidget-theme-picto {
    height: 45px;
}

.theme .odswidget-picto svg path {
    fill: var(--secondary-color) !important;
}

/***** VISUALISATIONS *****/

.bloc-visualisations {
    padding: 20px 0px 40px 0px;
}

.visualisations-list {
    display: flex;
    flex-direction: row;
    gap: 25px;
    width: 100%;
}

.visualisation {
    border-radius: 16px;
    background: #fff;
    box-shadow: 0px 4px 12px 0px rgba(0, 0, 0, 0.12);
    height: auto;
    flex: 1 1 0px;
    width: 0;
    color: var(--text);
}

.visualisation:hover {
    box-shadow: 0px 8px 18px 0px rgba(0, 0, 0, 0.2);
    text-decoration: none;
}

.image-container {
    border-bottom: 1px solid #dbdbdb;
    display: block;
    height: 200px;
    background-position: center;
    background-size: contain;
    background-repeat: no-repeat;
    margin-bottom: 5px;
    padding: 0px 10px;
}
.image-container img {
    width: 100%;
    height: 100%;
    margin-top: 1px;
}

.visualisation-content {
    padding: 26px;
}

.visualisation-title {
    font-size: 18px;
    font-weight: 500;
    line-height: 27px;
    margin-bottom: 10px;
}

.mise-a-jour {
    font-size: 12px;
    font-style: italic;
    font-weight: 100;
    line-height: 18px;
}

.visualisation-theme-tag {
    display: flex;
    align-items: normal;
    gap: 6px;
    background: var(--secondary-color);
    padding: 3px 6px;
    border-radius: 3px;
    font-style: italic;
    font-weight: 100;
    max-width: fit-content;
    color: #FFF;
}

.visualisation-theme-tag .odswidget-picto svg path {
    fill: #FFF !important;
}

/***** TOOLS *****/

.tools-bloc {
    background-color: var(--page-background);
}

.tools-list {
    display: flex;
    flex-direction: row;
    flex-wrap: wrap;
    gap: 20px;
}

.tool {
    border-radius: 12px;
    background: var(--boxes-background);
    display: flex;
    padding: 36px 24px;
    flex-direction: column;
    align-items: center;
    gap: 16px;
    flex: 1 0 0;
    color: var(--secondary-color);
}

.tool:hover {
    box-shadow: 0px 8px 18px 0px rgba(0, 0, 0, 0.2);
    text-decoration: none;
}

.tool i {
    font-size: 35px;
    color: var(--secondary-color);
}

/***** OUR MISSION BLOC *****/
.content-bloc {
    background-color: var(--highlight);
    color: #fff;
}

.content-bloc-title {
    color: #fff;
}

.content-bloc .container {
    display: flex;
    justify-content: center;
    flex-direction: column;
    align-items: center;
}

.content-bloc-description{
    max-width: 600px;
    text-align: center;
}

.content-bloc-button {
    background-color: var(--secondary-color);
    border: none;
}

.content-bloc-button:hover {
    background-color: #fff;
}

.content-bloc-button:hover a {
    color: var(--secondary-color);
}

.content-bloc-button a {
    color: #fff;
}

.content-bloc-button a:hover {
    text-decoration: none;
}

/***** TOP DATASETS BLOC *****/

.datasets-boxes {
    display: flex;
    flex-direction: row;
    gap: 40px;
}

.datasets-box {
    border-radius: 16px;
    background: #fff;
    box-shadow: 0px 4px 12px 0px rgba(0, 0, 0, 0.12);
    padding: 26px;
    height: auto;
    flex: 1 1 0px;
    width: 0;
}

.odswidget-last-datasets-feed__dataset-details-title a,
.odswidget-most-popular-datasets__dataset-details-title a {
    font-size: 16px;
}

.odswidget-last-datasets-feed__dataset-details-modified,
.odswidget-most-popular-datasets__dataset-details-count {
    font-size: 12px;
    font-style: italic;
}
