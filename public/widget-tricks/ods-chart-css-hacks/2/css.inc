/* Do not copy this part, only necessary for the Code Library example */
.ods-box { background-color: var(--boxes-background);}
rect.highcharts-background { fill: transparent !important }


/************************/
/** ods-chart CSS Hacks */
/************************/


/* Get one value out of ten */
/* first, hide them all */
.lighter-y-legend .highcharts-axis-labels.highcharts-xaxis-labels > * {
    display:none;
}
/* then, show only one out of ten.
To change the interval number, simply change the 10 from the "10n + 1" expression.
For example, to display 1 value out of 5, try to change the expression to 5n + 1
*/
.lighter-y-legend .highcharts-axis-labels.highcharts-xaxis-labels > *:nth-child(10n + 1) {
    display: inherit;
}