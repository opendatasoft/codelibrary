---
title: "Example with the city of Issy-les-Moulineaux, France"
date: 2021-08-20T18:02:27+02:00
height: 300
---

You first have to setup your `ods-adv-analysis` by writing the right fields names for the `select` and `group-by` parameters.

Then, the `ods-vega-lite-chart` is divided in 2 parts, one for each side (Male/Female usually). For each side, you have to fill in:
- the filter: the gender informations (field and title)
- the y axis: the age field
- the x axis: the population field

You can also customize the color for both sides in the `color` and then `scale` property.
