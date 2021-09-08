:root {
    --values-color: white;
}

.heatmap {
    display: grid;
    grid-auto-columns: 1fr;
    grid-auto-flow: column;
    grid-auto-rows: auto;
    /* full auto, adapt to the content, ie the font size */
}
.heatmap > * {
    display: flex;
    justify-content: center;
    align-items: center;
    overflow: hidden;
    font-size: 0.7rem;
}
.heatmap.display-values .cell {
    font-size: 0.5rem;
}
.heatmap .cell {
    position: relative;
    display: flex;
    justify-content: center;
    align-items: center;
    overflow: hidden;
    color: var(--values-color);
    font-size: 0;
}
.heatmap .cell:hover {
    border: 1px solid var(--values-color);
    transform: scale(1.5);
    font-size: 0.6rem;
    z-index: 1;
}
.heatmap .cell.square:before {
    content: "";
    display: block;
    padding-bottom: 100%;
}
.heatmap .cell .round {
    border-radius: 100%;
    border: 1px solid black;
    display: flex;
    justify-content: center;
    align-items: center;
}

.x-axis-centered {
    text-align: center;
}
.x-axis-rotate {
    transform: rotate(-60deg);
    padding: 35% 0;
}

.heatmap-sub {
    margin-top: 13px;
}

.heatmap-legend {
    display: flex;
    width: 100%;
    justify-content: space-between;
    align-items: center;
}
.heatmap-legend .heatmap-legend__gradient {
    display: block;
    height: 25px;
    width: 100%;
    margin: 0 6px;
    border: 1px solid darkgray;
}

.heatmap-switch {
    display: flex;
    align-items: baseline;
}
.heatmap-switch .switch {
    margin-left: 6px;
}

/* Button Group Switch
   ========================================================================== */
.switch {
    display: inline-block;
}

.switch-button {
    /* background and border when in "off" state */
    background: var(--highlight);
    border: 2px solid var(--highlight);
    display: grid;
    grid-template-columns: 1fr 1fr;
    border-radius: 6px;
    color: #FFFFFF;
    position: relative;
    cursor: pointer;
    outline: 0;
    user-select: none;
}

.switch-input:not(:checked) + .switch-button .switch-button-left {
    /* text color when in "off" state */
    color: var(--highlight);
}

.switch-input {
    display: none;
}

.switch-button span {
    font-size: 0.8rem;
    padding: 0.2rem 0.7rem;
    text-align: center;
    z-index: 2;
    color: #FFFFFF;
    transition: color 0.2s;
}

.switch-button::before {
    content: "";
    position: absolute;
    background-color: #FFFFFF;
    box-shadow: 0 1px 3px rgba(0, 0, 0, 0.4);
    border-radius: 4px;
    top: 0;
    left: 0;
    height: 100%;
    width: 50%;
    z-index: 1;
    transition: left 0.3s cubic-bezier(0.175, 0.885, 0.32, 1), padding 0.2s ease, margin 0.2s ease;
}

.switch-button:hover::before {
    will-change: padding;
}

.switch-button:active::before {
    padding-right: 0.4rem;
}

/* "On" state
   ========================== */
.switch-input:checked + .switch-button {
    /* background and border when in "on" state */
    background-color: var(--links);
    border-color: var(--links);
}

.switch-input:checked + .switch-button .switch-button-right {
    /* text color when in "on" state */
    color: var(--links);
}

.switch-input:checked + .switch-button::before {
    left: 50%;
}

.switch-input:checked + .switch-button:active::before {
    margin-left: -0.4rem;
}

/* Checkbox in disabled state
   ========================== */
.switch-input[type=checkbox]:disabled + .switch-button {
    opacity: 0.6;
    cursor: not-allowed;
}