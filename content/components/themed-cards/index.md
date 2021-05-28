---
description: "Cards with minimalist customization of widget that you can theme with colors"
title: "Minimalist themed cards"
date: 2021-05-27T16:39:16+02:00
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---

These cards are meant to be themed using only the following variables:
```
--primary: hsl(36, 94%, 59%);
--primary-h-s: 36, 94% ; /* If your color is hsl(36, 94, 59), input 36, 94 */
--surface: hsl(200, 21%, 37%);
--background: hsl(198, 20%, 17%);
--card-text: white;
--body-text: white;
```

You will need to input both `--primary` and `--primary-h-s` for the color gradient to work.

These cards can be used anywhere and will fit 100% of their parent container. We recommend using them with a grid system, like the one used here.

All cards are prented with the [sticky filter bar](/sticky-filters), to present how their interactivity. The sticky bar is compabtible with the color theming, but is not required.

Those cards follow the material design guidelines. If you need to build your page around those cards, visit <https://www.material.io>.
