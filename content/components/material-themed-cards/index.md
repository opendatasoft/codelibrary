---
description: "Cards with minimalistic customization of widget that you can theme with colors"
title: "Material themed cards"
date: 2021-05-27T16:39:16+02:00
tags: ["display", "navigation", "list"]
resources:
- src: '*/'
  name: folder-:counter
---

These cards are meant to be themed using only the following variables:
```
  --primary-hue: 265;
  --primary-saturation: 90%;
  --primary-lightness: 47%;

  --surface: white;
  --background: white;
  --card-text: #424242;
  --body-text: #424242;
```

It works with [HSL colors](https://www.w3schools.com/colors/colors_hsl.asp), by inputting the `--primary-hue`, `--primary-saturation` and `--primary-lightness` separately. 

These cards can be used anywhere and will fit 100% of their parent container. We recommend using them with a grid system, like the one used here.

All cards are prented with a sticky filter bar, to present how they can interact. The sticky bar is compatible with the color theming, but is not required.

Those cards follow the material design guidelines. If you need to build your page around those cards, visit <https://www.material.io>.
