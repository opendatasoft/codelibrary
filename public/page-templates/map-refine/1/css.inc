/* TEMPLATE */
:root {
    --drawer-width: 270px;
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
/* DO NOT COPY */
.donotcopy-specific .map-drawer-container {
    height: 600px;
    text-align: center;
}
.donotcopy-specific .map-drawer-container__info,
.donotcopy-specific .map-drawer-container__drawer__partial,
.donotcopy-specific .map-drawer-container__drawer__full {
    border: 4px solid;
    padding: 50px;
}
.donotcopy-specific .map-drawer-container__map {
    background-color: lightblue;
}
.donotcopy-specific .map-drawer-container__info {
    background-color: lightgray;
}
.donotcopy-specific .map-drawer-container__drawer__partial {
    background-color: lightgreen;
}
.donotcopy-specific .map-drawer-container__drawer__full {
    background-color: lightpink;
}
.donotcopy-specific h1, .donotcopy-specific h2 {
}
      