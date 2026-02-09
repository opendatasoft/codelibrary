---
title: "Drilldown select for geographical levels"
date: "2022-03-20"
height: 600
---

A reuse of `ods-select` to create filters based on a serie of geographical levels.

**IMPORTANT**: This example integrates advanced parameters that can be customized:
- `disabled` parameter in `ods-select`: used to disable the filter if the condition is true. In the example, the filter is disabled when the previous filter is not activated.
- `on-change` parameter in `ods-select`: used to clear previous filters on the context `ctx` when a new selection is made. In the example, it enables you to select a région, a département, and then switch to another région, without having to clear the filter département.
- Angular expressions after each `ods-select`: used to sync the selection on all the geographical levels. In the example, it enables you to have a list of département filter on the région selected.

> **Note:** you will need to create one context for each geographical level, in order to keep the full list of the items after the refine.

