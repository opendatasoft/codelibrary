/* ODS LEGEND HORIZONTAL */
.legend-horizontal {
    width: 100%;
    border: 1px solid #cbd2db;
    border-radius: 6px;
    margin: 13px 0;
}

.legend-horizontal ul.odswidget-legend__indexes.odswidget-legend__steps_style {
    flex-direction: row;
    justify-content: space-between;
    flex-wrap: wrap;
}

.legend-horizontal .odswidget-legend__title {
    text-align: center;
}



/* ODS LEGEND / ABSOLUTE POSITION */
.map-container {
    position: relative;
}

.legend-default-absolute-pos {
    position: absolute;
    top: 20px;
    left: 57px;
    background-color: rgba(255,255,255,0.9);
}



/* ODS LEGEND HORIZONTAL / ABSOLUTE POSITION */
.map-container {
    position: relative;
}

.legend-horizontal-absolute-pos {
    position: absolute;
    /* change bottom to top to set the position relative to the top of the map-container instead of the bottom */
    bottom: 24px; /* value might change depending on the map size and specially if there is elements below the map, in the map-container */
    right: 10px; /* pulled to the right, can be changed to left, to pull the other side */
    background-color: rgba(255,255,255,0.9);
    margin-left: 20px; /* for small devices, keep a margin on the left if pulled right */
}

.legend-horizontal-absolute-pos ul.odswidget-legend__indexes.odswidget-legend__steps_style {
    flex-direction: row;
    justify-content: space-between;
    flex-wrap: wrap;
}

.legend-horizontal-absolute-pos .odswidget-legend__title {
    text-align: center;
}