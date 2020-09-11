/******** SVG MAPS *************/
/************ Conteneur France ***************/
.svgmap-france {
    width: 500px;
    margin: auto;
    position: relative;
    background-color: white;
}
/* France Métropole */
.svgmap-francemetro {
    padding: 0;
}
/********** DROM ************/
/* Position en colonne left */
.svgmap-drom-left ~ .svgmap-francemetro {
    padding-left: 17%;
}
.svgmap-drom.svgmap-drom-left {
    display: flex;
    flex-direction: column;
    position: absolute;
    left: 1%;
    top: 2%;
    width: 12.1%;
}
/* Position en colonne right */
.svgmap-drom.svgmap-drom-right {
    display: flex;
    flex-direction: column;
    position: absolute;
    right: 1%;
    top: 3%;
    width: 11%;
}
/* Position en ligne bottom */
.svgmap-drom-bottom ~ .svgmap-francemetro {
    padding-bottom: 16%;
}
.svgmap-drom.svgmap-drom-bottom {
    display: flex;
    flex-direction: row;
    position: absolute;
    left: 5%;
    right: 5%;
    bottom: 1%;
    width: 90%;
    height: 17%;
}
.svgmap-drom.svgmap-drom-bottom > * {
    margin: 2%;
}
/****** Ile de France ZOOM ********/
/* Position Top Left */
.svgmap-idf-top-left ~ .svgmap-francemetro {
    padding-top: 7%;
    padding-left: 7%;
}
.svgmap-idf.svgmap-idf-top-left {
    position: absolute;
    left: 2%;
    top: 2%;
    width: 20%;
}
/* Position Top Right */
.svgmap-idf.svgmap-idf-top-right {
    position: absolute;
    right: 10%;
    top: 3%;
    width: 20%;
}
.svgmap-idf-top-right ~ .svgmap-francemetro {
    padding-top: 8%;
}
/* DROM Right + IDF Top Right */
.svgmap-drom-right ~ .svgmap-idf-top-right ~ .svgmap-francemetro {
    padding-right: 3%;
}
.svgmap-drom-right ~ .svgmap-idf-top-right {
    right: 16%;
}
/* DROM Right + IDF Top Left */
.svgmap-drom-right ~ .svgmap-idf.svgmap-idf-top-left {
    left: 3%;
}
/* DROM Left + IDF Top Right */
.svgmap-drom-left ~ .svgmap-idf-top-right {
    right: 1%;
}
/* DROM Left + IDF Top Left */
.svgmap-drom-left ~ .svgmap-francemetro ~ .svgmap-idf.svgmap-idf-top-left {
    padding-top: 11%;
    padding-left: 20%;
}
.svgmap-drom-left ~ .svgmap-idf.svgmap-idf-top-left ~ .svgmap-francemetro{
    padding-left: 22%;
    padding-top: 5%;
}
.svgmap-drom-left ~ .svgmap-idf.svgmap-idf-top-left {
    left: 17%;
    width: 17%;
}
/* Some CSS override to manage picto sizes */
.ods-svginliner__svg-container {
    height: 100%;
}
.odswidget.odswidget-picto {
    height: 100%;
}
/* None styles */
.svgmap-idf-none, .svgmap-drom-none {
    display: none;
}
/******************** Style *************************/
/* Texts */
.svgmap-with-text svg a path {
    fill: transparent !important;
    stroke: transparent !important;
}
.svgmap-with-text svg a text {
    display: none;
    font-size: 1.3em;
    font-weight: 300;
    font-family: sans-serif;
    fill: white !important;
    text-shadow: 2px 2px 5px black;
    stroke: none;
    pointer-events: none;
}
.svgmap-with-text svg a:hover {
    cursor: default;
    text-decoration: none;
}
.svgmap-with-text svg a:hover text {
    display: inherit;
}
/* Custom hover styling */
.svgmap-with-text svg a:hover path {
    stroke: white !important;
}
/* Custom positionning */
/* DEP */
#text-dep_idf-92 {
    text-anchor: start;
}
#text-dep_fxx-29, #text-dep_fxx-22 {
    text-anchor: start;
}
#text-dep_fxx-2A, #text-dep_fxx-2B {
    text-anchor: end;
}
