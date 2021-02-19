---
title: "{{ replace .Name "-" " " | title }}"
date: {{ .Date }}
description: ""
tags: [""]
resources:
- src: '*/'
  title: 'Section #:counter'
---

*This resources is intended to be used as custom view inside your catalog. Read the [user's guide section](https://help.opendatasoft.com/platform/en/publishing_data/07_configuring_visualizations/06_configuring_custom_view/custom.html#configuring-the-custom-view) about custom views for details*.
