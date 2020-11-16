/* Accordion filters
   ========================================================================== */

.accordion {
    margin-bottom: 20px;
}

.accordion-button {
    color: #FFFFFF;
    background-color: var(--highlight);
    border: 1px solid var(--highlight);
    font-size: 1rem;
    font-weight: normal;
    margin-bottom: 13px;
    border-radius: 100px; 
    padding: .5rem 1.5rem;
    transition: opacity .2s;
}

.accordion-button:hover {
    opacity: .65;
}

.accordion-button-text {
    margin-right: 5px;
}

.accordion-content {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(160px, 1fr));
    height: 400px;
    max-height: 0;
    overflow: hidden;
    transition: all .25s;
}

@media screen and (min-width: 768px) {
    .accordion-content {
        display: flex;
        margin-top: -.75rem;
        margin-left: -.75rem;
        margin-right: -.75rem;        
    }
}

.accordion-content.is-open {
    max-height: 800px;
}

.accordion-filter {
    max-height: 100%;
    overflow: auto;
    padding: .75rem;
}

@media screen and (min-width: 768px) {
    .accordion-filter {
        max-height: none;
        overflow: visible;
        flex: 1 1 0;
    }
}

.accordion-filter-title {
    font-weight: bold;
    font-size: 1rem;
    margin-top: 13px;
    margin-bottom: 13px;
    padding-bottom: 13px;
    border-bottom: 1px solid rgba(0,0,0,.1);
}

.accordion-filter-results {
    max-height: 100%;
    overflow: auto;
    padding-bottom: 2rem;
}

/**** Filter summary ****/

.odswidget.odswidget-filter-summary {
    padding-bottom: 10px;
    position: relative;
}

@media (min-width: 420px) {
    .odswidget.odswidget-filter-summary {
        display: flex;
        flex-wrap: wrap;
        align-items: center;
    }
}

.odswidget-filter-summary__active-filter,
.odswidget-filter-summary__clear-all {
    border-radius: 3px;
    margin-right: 4px;
    padding: 0;
}

.odswidget-filter-summary__active-filter {
    background-color: #f3f3f3;
}

.odswidget-filter-summary__active-filter-link,
.odswidget-clear-all-filters {
    border-left: none;
    margin: 0;
    padding: 2px 4px 2px 2px;
    display: flex;
    align-items: center;
}

.odswidget-filter-summary__active-filter-link::after {
    content: '\f057';
    font-family: 'FontAwesome';
    line-height: 1;
    margin-left: 8px;
}

.odswidget-clear-all-filters i {
    margin-right: 3px;
}
