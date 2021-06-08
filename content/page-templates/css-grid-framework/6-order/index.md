---
title: "Change the order, by device"
height: 700
---

Responsive layouts can lead to strange and mixed results when you organise the content by columns. 

In this example, on desktop view, the first grid keeps main content in the center, and let secondary content on the side.
When this grid is shrunk to a mobile view, from 4 to 2 columns, the idea of main and secondary content is lost.

To fix this, you need to force a new order. The second grid is therefore coherent for mobile users.

Use `cell-order-{n}` classes, with n from 1 to 12, to force the order of children within a grid.

Use `cell-order-none` to set the order to 0, `cell-order-first` and `cell-order-last` to push a child to the beginning or the end of the ordered list of elements.

Like every class, they can be combined with responsive prefixes. `sm:cell-order-1 md:cell-order-2` for example.


> Note that the HTML structure changes, if we think "mobile first", the HTML structure has the main content in first, the secondary in second. The CSS Grid framework then re-order element for small and above.
