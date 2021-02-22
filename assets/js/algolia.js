import algoliasearch from 'algoliasearch/lite';
import instantsearch from 'instantsearch.js';
import {searchBox, hits, configure} from 'instantsearch.js/es/widgets';
import connectHits from 'instantsearch.js/es/connectors/infinite-hits/connectInfiniteHitsWithInsights';
import "./algolia_insight"

export function initSearch() {
    const search = instantsearch({
        indexName: 'prod_codelibrary',
        searchClient: algoliasearch('LE77SHMNUX', '63933f0420a85da698f715b54c639bed'),
        hitsPerPage: 5,
        routing: true,
        searchFunction(helper) {
            const container = document.querySelector('#algolia-results');
            container.style.display = helper.state.query === '' ? 'none' : 'block';

            helper.search();
        },
        insightsClient: window.aa
    });

    search.addWidgets([
        searchBox({
            container: '#algolia-box',
            autofocus: false,
            placeholder: 'Search for content'
        }),
    ]);

    const renderHits = (renderOptions, isFirstRender) => {
        const {hits, widgetParams, insights} = renderOptions;
        if (renderOptions.results == undefined) {
            return;
        }
        /*
<div class="hit-head">
    <span class="hit-section">${hit._highlightResult.section.value}</span>
    /
    <span class="hit-title">${instantsearch.highlight({attribute: 'title', hit: hit})}</span>
</div>
<div class="hit-content">
    <p class="hit-summary">
        ${hit.print}
    </p>
    <ul class="tags">
        ${hit._highlightResult.tags.map(tag => `<li class="tag">${tag.value}</li>`).join('')}
    </ul>
</div>
         */
        widgetParams.container.innerHTML = `
            ${hits.length > 0 ? `
                <div class="ais-Hits-list">
                  ${hits
                .map(
                    hit => `
                        <a class="ais-Hits-item" data-rel-path="${hit.relpermalink}" data-object-id="${hit.objectID}" href="${hit.relpermalink}">
                            <div class="hit-head">
                                <div class="level">
                                    <div class="level-left">
                                        <span class="hit-section">${hit._highlightResult.section.value}</span>
                                        <span class="hit-separator">/</span>
                                        <span class="hit-title">${instantsearch.highlight({attribute: 'title', hit: hit})}</span>
                                    </div>
                                </div>
                            </div>
                            <div class="hit-content">
                                <p class="hit-summary">
                                    ${hit.print}
                                </p>
                                <span class="hit-tags">
                                        Tags: ${hit._highlightResult.tags.map(tag => `${tag.value}`).join(', ')}
                                </span>
                            </div>
                        </a>
                      `
                )
                .join('')}
                </div>
              `
            :
            `
                <div id="no-results-message">
                    <p>We didn't find any results for the search <em>"${renderOptions.results.query}"</em>.</p>
                </div>
            `}
            <div class="algolia-docsearch-footer">
              Search by <a class="algolia-docsearch-footer--logo" href="https://www.algolia.com/docsearch">Algolia</a>
            </div>
            `

        const anchors = widgetParams.container.querySelectorAll('.ais-Hits-item');
        anchors.forEach(anchor => {
            anchor.addEventListener('click', event => {
                const objectID = anchor.getAttribute('data-object-id');
                const relpath = anchor.getAttribute('data-rel-path');
                insights('clickedObjectIDsAfterSearch', {eventName: relpath, objectIDs: [objectID]});
            })
        })
    };

    const customHits = connectHits(renderHits);

    search.addWidgets([
        customHits({
            container: document.querySelector("#algolia-results"),
            transformItems: items => {
                items.forEach(item => {
                    /* highlighted description more important than highlighted content.
                    If any available, get the description or the content if description is empty */
                    if (item._snippetResult.description.matchLevel != "none") {
                        item.print = item._snippetResult.description.value;
                    } else {
                        if (item._snippetResult.content.matchLevel != "none") {
                            item.print = item._snippetResult.content.value;
                        } else {
                            if (item._snippetResult.description.value == "") {
                                item.print = item._snippetResult.content.value;
                            } else {
                                item.print = item._snippetResult.description.value;
                            }
                        }
                    }
                });
                return items;
            }
        }),
        configure({
            clickAnalytics: true,
        })
    ]);

    search.start();
};
