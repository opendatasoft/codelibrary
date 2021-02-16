---
title: "{{ replace .Name "-" " " | title }}"
date: {{ .Date }}
description: ""
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---
