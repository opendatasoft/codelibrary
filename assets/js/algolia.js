import algoliasearch from 'algoliasearch/lite';
import instantsearch from 'instantsearch.js';
import {searchBox, hits, configure} from 'instantsearch.js/es/widgets';
import connectHits from 'instantsearch.js/es/connectors/infinite-hits/connectInfiniteHitsWithInsights';
import "./algolia_insight"

var hit = `
    <a class="hit" href="{{{permalink}}}">
        <div class="hit-head">
            <p class="title is-6 hit-title">{{{_highlightResult.title.value}}}</p>
            <p class="hit-categories">
                {{#_highlightResult.categories}}
                <span class="tag is-info">{{value}}</span>
                {{/_highlightResult.categories}}
            </p>
        </div>
        <div class="hit-content">
            <p class="hit-summary content has-text-grey">
                {{{print}}}
            </p>
            <ul class="tags">
                {{#_highlightResult.tags}}
                <li class="tag is-info is-light">{{{value}}}</li>
                {{/_highlightResult.tags}}
            </ul>
        </div>
    </a>
    `;
var empty = `
    <div id="no-results-message">
        <p>We didn't find any results for the search <em>"{{query}}"</em>.</p>
    </div>
    `;

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
            autofocus: true,
            placeholder: 'Search for content'
        }),

        /*hits({
            container: "#algolia-results",
            templates: {
                item: hit,
                empty: empty,
            },
            transformItems: items => {
                items.forEach(item => {
                    /!* Algo :
                    highlighted description more important than highlighted content.
                    If any available, get the description or the content if description is empty
                     *!/
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
                    console.log(item);
                });
                return items;
            }
        })*/
    ]);

    const renderHits = (renderOptions, isFirstRender) => {
        const {hits, widgetParams, insights} = renderOptions;
        if (renderOptions.results == undefined) {
            return;
        }
        widgetParams.container.innerHTML = `
            ${hits.length > 0 ? `
                <div class="ais-Hits-list">
                  ${hits
                .map(
                    hit => `
                            <a class="ais-Hits-item" data-rel-path="${hit.relpermalink}" data-object-id="${hit.objectID}" href="${hit.relpermalink}">
                                    <div class="hit-head">
                                        <p class="title is-6">${instantsearch.highlight({attribute: 'title', hit: hit})}</p>
                                        <span class="tag is-info">${hit._highlightResult.section.value}</span>
                                    </div>
                                    <div class="hit-content">
                                        <p class="hit-summary content has-text-grey">
                                            ${hit.print}
                                        </p>
                                        <ul class="tags">
                                            ${hit._highlightResult.tags.map(tag => `<li class="tag is-info is-light">${tag.value}</li>`).join('')}
                                        </ul>
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
