/* Custom map control, get rid of background, add box-shadow on layer controller */
ul.odswidget-map-display-control__groups {
    width: fit-content;
}
ul.odswidget-map-display-control__groups {
    background-color: transparent;
}
.odswidget.odswidget-map-display-control {
    box-shadow: none;
}
li.ng-scope.odswidget-map-display-control__group.odswidget-map-display-control__group--disabled {
    background-color: white;
    opacity: 0.7;
}
li.ng-scope.odswidget-map-display-control__group {
    background-color: white;
    box-shadow: 2px 2px 10px #868585;
}
/* Custom map controler (zoom etc) : align left ! */
.leaflet-top.leaflet-right, .odswidget-map__map--with-display-control .leaflet-top.leaflet-right {
    right: inherit;
    left: 10px;
    top: 190px;
}
.leaflet-right .leaflet-control {
    float: left;
}
      
