
body, h1, h2, h3 {
    color: #45423E;
}
main, body {
    margin: 0;
    padding: 0;
}
.main--page {
    margin-top: 0px;
}
.ods-front-header, .ods-front-footer, .ods-content:after, footer {
    display: none;
}
ods-dataset-context {
    position: relative;
}
.odswidget.odswidget-map {
    width: 100%;
    height: 100vh;
}
.leaflet-popup-content {
    width: 350px !important;
}
.odswidget-record-image {
    text-align: center;
}
.ods-filters__filters, .ods-filters__count {
    color: #f4f2ec;
    background-color: #6B83AB;
}
ods-facets h3 {
    color: #45423c;
}
rect.highcharts-background {
    fill: transparent !important;
}
.highcharts-yaxis {
    display: none;
}
/* Button */
.filter-btn {
    position: absolute;
    top: 225px;
    left: -15px;
    transform: rotate(-90deg);
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 1.4em;
    width: 200px;
    height: 40px;
    padding: 11px;
    border: #F4F2ED;
    border-radius: 0px 0px 4px 4px;
    transition: ease-in 0.3s;
    box-shadow: 4px 4px 12px -1px #94928c;
    text-decoration: none;
    z-index: 3;
    color: #f4f2ec;
    background-color: #6B83AB;
}
.filter-btn--active {
    left: 315px;
}
.filter-btn:hover {
    box-shadow: 0 10px 26px 5px #a7a49d;
}
span.filtered {
    color: red;
    margin: 0px 4px;
    font-weight: 600;
}
/* MODAL */
.cl-modal {
    display: flex;
    flex-direction: column;
    height: -webkit-calc(100vh - 195px);
    height: -moz-calc(100vh - 195px);
    height: calc(100vh - 195px);
    margin-top: 105px;
    left: 45px;
    width: 20px;
    position: absolute;
    background-color: #f4f2ec;
    border-radius: 4px;
    border-left: 8px solid #6B83AB;
    z-index: 3;
    overflow: hidden; /* Disable horizontal scroll */
    transition: ease-in 0.3s;
}
.cl-modal-active {
    width: 350px;
}
.cl-modal__header,
.cl-modal__footer {
    height: 65px;
    background-color: #F4F2ED;
    display: flex;
    align-items: center;
    justify-content: center;
    opacity: 0;
    transition: opacity 0s;
}
.cl-modal-active .cl-modal__header, .cl-modal-active .cl-modal__footer {
    opacity: 1;
    transition-delay: 0.3s;
}
.cl-modal__header {
    border-bottom: 1px solid #bbbbbb;
}
.cl-modal__footer {
    border-top: 1px solid #bbbbbb;
}
.cl-modal__content {
    height: 100%;
    overflow-y: auto;
    padding: 25px;
    opacity: 0;
    transition: opacity 0s;
}
.cl-modal-active .cl-modal__content {
    opacity: 1;
    transition-delay: 0.3s;
}
/* The button used to close the modal */
.closebtn {
    font-size: 2.5em;
    font-weight: 200;
}
.closebtn span {
    font-weight: 300;
}
.closebtn:hover,
.closebtn:focus {
    color: #000;
    text-decoration: none;
    cursor: pointer;
}
/* specific right modal */
.right {
    position: relative;
}
.right .filter-btn {
    right: 0px;
    left: initial;
    transform: rotate(90deg);
    background-color: #CF4626;
    top: -webkit-calc(100vh - 180px);
    top: -moz-calc(100vh - 180px);
    top: calc(100vh - 180px);
}
.right .cl-modal {
    right: 60px;
    left: initial;
    border-left: none;
    border-right: 7px solid #CF4626;
    height: -webkit-calc(100vh - 130px);
    height: -moz-calc(100vh - 130px);
    height: calc(100vh - 130px);
    margin-top: 100px;
}
.right .filter-btn--active {
    left: initial;
    right: 430px;
}
.right .cl-modal-active {
    width: 450px;
}
/* specific because charts are loaded inside */
.right .cl-modal__content {
    width: 450px;
}
/* SEARCH MODULE */
.search-module {
    position: fixed;
    left: 0;
    right: 0;
    margin-left: auto;
    margin-right: auto;
    z-index: 2;
    top: 20px;
    width: 400px;
    font-size: 1.1em;
    font-weight: 300;
    display: flex;
}
.zoom-before-input {
    color: #ababab;
    font-size: 1.3em;
}
.input-holder, .odswidget-timerange__from, .odswidget-timerange__to {
    display: flex;
    align-items: center;
    justify-content: center;
    min-width: 55px; /* used for ODS picto */
    font-size: 1.4em; /* used for fontawesome picto */
    max-height: 55px;
    border: 1px solid #e4e4e4;
    padding: 11px;
    margin: 3px;
    border-radius: 4px;
    box-shadow: 1px 1px 5px gainsboro;
    background-color: #f4f2ec;
    z-index: 2;
}
.input-holder:hover {
    box-shadow: 1px 1px 10px 3px #74716c;
}
.input-holder input, .odswidget-timerange__from input, .odswidget-timerange__to input {
    border: none;
    width: 100%;
    margin-left: 8px;
    background-color: #f4f2ec;
}
.input-holder input:focus, .odswidget-timerange__from input:focus, .odswidget-timerange__to input:focus {
    outline: 0;
}
.input-holder .odswidget-picto {
    height: 30px;
    width: 30px;
}
.clear-button {
    font-size: 1.3em;
}
.blue {
    border: 1px solid #6a83ab;
    background-color: #6a83ab;
    color: #f4f2ec;
}
.red {
    border: 1px solid #cf4526;
    background-color: #cf4526;
    color: #f4f2ec;
}
.dark {
    border: 1px solid #45423E;
    background-color: #45423E;
    color: #f4f2ec;
}
/* KPI MODULE */
.kpi-module {
    position: fixed;
    left: 0;
    right: 0;
    margin-left: auto;
    margin-right: auto;
    z-index: 2;
    bottom: 20px;
    width: 600px;
    display: flex;
}
.kpi {
    width: 100%;
    margin: 5px;
    padding: 0px 7px;
    background-color: #45423Eb5;
    border: 2px solid #45423Ed4;
    border-radius: 4px;
    color: #f4f2ec;
}
.kpi.blue {
    border: 2px solid #6a83abd4;
    background-color: #6a83abb5;
}
.kpi.red {
    border: 2px solid #cf4526d4;
    background-color: #cf4526b5;
}
.kpi-title {
    font-weight: 600;
    font-size: 1.3em;
}
.kpi-title--unit {
    font-weight: 100;
    font-size: 0.8em;
}
.kpi-value {
    font-weight: 400;
    font-size: 2em;
    text-align: center;
}

