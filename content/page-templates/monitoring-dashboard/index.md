---
title: "Monitoring Dashboard"
date: 2021-05-03T15:26:47+02:00
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---
This dashboard presents the main informations from the monitoring dataset. See the full documentation about the [monitoring dataset](https://help.opendatasoft.com/platform/en/managing_domain/03_analyzing_domain_usage/analyzing_source_data.html).

Since monitoring data is private, we use a dummy dataset in these exemple. For the exemples to fully fuction, you must replace all:
```
<ods-dataset-context context="XXX" XXX-dataset="monitoring-copy">
```
 With:
```
<ods-dataset-context context="XXX" XXX-dataset="ods-api-monitoring" XXX-source="monitoring">
```
These lines are provided in the resource as comments in the right places. Be sure to uncomment them.
