const search = instantsearch({
  appId: 'XGE67QYGAR',
  apiKey: '4de1a710351e1933128b8010dbc2a327',
  indexName: 'Codelibrary',
  routing: true
});

search.addWidget(
    instantsearch.widgets.refinementList({
      container: '#refinement-list',
      attributeName: 'tags'
    })
);
search.addWidget(
    instantsearch.widgets.searchBox({
      container: '#search-box',
      placeholder: 'Search for products'
    })
);
search.addWidget(
    instantsearch.widgets.infiniteHits({
      container: "#hits",
      templates: {
        empty: 'No results',
        item: '<em>{{title}}</em> : {{{_highlightResult.summary.value}}}'
      },
    })
);
search.addWidget(
    instantsearch.widgets.currentRefinedValues({
      container: '#current-refined-values',
      clearAll: false
    })
);
search.addWidget(
    instantsearch.widgets.clearAll({
      container: '#clear-all',
      templates: {
        link: 'Reset everything'
      },
      autoHideContainer: true
    })
);


search.start();
