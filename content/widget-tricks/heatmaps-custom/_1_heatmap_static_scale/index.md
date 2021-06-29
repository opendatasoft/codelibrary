---
title: "Heatmap with static scale"
height: 550
---

The colors are static, and set in the `ng-class` of the cell, with a simple condition and static thresholds.
The code is therefore much simpler than dynamic RGB computation. 

But keep in mind that if the order of size of the aggregation changes, you'll then need to adapt your thresholds, and then the page.