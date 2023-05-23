---
title: "Dataviz gallery page"
description: "A page template to display data visualizations on your portal."
date: 2023-03-17T12:00:00+02:00
tags: ["display"]
resources:
- src: '*/'
  name: folder-:counter
---

This template is a mixture of the [Listing page template](/page-templates/listing-page/) and the [Access Cards component](/components/access-card/). It was created to offer a simple way of showcasing your data visualizations, custom views, maps and Studio pages on your portal.

It offers more customization possibilities to advanced users who would like to add or remove items from this template, like additional filters, new card content or adding a date range slider.

This ressource integrates the following widgets:
 - `ods-select` to create the filters on text fields. [Resource available here](/widget-tricks/ods-select/)
 - `ods-adv-analysis` to create KPI. [Resource available here](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAdvAnalysis)
 - `ods-date-range-slider` to create a date selector. It is deactivated by default. [Resource available here](/widget-tricks/ods-date-range-slider/)
 - `ods-results` to list the content of the records from the dataset. [Resource available here](/widget-tricks/ods-results/)