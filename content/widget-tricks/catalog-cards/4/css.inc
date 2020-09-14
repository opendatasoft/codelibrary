.catalog-grid .odswidget-result-enumerator__results {
    display: grid;
    grid-column-gap: 20px;
    grid-row-gap: 20px;
}
@media screen and (min-width: 768px) {
    .catalog-grid .odswidget-result-enumerator__results {
        grid-template-columns: 1fr 1fr;
    }
}
ods-catalog-card {
    height: 100%;
}

.ods-catalog-card {
    margin-bottom: 0;
}
/* Resource starts here, DO NOT COPY before this line */
/* ================================================== */

/* Catalog Highlight
   ========================================================================== */
ods-catalog-card.catalog-highlight .stars {
    display: flex;
    flex-direction: row;
    flex-wrap: wrap;
}
ods-catalog-card.catalog-highlight .stars img {
    height: 35px;
    width: 35px;
    margin: 3px;
}
.ods-catalog-card-highlight .ods-catalog-card {
    border: solid 2px #FFD700;
}
