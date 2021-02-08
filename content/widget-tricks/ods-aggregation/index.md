---
title: "oods-aggregation"
description: "Various examples to showcase ods-aggregation. This widget exposes the results of an aggregation (sum, average, minimum, maximum etc...) function."
tags: ["aggregation", "ods-aggregation"]
resources:
- src: '*/'
  title: 'Section #:counter'
---

**The technical documentation says :**

This widget exposes the results of an aggregation function over a context... The result is exposed into a new variable that you can use in other widgets or directly in your HTML.

**More concretely :**

It computes a function like the sum, average, minimum, maximum etc.. over a numerical field. Depending on the context parameters, if filtered (queries, refines, etc...) it will compute the aggregation on a subset of the records, if not, on the entire dataset.
