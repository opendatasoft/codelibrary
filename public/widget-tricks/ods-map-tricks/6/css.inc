.map-container {
    position: relative;
}

.kpis {
    position: absolute;
    bottom: 20px;
    width: 100%;
    display: flex;
    justify-content: space-around;
}

.box {
    position: relative;
    padding: 13px;
    width: 30%;
    z-index: 10;
}

.box.white {
    background-color: white;
}

.box.flat {
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.16);
    border-radius: var(--boxes-radius);
}

.advanced-kpi {
    height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
}

.advanced-kpi--top .title {
    font-size: 1.2em;
    margin: 0;
}

.advanced-kpi--top .description {
    margin: 0 auto;
    color: #565656;
    font-size: 1em;
    font-weight: 400;
}

.advanced-kpi--middle {
    display: flex;
    flex-direction: column;
    margin: 5px 0;
}

.advanced-kpi--middle.centered {
    align-items: center;
}

.advanced-kpi--middle > * {
    margin: 5px 0;
}

.advanced-kpi--middle .value {
    color: var(--highlight);
    font-weight: 500;
    font-size: 2rem;
}

.advanced-kpi--bottom {
    font-size: 0.8em;
}
