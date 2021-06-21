---
title: "Custom heatmap with dates"
date: 2021-06-21T14:46:16+02:00
height: 550
---

Custom heatmaps or bubblemaps are made of a CSS grid, an `ods-adv-analysis` and several computations to get the colors and the axis.

1. Out of the `ods-adv-analysis`, the list of different values for each axis is computed. You need to adapt the axis `id` in `toObject` filter.
2. Then the min and max of all aggregation is computed to get the boundaries and will be useful for colors computations.
3. Then the grid is displayed, it's more or less 3 loops :
    1. One for the X axis, listing all values and setting the right position in the grid
    2. One for the Y axis, listing all values and setting the right position in the grid
    3. The last one for the content itself, computing the color, and setting the right position. Axis `id` will also need to be modified in the style attribute.

Colors are RGB codes, computed of the aggregation value within the range of all values. Low and high colors values are set into `variables` object at the beginning of the code.
    
The toggle button, and the legend are independent of the grid and can be removed.
