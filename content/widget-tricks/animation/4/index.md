---
title: "Animated KPI with a gauge and auto-reload"
---

Animate your percentage KPI with `ods-gauge` and add an auto-reload feature.

The percentage is computed with 2 `ods-aggregation` : one for value, and one for the max. For more information about how to compute metrics, see [ods-aggregation resource](/widget-tricks/ods-aggregation).

These 2 aggregations are used in an AngularJS expression line 28 to set the value and the max of `ods-gauge` filled in by `ods-timer`.

**Animation**: You can change the speed of the animation by changing 2 variables:

>`nbticks`: number of steps to change the KPI. High value = many steps before reaching the final KPI.

>`delay`: delay between each tick. High delay = slow animation.

You change also change the delay between 2 reloads by changing the variable `reloadeverynbtick`. High value = long delay betweens 2 reloads.