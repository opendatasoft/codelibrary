---
title: "ods-chart custom CSS library"
date: 2021-04-06T21:00:10+02:00
---

This resource introduces a custom CSS library dedicated to ods-chart, it helps users to customize their charts easily by simply adding CSS classes to `ods-chart` tag.
**To install it, simply copy the CSS code of this resource, and paste it into your page.**

CSS classes follows this pattern : `value-[axis]-chartproperty`.

Chart properties can be :
- `axisline`
- `gridline`
- `axisline-ticks`
- `chart-series`
- `chart-legend-dash`
- `chart-legend-circle`
- `values`
- `legend`

Axis can be `x` or `y`

For paths, like axislines, gridlines, ticks, chart series, legend dashes and chart legend circles, `value` can be :
- `small`
- `medium`
- `large`
- `extralarge`

For texts, like legends and values, `value` can be :
- `light`
- `normal`
- `bold`

For paths and texts that can be colored, `value` can be :
- `lightgrey`
- `darkgrey`
- `black`

Chart properties that can't be disabled by ods-chart parameters, can be hidden with `hide` as the `value` 

Other specific properties :
- `centered-tooltip` : to center the text in mouse hover tooltip
- `transparent-background`, `remove-background`, `no-background`, `no-bg` : get rid of the default white background.

Examples:
- Hide Y values : `hide-y-values`
- Hide X legend : `hide-x-legend`
- Bold weight for Y values font : `bold-y-values`
- Black color for Y legend font : `black-y-legend`
- Larger stroke for chart series : `large-chart-series` 
- Extralarge dash in chart legend (for line/spline series) : `extralarge-chart-legend-dash`
- etc...