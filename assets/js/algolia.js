import algoliasearch from 'algoliasearch/lite';
import instantsearch from 'instantsearch.js';
import { searchBox, infiniteHits } from 'instantsearch.js/es/widgets';

var hit = `
    <div class="hit">
        <div class="hit-content">
            <h2 class="hit-title">{{{_highlightResult.title.value}}}</h2>
            <p class="hit-categories">{{{categories}}}</p>
            <p class="hit-tags">{{{tags}}}</p>
            <p class="hit-summary">{{{_highlightResult.summary.value}}}</p>
        </div>
    </div>
    `;
var empty = `
    <div id="no-results-message">
        <p>We didn't find any results for the search <em>"{{query}}"</em>.</p>
        <a href="." class='clear-all'>Clear search</a>
    </div>
    `;

export function initSearch() {
    const search = instantsearch({
        indexName: 'Codelibrary',
        searchClient: algoliasearch('XGE67QYGAR', '4de1a710351e1933128b8010dbc2a327'),
        hitsPerPage: 5,
        routing: true,
        searchFunction(helper) {
            const container = document.querySelector('#algolia-results');
            container.style.display = helper.state.query === '' ? 'none' : '';

            helper.search();
        }
    });

    search.addWidgets([
        searchBox({
            container: '#algolia-box',
            autofocus: true,
            placeholder: 'Search for content'
        }),

        infiniteHits({
            container: "#algolia-results",
            templates: {
                item: hit,
                empty: empty,
            }
        })
    ]);

    search.start();
};
