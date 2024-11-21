---
title: "Heatmaps with CSS Grid"
date: 2021-06-21T14:46:16+02:00
description: "Custom heatmaps and bubblemaps made by hand with CSS Grid layout and HTML"
tags: ["display", "ods-analysis", "aggregation"]
resources:
- src: '*/'
  name: folder-:counter
---

> We consider the usage of `ods-adv-analysis` as a prerequisite of this resource.
> [Documentation available here](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAdvAnalysis)

Keep in mind that, for heatmaps or bubblemaps, you'll need to adapt the display depending on the values, axis, and legends. 

For example, if the aggregation is too large to be displayed in cells, using `ods-tooltip` could be a nice way to display the value while hovering with the cursor.
Legends might also be a concern as they can overlap if they are too long.