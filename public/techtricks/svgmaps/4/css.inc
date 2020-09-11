/******** SVG MAPS REGION *************/
/************ Conteneur France ***************/
.svgmap-france-region {
    width: 500px;
    margin: auto;
    position: relative;
    background-color: white;
}
/* France Métropole */
.svgmap-francemetro-region {
    padding-left: 17%;
}
/********** DROM ************/
/* Position en colonne left */
.svgmap-drom-region {
    display: flex;
    flex-direction: column;
    justify-content: center;
    position: absolute;
    left: 1%;
    top: 2%;
    bottom: 2%;
    width: 12%;
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
