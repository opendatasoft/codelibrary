/* Full Custom Catalog Cards
   ========================================================================== */
.ods-catalog-card {
    border-radius: 7px;
    padding: 26px;
    flex-direction: column;
    padding: 26px;
    transition: all .2s;
}
.ods-catalog-card:hover {
    background-color: #f5f5f5;
    -webkit-box-shadow: 0 0 10px 0 #e3e9f1;
    box-shadow: 0 0 10px 0 #e3e9f1;
}
.ods-catalog-card .ods-catalog-card:hover:before {
    display: none;
}
.ods-catalog-card .card__title {
    display: flex;
    flex-direction: row;
    justify-content: space-between;
    padding: 0;
}
.ods-catalog-card .card__title--starred:before {
    content: '\f005';
    color: #FFD700;
    font-family: FontAwesome;
    font-size: 1.3rem;
    margin-right: 5px;
}
.ods-catalog-card .card__title h2 {
    color: #1e0c33;
    margin-bottom: 0;
    font-weight: 200;
}
.ods-catalog-card .card__description-holder {
    display: flex;
    justify-content: space-between;
}
.ods-catalog-card .card__description {
    padding: 15px;
}
.ods-catalog-card .starred {
    display: flex;
    margin: 10px;
}
.ods-catalog-card .starred img {
    height: 40px;
}
.card__portal-favicon {
    position: absolute;
    bottom: 0px;
    right: 5px;
}
.card__portal-favicon img {
    height: 25px;
    width: 25px;
}
.ods-catalog-card .odswidget.odswidget-picto.odswidget-theme-picto {
    width: 32px;
    height: 32px;
}
.ods-catalog-card .ods-svginliner__svg-container svg path,
.ods-catalog-card .ods-svginliner__svg-container svg rect,
.ods-catalog-card .ods-svginliner__svg-container svg polygon {
    fill: #1e0c33 !important;
}
.ods-catalog-card__keywords {
    margin-left: 20px;
    margin-bottom: 10px;
}
.ods-catalog-card .poweredby {
    transform: rotate(-16deg);
    position: absolute;
    top: 50px;
    left: 50px;
    font-size: 1.8em;
    opacity: 0.5;
    font-weight: 400;
    color: #ec653d;
    text-align: center;
}