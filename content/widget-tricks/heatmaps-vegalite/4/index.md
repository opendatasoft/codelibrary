---
title: "Bubblemaps"
description: "Bubblemaps with Vega-Lite"
date: 2021-06-30T14:46:16+02:00
height: 550
---

To switch to a bubblemap:
- set the `grid` to false in the config view 
- set the mark type to `circle`
- in addition to the `color` property, a new mark property is necessary to change the size of the circles: `size`.

[`size` mark property documentation here](https://vega.github.io/vega-lite-v2/docs/encoding.html#mark-prop). 
It's very similar to the color property, it expects an aggregate and field option to be able to size circles depending on your data. 
It also accepts different scale types (quantile, power, log etc...). 

