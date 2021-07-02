---
title: "Heatmap with dynamic color scale"
description: "Custom heatmap with dynamic scale"
date: 2021-06-30T14:46:16+02:00
height: 550
---

Custom heatmaps or bubblemaps are made of a CSS grid, an `ods-adv-analysis` and several computations to get the colors and the axis.

- `ods-adv-analysis` returns the list of values for each axis. You need to adapt the axis `id` in `toObject` filter.
- The min and max of all aggregation are computed to get the boundaries and will be useful for colors computations.
- To display the grid, three computations are needed: the x-axis value positions, the y-axis value positions and the color values.
    
Colors are RGB codes, computed of the aggregation value within the range of all values. Low and high colors values are set into `variables` object at the beginning of the code.
    
The toggle button, and the legend are independent of the grid and can be removed.

> Note: It's much easier to deal with dates with Vega-Lite as it can split by day, day of the week, month with the labels and the correct ordering. We then strongly advice to go for [Vega-Lite heatmaps](/widget-tricks/heatmaps-vegalite) in that case.