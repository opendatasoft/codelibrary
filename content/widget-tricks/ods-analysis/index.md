---
title: "ODS Analysis"
description: "This widget exposes the results of an analysis. It can be used to display aggregations like sums, averages, min or max of numerical values, as a table, a custom chart or advanced KPIs."
tags: ["ods-analysis", "aggregation", "chart", "display"]
resources:
- src: '*/'
  title: 'Section #:counter'
---


# Ods-analysis, a quick intro

**The technical documentation says :**

_This widget exposes the results of an analysis (as an object containing a results array and optionally an aggregations object) in a variable available in the scope. It can be used with AngularJS's ngRepeat to simply build a table of analysis results._

**Normal people would say :**

_Ods-analysis is the way to get the values behind a chart ! What you can do with a chart, you can do the same with ods-analysis. You get the figures, and do whatever you want in your dashboard with the results !_

The syntax is different, but options and parameters are pretty similar. You have a context, an X axis, you define series, optionnaly you sort the results.
To conclude, we can say that : **ods-analysis is the low level widget of ods-chart, its underlying layer !**

