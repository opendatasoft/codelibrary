---
title: "{{ replace .Name "-" " " | title }}"
description: ""
date: {{ .Date }}
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---
