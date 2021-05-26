---
title: "Filter by the results of an analysis (via ods-analysis widget)"
height: 650
---

- Select cities by their population
- Select companies by their capital, number of employees
- Select regions by their solar power production
- Select power sources by their production
etc...

Computing the average, maximum, sum of a field to sort de list of proposition in `ods-select`

`ods-analysis` [Code Library resource](https://codelibrary.opendatasoft.com/widget-tricks/ods-analysis/) and [it's documentation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAnalysis).

> **Note 1:** performing an analysis on a field containing huge quantity of distinct values can alter performances of the page (the browser needs to download the long list of possible values, then it displays and manipulates the list into the widget)

> **Note 2:** selecting a value and refining the context will no longer let you choose other values as they will disappear with the selection. (contrary to `ods-facets` and `ods-facet-results` that can use the disjunctive mode, ie. multi selection mode). To counter that, we need 2 contexts: 1 to perform the analysis and feed ods-select, 1 to refine and display the chart
