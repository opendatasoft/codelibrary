---
title: "Heatmap with static scale"
description: "Custom heatmap with static scale"
date: 2021-06-30T14:46:16+02:00
height: 550
---

The colors are static, and set in the `ng-class` of the cell, with a simple condition and static thresholds.
The code is therefore much simpler than dynamic RGB computation. 

But keep in mind that if the order of size of the aggregation changes, you'll then need to adapt your thresholds, and therefore the page.