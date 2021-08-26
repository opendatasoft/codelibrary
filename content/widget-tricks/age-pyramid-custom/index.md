---
title: "Age Pyramid with custom HTML/CSS"
date: 2021-08-20T18:02:27+02:00
tags: ["display", "chart", "ods-adv-analysis", "ods-aggregation", "ods-subaggregation"]
resources:
- src: '*/'
  name: folder-:counter
---

Create an age pyramid to present the repartition of the population in your area, with custom HTML and CSS.

> We consider the usage of `ods-adv-analysis`, `ods-aggregation` and `ods-subaggregation` as prerequisites of this resource.
> Do not hesitate to have a look at the documention:
> - [ods-adv-analysis](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAdvAnalysis)
> - [ods-aggregation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAggregation)
> - [ods-subaggregation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsSubaggregation)


3 parameters must be declared in the code:
- `agefield` : the id of the age field in your dataset
- `genderfield` : the id of the gender field in your dataset
- `valuefield` : the id of the value field in your dataset

Then, you can customize the colors of the bars in the CSS file, with the 2 variables:
- `--left-color`
- `--right-color`