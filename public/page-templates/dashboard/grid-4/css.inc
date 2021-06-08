/**** Dashboard ****/
:root {
    --boxes-radius: 6px;
}

body, main {
    margin: 0;
    background-color: #F2F3F8;
}

section {
    padding: 1.5rem 0;
}

.header {
    margin: 3rem 2rem;
}

h1 {
    font-size: 3rem;
}

h2 {
    font-weight: 500;
}

h3 {
    font-weight: 400;
}

.mb-0 {
    margin-bottom: 0;
}

.mb-2 {
    margin-bottom: 2rem;
}

.box {
    position: relative;
    padding: 13px;
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
    margin: 20px 0;
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
    font-size: 2.5rem;
}

.advanced-kpi--bottom {
    font-size: 0.8em;
}
.advanced-kpi--bottom .advanced-kpi--bottom-second-stage {
    display: flex;
    justify-content: space-between;
}
.advanced-kpi--bottom .source {
    text-decoration: underline;
    color: var(--links);
}
.advanced-kpi--bottom .source i {
    margin-left: 6px;
}
.advanced-kpi--bottom .source:hover {
    opacity: 0.65;
}
.advanced-kpi--bottom .source:hover i {
    animation: bounce 0.7s ease infinite;
}

@keyframes bounce {
    from {
        margin-left: 6px;
        margin-right: 0;
    }
    50% {
        margin-left: 2px;
        margin-right: 4px;
    }
    to {
        margin-left: 6px;
        margin-right: 0;
    }
}
.no-bg rect.highcharts-background {
    fill: transparent !important;
}

/***** GRID ******/
[class^=grid] {
    display: grid;
    grid-gap: 1rem;
}

@media screen and (min-width: 640px), print {
    .sm\:grid-2 {
        grid-template-columns: repeat(2, minmax(0, 1fr));
    }
}
@media screen and (min-width: 768px), print {
    .md\:grid-2 {
        grid-template-columns: repeat(2, minmax(0, 1fr));
    }

    .md\:grid-3 {
        grid-template-columns: repeat(3, minmax(0, 1fr));
    }

    .md\:grid-4 {
        grid-template-columns: repeat(4, minmax(0, 1fr));
    }

    .md\:grid-rows-3 {
        grid-template-rows: repeat(3, minmax(0, 1fr));
    }
}

[class^=cell],
[class*=":cell"] {
    display: flex;
    flex-direction: column;
    justify-content: stretch;
}

.cell-1 {
    grid-column: span 1/span 1;
}

.cell-row-2 {
    grid-row: span 2/span 2;
}
@media screen and (min-width: 768px), print {

    .md\:cell-1 {
        grid-column: span 1/span 1;
    }

    .md\:cell-2 {
        grid-column: span 2/span 2;
    }
}

.gap-6,
.gap-6 [class^=grid] {
    gap: 1.5rem;
}

.gap-10,
.gap-10 [class^=grid] {
    gap: 2.5rem;
}



/* DO NOT COPY, just for Code Library resource */
.chart-placeholder {
    background-color: #fff1f1;
    height: 350px;
}
.chart-placeholder:before {
    display: block;
    font-size: 2rem;
    margin: 0.2rem 0.5rem;
    content: "Chart";
}