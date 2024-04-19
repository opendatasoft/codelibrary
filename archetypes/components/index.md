---
title: "{{ replace .Name "-" " " | title }}"
date: {{ .Date }}
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---
