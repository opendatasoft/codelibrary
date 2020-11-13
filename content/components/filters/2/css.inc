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