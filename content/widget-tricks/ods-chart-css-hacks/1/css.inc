/* Do not copy this part, only necessary for the Code Library example */
.ods-box { background-color: var(--boxes-background);}
rect.highcharts-background { fill: transparent !important }



/************************/
/** ods-chart CSS Hacks */
/************************/


/* Get the first and last values only */
.first-last-values .highcharts-data-label:not(:first-child):not(:last-child) {
    display: none;
}

.first-last-values .highcharts-data-label:first-child,
.first-last-values .highcharts-data-label:last-child {
    opacity: 1;
    visibility: inherit; /* force the last child to be visible, as it can be hidden sometimes */
}



/* Get one value out of three */
/* First, hide them all */
.cherry-pick-values .highcharts-data-label {
    display: none;
}
/* Then, show only one out of ten.
To change the interval number, simply change the 3 from the "3n + 1" expression.
For example, to display 1 value out of 5, try to change the expression to 5n + 1
*/
.cherry-pick-values .highcharts-data-label:nth-child(3n + 1) {
    display: inherit;
    opacity: 1;
    visibility: inherit; /* force the last child to be visible, as it can be hidden sometimes */
}