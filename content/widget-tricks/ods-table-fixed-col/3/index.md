---
title: "Responsive concern, unfix columns for smaller devices"
height: 600
---

Fixing too many columns can lead to a totally stuck and unreadable table on mobile device.

`ods-get-element-layout` get the size of an element and output the value in a variable. 
[(Widget documentation here)](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsGetElementLayout). 

We can then fix the right number of columns depending on the width of the table.
    
> Note: you can even fix columns only for desktop devices, and any for mobile