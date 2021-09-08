---
title: "Sub-aggregation after ods-adv-analysis"
height: 400
---

The `ods-adv-analysis` widget can be use in conjunction with `ods-subaggregation`.

It will perform a second aggregation after the API result. 

In the example, we use this technique to perform a daily average over a week, (from a second precision timeserie). 
1. `ods-adv-analysis` groups record by day over the last 7 days, and returns the total number of hits for each day. 
2. `ods-subaggregation` computes the average of hits by day.

[ods-subaggregation documentation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsSubaggregation)