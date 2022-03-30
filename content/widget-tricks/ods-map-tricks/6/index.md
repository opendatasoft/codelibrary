---
title: "Replace map tooltip with a refine : see the aggregation !"
height: 700
date: "2021-03-30"
---

In this example, in combination with [`ods-color-gradient` to display a choropleth map](/widget-tricks/ods-color-gradient/), the `refineOnClick` is used to select a department and activate KPI cards on top of the map.

- the first KPI card displays the aggregation result from `ods-color-gradient` and display it's value
- the second KPI card get the name of the selected department, through an `ods-results` on the refined context
- the third KPI card computes a new aggregation with `ods-adv-analysis`
