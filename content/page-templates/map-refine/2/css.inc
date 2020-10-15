/* Tempalte maprefine */
:root {
    --drawer-width: 320px;
    --map-width: calc(100% - var(--drawer-width));
    --backdrop-width-when-modal-active: 75px;
    --drawer-background-color: white;
}
.map-drawer-container {
    display: flex;
    position: relative;
    overflow: hidden;
}
.map-drawer-container__map {
    position:relative;
    width: var(--map-width);
}
.map-drawer-container__info {
    width: var(--drawer-width);
}
/* BACKDROP (black screen when modal active) */
.map-drawer-container__backdrop {
    visibility: hidden;
    opacity: 0;
    position: absolute;
    height: 100%;
    width: 100%;
    z-index: 9;
    background-color: #000;
    cursor: default;
    -webkit-transition: visibility .5s,opacity .5s;
    transition: visibility .5s,opacity .5s;
}
.map-drawer-container__backdrop--active {
    visibility: visible;
    opacity: .45; /* make a more or less darker backdrop, 1:totally dark, 0:totally transparent (invisibile) */
}
.map-drawer-container__drawer {
    position: absolute;
    top: 0;
    bottom: 0;
    background-color: var(--drawer-background-color);
    transition: 0.3s;
}
.map-drawer-container__drawer__partial {
    right: calc(-1 * var(--drawer-width));
    width: var(--drawer-width);
    z-index: 11;
}
.map-drawer-container__drawer__full {
    right: calc(-1 * var(--map-width));
    width: calc(var(--map-width) - var(--backdrop-width-when-modal-active));
    z-index: 10;
}
.map-drawer-container__drawer__close {
    position: absolute;
    top: 0px;
    right: 8px;
    font-size: 1.5em;
}
/* active state partial drawer */
.map-drawer-container--active .map-drawer-container__drawer__partial {
    right: 0;
}
/* active state full drawer */
.map-drawer-container--active-full .map-drawer-container__drawer__full {
    right: var(--drawer-width);
}
/* Example specific */
.odswidget.odswidget-map {
    height: 500px;
}
.map-drawer-container__info {
    background-color: #f8f8f8;
    padding: 5px 10px;
}
.app h2, .map-drawer-container__drawer h2, .map-drawer-container__info h2 {
    font-weight: 300;
    color: black;
    text-align: center;
}
.map-drawer-container__drawer {
    padding: 5px 10px;
}
.map-drawer-container__drawer h3 {
    font-weight: 100;
    color: black;
    margin-top: 0px;
    text-align: center;
}
ul {
    list-style: none;
    position: relative;
    padding: 0;
    overflow: auto;
}
li.univ {
    display: flex;
    justify-content: space-between;
    margin: 3px 0px;
}
li.univ:first-child {
    border-bottom: 1px solid;
    font-weight: 200;
}
.univ-name {
    width: 100%;
    font-weight: 100;
    margin-left: 5px;
}
.univ-score {
    margin: 0 5px;
    font-weight: 600;
}
li.univ:first-child .univ-score {
    width: 100%;
    text-align: right;
}
.univ-selected {
    border-left: 3px solid;
    padding-left: 2px;
    margin-left: 0;
}
      
