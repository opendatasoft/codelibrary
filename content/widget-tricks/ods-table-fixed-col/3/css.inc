/** ODS-TABLE FIXED COLUMN **/

[class*="sticky-col-"] {
    --counter-col-width: 35px; /* Index column, record counter */
    --1st-col-width: 170px; /* First data column */
    --2nd-col-width: 150px; /* Second data column */
    --3rd-col-width: 100px; /* Third data column */

    --bg-color-odd: #f4f4f4;
    --bg-color-even: white;
    --hover-color: #e0e0e0;
}


/** Override settings for specific tables */
.darkerfixed {
    --bg-color-odd: #dcdcdc;
    --bg-color-even: #f3f3f3;
    --hover-color: #a1a1a1;
}


/* Set the table relative, to stick columns */
[class*="sticky-col-"] thead.odswidget-table__internal-header-table-header,
[class*="sticky-col-"] table.odswidget-table__internal-table {
    position: relative;
}

/* Header and content position and width */
.sticky-col-1 th.odswidget-table__header-cell:nth-child(1),
.sticky-col-2 th.odswidget-table__header-cell:nth-child(1),
.sticky-col-3 th.odswidget-table__header-cell:nth-child(1),
.sticky-col-1 td.odswidget-table__cell:nth-child(1),
.sticky-col-2 td.odswidget-table__cell:nth-child(1),
.sticky-col-3 td.odswidget-table__cell:nth-child(1) {
    position: sticky;
    left: 0;
    z-index: 1;
}
.sticky-col-1 th.odswidget-table__header-cell:nth-child(1) > div,
.sticky-col-2 th.odswidget-table__header-cell:nth-child(1) > div,
.sticky-col-3 th.odswidget-table__header-cell:nth-child(1) > div,
.sticky-col-1 td.odswidget-table__cell:nth-child(1) > div,
.sticky-col-2 td.odswidget-table__cell:nth-child(1) > div,
.sticky-col-3 td.odswidget-table__cell:nth-child(1) > div {
    width: var(--counter-col-width) !important;
    max-width: inherit;
}
.sticky-col-1 th.odswidget-table__header-cell:nth-child(2),
.sticky-col-2 th.odswidget-table__header-cell:nth-child(2),
.sticky-col-3 th.odswidget-table__header-cell:nth-child(2),
.sticky-col-1 td.odswidget-table__cell:nth-child(2),
.sticky-col-2 td.odswidget-table__cell:nth-child(2),
.sticky-col-3 td.odswidget-table__cell:nth-child(2) {
    position: sticky;
    left: calc(var(--counter-col-width) + 15px);
    z-index: 1;
}
.sticky-col-1 th.odswidget-table__header-cell:nth-child(2) > div,
.sticky-col-2 th.odswidget-table__header-cell:nth-child(2) > div,
.sticky-col-3 th.odswidget-table__header-cell:nth-child(2) > div,
.sticky-col-1 td.odswidget-table__cell:nth-child(2) > div,
.sticky-col-2 td.odswidget-table__cell:nth-child(2) > div,
.sticky-col-3 td.odswidget-table__cell:nth-child(2) > div {
    width: var(--1st-col-width) !important;
    max-width: inherit;
}
.sticky-col-2 th.odswidget-table__header-cell:nth-child(3),
.sticky-col-3 th.odswidget-table__header-cell:nth-child(3),
.sticky-col-2 td.odswidget-table__cell:nth-child(3),
.sticky-col-3 td.odswidget-table__cell:nth-child(3) {
    position: sticky;
    left: calc(var(--counter-col-width) + 32px + var(--1st-col-width));
    z-index: 1;
}
.sticky-col-2 th.odswidget-table__header-cell:nth-child(3) > div,
.sticky-col-3 th.odswidget-table__header-cell:nth-child(3) > div,
.sticky-col-2 td.odswidget-table__cell:nth-child(3) > div,
.sticky-col-3 td.odswidget-table__cell:nth-child(3) > div {
    width: calc(var(--2nd-col-width) + 11px) !important;
    max-width: inherit;
}
.sticky-col-3 th.odswidget-table__header-cell:nth-child(4),
.sticky-col-3 td.odswidget-table__cell:nth-child(4) {
    position: sticky;
    left: calc(var(--counter-col-width) + 32px + var(--1st-col-width) + 32px + var(--2nd-col-width));
    z-index: 1;
}
.sticky-col-3 th.odswidget-table__header-cell:nth-child(4) > div,
.sticky-col-3 td.odswidget-table__cell:nth-child(4) > div {
    width: calc(var(--3rd-col-width) + 11px) !important;
    max-width: inherit;
}


/* Background and hover colors */
.sticky-col-1 tr.odswidget-table__internal-table-row:nth-child(odd) td.odswidget-table__cell:nth-child(-n+2),
.sticky-col-2 tr.odswidget-table__internal-table-row:nth-child(odd) td.odswidget-table__cell:nth-child(-n+3),
.sticky-col-3 tr.odswidget-table__internal-table-row:nth-child(odd) td.odswidget-table__cell:nth-child(-n+4) {
    background-color: var(--bg-color-odd);
}
.sticky-col-1 tr.odswidget-table__internal-table-row:nth-child(even) td.odswidget-table__cell:nth-child(-n+2),
.sticky-col-2 tr.odswidget-table__internal-table-row:nth-child(even) td.odswidget-table__cell:nth-child(-n+3),
.sticky-col-3 tr.odswidget-table__internal-table-row:nth-child(even) td.odswidget-table__cell:nth-child(-n+4) {
    background-color: var(--bg-color-even);
}
.sticky-col-1 tr.odswidget-table__internal-table-row:hover td.odswidget-table__cell:nth-child(-n+2),
.sticky-col-2 tr.odswidget-table__internal-table-row:hover td.odswidget-table__cell:nth-child(-n+3),
.sticky-col-3 tr.odswidget-table__internal-table-row:hover td.odswidget-table__cell:nth-child(-n+4) {
    background-color: var(--hover-color);
}

/* Bonus, petite marge à droite pour marquer la séparation entre la colonne sticky et le reste */
.sticky-col-1 td.odswidget-table__cell:nth-child(2) > div,
.sticky-col-2 td.odswidget-table__cell:nth-child(3) > div,
.sticky-col-3 td.odswidget-table__cell:nth-child(4) > div {
    border-right: 1px solid var(--hover-color);
    margin-right: -1px;
}
