---
title: "Sub-aggregation on adv-analysis"
date: 2021-09-02T09:29:25+02:00
---

The `ods-adv-analysis` widget can be use in conjonction with `ods-subaggregation`. To do so, the field on which to perform the aggregation ('x-axis' or 'expression' in other widgets) has to be name `x`.

In the exemple below we use this technique to perform a daily average of an hourly timeserie. `ods-adv-analysis` is used to group records by day over the last 7 days and then `ods-subaggregation` is used to make the average of those results.
