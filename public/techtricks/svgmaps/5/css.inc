/******** SVG MAPS *************/

/************ Conteneur France ***************/
.svgmap-france {
  width: 100%;
  height: 100%; /* IE Fix */
  margin: auto;
  position: relative;
  background-color: white;
}
/* France Métropole */
.svgmap-francemetro {
  padding-left: 17%;
  padding-bottom: 15%;
  padding-right: 0%;
  padding-top: 7%;
  height: 100%; /* IE Fix */
}
/********** DROM ************/
/* Position en colonne left */
.svgmap-drom {
  display: flex;
  flex-direction: column;
  justify-content: center;
  position: absolute;
  left: 1%;
  top: 2%;
  bottom: 2%;
  width: 12%;
}
.svgmap-drom > * {
  height: 12%;
}
/********** COM ************/
/* Position en ligne bottom */
.svgmap-com {
  display: flex;
  flex-direction: row;
  justify-content: center;
  position: absolute;
  left: 2%;
  right: 2%;
  bottom: 1%;
  height: 15%;
}
.svgmap-com > * {
  width: 15%;
}

/****** Ile de France ZOOM ********/
/* Position Top Right */
.svgmap-idf {
  position: absolute;
  top: 1%;
  right: 3%;
  width: 20%;
}


/* Some CSS override to manage picto sizes */
.ods-svginliner__svg-container {
  height: 100%;
}
.odswidget.odswidget-picto {
  height: 100%;
}


/******************** Style *************************/

/* Colored shapes */
svg g > path {
  stroke: black;
  stroke-width: 2px;
}

/* Texts */
svg a path {
  fill: transparent !important;
  stroke: transparent !important;
}
svg a text {
  display: none;
  font-size: 1.3em;
  font-weight: 300;
  font-family: sans-serif;
  fill: white !important;
  text-shadow: 2px 2px 5px black;
  stroke: none;
  pointer-events: none;
}
svg a:hover {
  cursor: default;
  text-decoration: none;
}
svg a:hover text {
  display: inherit;
}

/* Custom hover styling */
svg a:hover path {
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
/* COM */
#text-com_maf_blm-978 {
  font-size: 1.2em;
  text-anchor: start;
}
#text-com_maf_blm-977 {
  text-anchor: end;
  font-size: 1em;
}
#text-com_spm-975 {
  font-size: 0.75em;
}
#text-com_ncl-988 {
  font-size: 0.95em;
}