---
title: "ods-color-gradient & ods-legend"
description: "This widget computes a gradient of colors based on a numerical aggregation. It's mainly used to color the shapes of a map for analytics purposes."
tags: ["display", "aggregation", "geo"]
resources:
- src: '*/'
  title: 'Section #:counter'
---


# ods-color-gradient + ods-map : a choropleth alternative

This **map rendering technique** allows to display on a map colored shaped based on the aggregation of **a different dataset**.

**One dataset contains the data** to make some statistical computation (Avg, sum, counting of numerical fields) and **one dataset contains geographical information** (geo shapes).

The technique is very similar to a join at processing time, to enrich statistical data with geographical data. The only prerequisit is, like for a regular join, having a shared key between datasets to make the numerical aggregation match its geo shape.

Big advantages are mainly to not overweight the statistical dataset by a processing join and storing multiple times the same geo shape in the data. and secondly to choose the geographical granularity or administrative level only when you render the map. A same statistical dataset can now be rendered with several geographical referentials as long as it contains all the needed keys, codes or names to match the geographical shapes.

For example: inhabitant dataset of a country can be rendered by region, departement, cities and so on as long as you have the geographical dataset of each administrative layers.


**How it works:** the technique is to aggregate the data with the ods-color-gradient to obtain the color gradient as a color object. Then feed an ods-map with this color object.

