---
title: "Filter by type, fed by a facet (via ods-facet-results widget)"
---

`ods-facet-results` enumerates the values ("categories") of a facet, and exposes it in a variable. this variable can then be the option source of `ods-select`.

[ods-facet-results widget documentation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsFacetResults)

> **Note 1:** that facets are limited to the first 100 results, it's then suitable for categories, types, properties that have a small set of distinct values

> **Note 2:** set `disjunctive` mode to true in the context parameters to keep other values available after a selection
