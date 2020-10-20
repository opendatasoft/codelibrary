.map-container {
    position: relative;
}
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
/* Style map */
.map-control {
    position: absolute;
    bottom: 16px;
    right: 0px;
}
ul.odswidget-map-display-control__groups {
    min-width: 220px;
}
li.ng-scope.odswidget-map-display-control__group {
    display: flex;
    align-items: center;
    justify-content: space-between;
}
li.ng-scope.odswidget-map-display-control__group > span {
    margin-right: 3px;
}
.map-control-icons {
    display: flex;
    align-items: center;
}
.map-control-icons > svg {
    margin: -8px;
}
.map-legend {
    position: absolute;
    bottom: 50px;
    left: 10px;
    border-right-color: rgb(229, 229, 229);
    border-right-width: 5px;
    background-color: rgba(255, 255, 255, 0.6);
    box-shadow: 2px 2px 10px #868585;
    padding: 5px 10px;
}
.odswidget-map {
    height: 500px;
}
.green  {
    color: green;
}
.orange  {
    color: orange;
}
.red  {
    color: red;
}
.purple  {
    color: purple;
}
/* leaflet custom style */
.leaflet-vectormarker .leaflet-vectormarker-singleicon #dot-icon {
    stroke-width: 0.4px;
}
      
