---
title: Change log
date: "2022-02-10T00:00:00+01:00"
description: Change log with version and improvements 
nocode: true
---

### V3.0
- The listing generator is now fully compatible for pages, custom views and embeds.
- Add `mapView` option to activate a map (in `cards` view)
- Add pagination module for `table` view
- Add infinite scroll for `cards` view
- Set a label parameter for the "access to source" link
- Filters can now have a `label` option, to rename the field label and propose as a placeholder for the select.
- Field can now have a `label` option, to rename the field label in the view. In `cards` view, the label can be an empty string `''`.

### V2.2
- Add `sort` param
- Add an advanced mode for fieldsList
  Fields can now be a list of object, that provides the field id, the format, and some options.
  See the documentation for more details.
- No icon displayed by default for KPIs

### V2.1
- Add ods-select and multiple choice option for filters
- Add clear all filter button when one filter is applied
- responsive display for filters and date button
- KPI default value to 0 when no data/results to display

### V2.0
- add a date field that display a date range slider
- download link knows support files hosted on ODS
- dynamic title / description / access source link from the context
