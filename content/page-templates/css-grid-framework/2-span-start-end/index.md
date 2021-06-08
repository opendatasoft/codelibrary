---
title: "Columns position and size"
height: 600
---

Direct children of a grid are cells. Without a `cell` class, they will take 1 column and 1 row, and fill the grid automatically.

They can be set on a specific position, and span on several columns.

Use `cell-span-{n}` class to make an element span n columns, or simply `cell-{n}` as a shortcut.

Use `cell-span-full` class to span entirely (ie. the width of the grid), or simply `cell-full` as a shortcut.

Use `cell-start-{n}` and `cell-end-{n}` classes to make an element start or end at the nth grid line. 
Can be combined with `cell-span-*` classes.


> CSS grid lines start at 1, and ends at the size of the grid + 1. \[1, 4\] for a 3 columns wide grid for example.