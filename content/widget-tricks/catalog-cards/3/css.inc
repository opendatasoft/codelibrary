/* Explore Page - Catalog Cards */
.ods-catalog-card {
    display: block;
    border-radius: 12px;
    padding: 26px;
    transition: all .2s;
}
@media screen and (min-width: 749px) {
    .ods-catalog-card {
        display: flex;
    }
}
.ods-catalog-card:hover {
    box-shadow: 0 0 10px 0 #e3e9f1;
}
.ods-catalog-card:hover:before {
    display: none;
}
.ods-catalog-card:hover .catalog-card-description {
    opacity: 0;
    top: 30px;
}
.ods-catalog-card:hover .catalog-card-info {
    opacity: 1;
    top: 0;
}
.catalog-card-content {
    position: relative;
}
.catalog-card-info {
    position: absolute;
    top: 30px;
    opacity: 0;
    transition: opacity .3s .1s, top .3s;
}
.catalog-card-metrics {
    font-size: 1rem;
    margin-left: 42px;
    margin-bottom: 1rem;
}
.catalog-card-description {
    min-height: 120px;
    margin-top: .5rem;
    position: relative;
    top: 0;
    left: 0;
    opacity: 1;
    transition: opacity .5s, top .4s;
}
.ods-catalog-card__theme-icon {
    position: absolute;
    top: 26px;
    left: 26px;
}
.ods-catalog-card__title {
    color: var(--titles);
    font-weight: 400;
    font-size: 1.5rem;
    line-height: 1.2;
    transition: color .3s;
}
.ods-catalog-card:hover .ods-catalog-card__title {
    color: var(--highlight);
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
.ods-dataset-visualization__dataset-title-text {
    font-size: 1.5rem;
    line-height: 0rem;
    font-weight: bold;
}
.ods-catalog-card__body {
    width: 100%;
}
@media screen and (min-width: 749px) {
    .ods-catalog-card__body {
        width: calc(100% - 136px);
        padding-right: 5px;
    }
}
@media screen and (min-width: 749px) {
    .ods-catalog-card__visualizations {
        display: flex;
        flex-direction: column;
        border-left: none;
        padding-left: 0;
        margin-left: 0;
    }
}
/* display: none; pour ne pas afficher les mots-clés en mode mobile */
.ods-catalog-card__keywords {
    display: none;
}
@media screen and (min-width: 749px) {
    .ods-catalog-card__keywords {
        display: block;
        margin-left: 0;
        margin-right: 10px;
        padding-right: 10px;
        display: flex;
        flex-direction: column;
    }
}
.catalog-card-sidebar {
    display: flex;
    justify-content: flex-end;
    width: 100%;
    padding-left: 0;
}
@media screen and (min-width: 749px) {
    .catalog-card-sidebar {
        padding-left: 10px;
        flex-direction: column;
        border-left: 1px solid var(--boxes-border);
        width: 136px;
        justify-content: flex-start;
    }
}
@media screen and (min-width: 749px) {
    .ods-catalog-card__visualizations {
        order: 0;
        height: auto;
        border-left: none;
        padding-left: 0;
        margin-left: 0;
    }
}
ods-catalog-card-keywords {
    flex-grow: 1;
}
.ods-catalog-card__keywords {
    width: 100%
}
@media screen and (min-width: 749px) {
    .ods-catalog-card__keywords {
        height: auto;
        margin-top: 10px;
        border-right: none;
    }
}
.ods-catalog-card__keyword {
    color: var(--text);
    font-size: 0.75rem;
    padding: .15rem .35rem;
    background-color: var(--boxes-border);
    border-radius: 7px;
}
.ods-catalog-card__keyword:hover {
    color: #FFFFFF;
}
.ods-catalog-card__visualization-icon {
    text-align: center;
}
.metadata-publisher .ods-catalog-card__metadata-item-label:before {
    content: '\f2bd';
    font-family: 'FontAwesome';
    margin-right: 5px;
}
.metadata-license .ods-catalog-card__metadata-item-label:before {
    content: '\f132';
    font-family: 'FontAwesome';
    margin-right: 5px;
}