const search = instantsearch({
    appId: 'XGE67QYGAR',
    apiKey: '4de1a710351e1933128b8010dbc2a327',
    indexName: 'Codelibrary',
    hitsPerPage: 5,
    routing: true,
    searchFunction(helper) {
        const container = document.querySelector('#algolia-results');
        container.style.display = helper.state.query === '' ? 'none' : '';

        helper.search();
    }
});

search.addWidget(
    instantsearch.widgets.searchBox({
        container: '#algolia-box',
        reset: true,
        placeholder: 'Search for content'
    })
);
search.addWidget(
    instantsearch.widgets.infiniteHits({
        container: "#algolia-results",
        templates: {
            empty: 'No results',
            item: '<hr/> {{{_highlightResult.title.value}}}<br/> {{{_highlightResult.summary.value}}} <br/>{{{_highlightResult.tags[0].value}}}'
        },
    })
);

// initialize RefinementList
search.addWidget(
    instantsearch.widgets.refinementList({
        container: "#algolia-refine",
        attributeName: "tags",
    })
);

search.start();