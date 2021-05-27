---
title: "Themed dashboard"
description: "Dashboard that can be configured to a color scheme."
date: 2021-05-03T15:26:47+02:00
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---

These exemples present themable dashboards, that can be configured through the following variables:
```
--primary: hsl(36, 94%, 59%);
--primary-h-s: 36, 94% ; /* If your color is hsl(36, 94, 59), input 36, 94 */
--surface: hsl(200, 21%, 37%);
--background: hsl(198, 20%, 17%);
--card-text: white;
--body-text: white;
```

See the exemples on the themed components.

These dashboards are based on the [monitoring dashboard]("/monitoring-dashboard"), but can be configured for any source.
