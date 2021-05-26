---
title: "Change the order, by device"
date: 2021-05-24T12:12:02+02:00
height: 700
---

Responsive layouts can lead to strange and mixed results when you organise the content by columns. 

In this example, on desktop view, the first grid keeps main content in the center, and let secondary content on the side.
When this grid is shrunk to a mobile view, from 4 to 2 columns, the idea of main and secondary content is lost.

To fix this, you need to force a new order. The second grid is therefore coherent for mobile users.

> Note that the HTML structure changes, if we think "mobile first", the HTML structure has the main content in first, the secondary in second. The CSS Grid framework then re-order element for small and above.
