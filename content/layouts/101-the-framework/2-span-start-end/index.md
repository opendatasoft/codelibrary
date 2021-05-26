---
title: "Columns position and size"
date: 2021-05-24T12:12:02+02:00
---

Children are cells. They can be set on a specific position, and span on several columns.

Use `cell-span-{n}` class to make an element span n columns.

Use `cell-start-{n}` and `cell-end-{n}` classes to make an element start or end at the nth grid line. 
Can be combined with `cell-span-{n}` to span a specific number of columns.

> CSS grid lines start at 1, and ends at the size of the grid + 1. \[1, 4\] for a 3 columns wide grid for example.