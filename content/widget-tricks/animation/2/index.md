---
title: "Animated KPI with auto-reload"
---

Animate your KPI with `ods-timer` and add an auto-reload feature. 

The KPI is computed with `ods-aggregation`. For more information about how to compute metrics, see [ods-aggregation resource](/widget-tricks/ods-aggregation).

**Animation**: You can change the speed of the animation by changing 2 variables:

>`nbticks`: number of steps to change the KPI. High value = many steps before reaching the final KPI.

>`delay`: delay between each tick. High delay = slow animation.

You change also change the delay between 2 reloads by changing the variable `reloadeverynbtick`. High value = long delay betweens 2 reloads.