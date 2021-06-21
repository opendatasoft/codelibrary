---
title: "Heatmaps with custom HTML/CSS"
date: 2021-06-21T14:46:16+02:00
tags: ["display", "ods-analysis", "aggregation"]
resources:
- src: '*/'
  name: folder-:counter
---

> We consider the usage of `ods-adv-analysis` as a prerequisite of this resource.
> [Documentation available here](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAdvAnalysis)

> Did you see ? [Heatmaps with Vega-lite](/widget-tricks/heatmaps-vegalite) 

For advanced usages, if Vega-lite does not satisfy your needs, you can create heatmaps by hand with only HTML Grid and CSS.

Keep in mind that , for heatmaps or bubblemaps, you'll need to adapt the display depending on the values, axis, and legends. 

For example, if the aggregation is too large to be displayed in cells, using `ods-tooltip` could be a nice way to display the value while hovering with the cursor.
Legends might also be a concern as they can overlap if they are too long.