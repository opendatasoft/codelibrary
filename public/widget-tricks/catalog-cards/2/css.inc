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



/* Explore Page - Catalog Cards
========================================================================== */
.ods-catalog-card {
    border-radius: 4px;
    padding: 26px;
    -webkit-transition: all .2s;
    -o-transition: all .2s;
    transition: all .2s;
}
.ods-catalog-card:hover {
    -webkit-box-shadow: 0 0 10px 0 #e3e9f1;
            box-shadow: 0 0 10px 0 #e3e9f1;
}
.ods-catalog-card:hover:before {
    display: none;
}
.ods-catalog-card__theme-icon {
    position: absolute;
    top: 26px;
    left: 26px;
}
.ods-catalog-card__title {
    color: var(--highlight);
    font-weight: 400;
    font-size: 1.44rem;
    line-height: 1.2;
}
.ods-catalog-card__metadata-item {
    font-size: .833rem;
    line-height: 1.4;
    margin-bottom: 4px;
}
.ods-catalog-card__visualization {
    color: var(--text);
    padding: 0 0 4px 0;
}
.ods-catalog-card__keyword {
    color: var(--text);
    font-size: 0.833rem;
    padding: .15rem .35rem;
    background-color: var(--boxes-border);
    border-radius: 7px;
}
.ods-catalog-card__keyword:hover {
    color: #FFFFFF;
    background-color: var(--links);
}

