---
title: "ods-map replace tooltip refine 1 pop-in"
---

## Replace map tooltip with a refine : in a pop-in !

In this example, `refineOnClick` will be used to open a modal on top on the map. It's a good alternative to map tooltips, specially when their is a lot of content to display. 
It's also easier to get contexts and refines from the page as default tooltips are in an isolated scope. that means that actions performed in the tooltip can't have any effect on the page.
In this example, modals are simple html blocs, displayed when a refine is active. 
