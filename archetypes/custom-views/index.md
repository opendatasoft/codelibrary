---
title: "{{ replace .Name "-" " " | title }}"
date: {{ .Date }}
description: ""
tags: [""]
resources:
- src: '*/'
  title: 'Section #:counter'
---
