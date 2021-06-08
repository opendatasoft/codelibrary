---
title: "Automatic initial bounds - based on the data"
date: 2021-05-04T15:25:23+02:00
---

Get the date range of the data, and use it to automatically set initial bounds.

It combines an `ods-analysis` to get the range, the `ods-date-range-slider`, and some AngularJs expression to activate a "reset range button".

**Note1:** Two contexts are used, one for the page, and one specific to get the date range.
 
**Note2:** the date field id in this example is `date_start`
 
**Note3:** Pay attention to the date field precision. This example only work with day precision date fields. See next resources for month and year precision fields.   