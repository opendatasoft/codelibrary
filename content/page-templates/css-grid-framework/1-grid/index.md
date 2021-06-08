---
title: "Set the grid"
date: 2021-06-07T12:00:00+02:00
height: 450
---

Use `grid-cols-{n}` class to create grids with *n* equally sized columns.
`grid-{n}` can be used as a shortcut.

If there are more children than the grid size, they will automatically wrap. Ex: 8 children in a `grid-3` will render as a 3 rows grid.

Breakpoints for responsiveness are :
- `sm` for `640px` and above 
- `md` for `768px` and above
- `lg` for `1024px` and above

They can be used as prefixes, for example: `sm:grid-cols-2 lg:grid-cols-3`