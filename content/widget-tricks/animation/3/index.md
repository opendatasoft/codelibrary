---
title: "Animated KPI with a gauge"
date: 2021-03-02T17:03:00+01:00
---

Animate your percentage KPI with `ods-gauge`. 
The percentage is computed with 2 `ods-aggregation` : one for value, and one for the max. For more information about how to compute metrics, see [ods-aggregation resource](/widget-tricks/ods-aggregation).

These 2 aggregations are then used in `ods-gauge`, in 2 parameters : **value** and **max**.