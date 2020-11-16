:root {
    /* change values by the size of the header & the footer to make the modal fit your page properly */
    --header-size: 20px;
    --footer-size: 20px;
    --modal-margin: calc(var(--header-size) + var(--footer-size));
}

/* ALL PAGE CONTAINER */
.fullpage-app {
    /* prerequisite for full height modal bar */
    position: relative;
    width: 100%;
    /* prevent the page to be shrinked if the content is less than the browser height, force a minimal height */
    min-height: calc(100vh - var(--modal-margin));
}

.level {
    display:flex;
    justify-content: space-between;
}

/** FILTER SUMMARY */
ul.odswidget.odswidget-filter-summary {
    margin: 15px 0;
    position: relative;
}
@media (min-width: 420px) {
    ul.odswidget.odswidget-filter-summary {
        display: flex;
        flex-wrap: wrap;
        align-items: center;
    }
}
li.odswidget-filter-summary__active-filter:first-child {
    margin-left: 100px;
}
li.odswidget-filter-summary__active-filter:first-child:before {
    content: 'Active filters: ';
    font-weight: 600;
    line-height: 1.8em;
    position: absolute;
    left: 0;
}
li.odswidget-filter-summary__active-filter,
li.odswidget-filter-summary__clear-all {
    border-radius: 3px;
    margin: 2px 4px;
    padding: 0;
}
li.odswidget-filter-summary__active-filter {
    background-color: #f3f3f3;
}

a.odswidget-filter-summary__active-filter-link,
a.odswidget-clear-all-filters {
    border-left: none;
    margin: 0;
    padding: 2px 4px 2px 2px;
    display: flex;
}
a.odswidget-clear-all-filters {
    align-items: center;
}
a.odswidget-clear-all-filters i {
    margin-right: 3px;
}



/* BACKDROP (black screen when modal active) */
.backdrop {
    visibility: hidden;
    opacity: 0;
    position: absolute;
    height: 100%;
    width: 100%;
    z-index: 900;
    background-color: #000;
    cursor: default;
    -webkit-transition: visibility .5s,opacity .5s;
    transition: visibility .5s,opacity .5s;
}
.backdrop-active {
    visibility: visible;
    opacity: .6; /* make a more or less darker backdrop, 1:totally dark, 0:totally transparent (invisibile) */
}
/* MODAL */
/* The modal is composed of 2 parts:
the leftside, that is the banner that is always visible, and contains an icon on top to click and actiavte the modal
the right side, that contains filters, searchbar, charts etc... that is not visible, activated on demand
the modal default size (width) is 57px, it correspond to the leftside width */
.modal {
    display: flex;
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    width: 0;
    background-color: white;
    z-index: 1000;
    overflow: hidden; /* Disable horizontal scroll */
    transition: ease-in 0.3s;
}
.modal-active {
    width: 400px; /* size of the modal when active */
}
/* specific because charts are loaded inside */
.modal__content {
    width: 400px;
}
@media (max-width: 420px) {
    .modal-active {
        width: 100%;
    }
    .modal__content {
        width: 100%;
    }
}

/* SHOW/HIDE SIDE */
.modal__rightside {
    display: flex;
    flex-direction: column;
    border-left: solid 1px lightgrey;
}
.modal__header,
.modal__footer {
    min-height: 35px;
    background-color: white;
    padding: 0 10px;
    display: flex;
    align-items: center;
    justify-content: start;
    opacity: 0;
    transition: opacity 0s;
}
.modal-active .modal__header, .modal-active .modal__footer {
    opacity: 1;
    transition-delay: 0.3s;
}
/* CONTENT OF THE MODAL */
/* HEADER / UPPER PART */
.modal__header {
    border-bottom: 1px solid lightgrey;
}
/* FOOTER / LOWER PART (optionnal) */
.modal__footer {
    border-top: 1px solid lightgrey;
}
/* THEN THE MIDDLE / CONTENT */
.modal__content {
    height: 100%;
    overflow-y: auto;
    padding: 25px;
    opacity: 0;
    transition: opacity 0s;
}
/* WARNING ! This part is very important : it renders the content only after the end of the openning of the modal
ie. when the modal is resized, nothing is visible, after 0.3s of resizing, it's displays the content
this trick is very important to avoid the browser the resize all the content during the modal opening */
.modal-active .modal__content {
    opacity: 1;
    transition-delay: 0.3s;
}

.content {
    padding-top: 20px;
}