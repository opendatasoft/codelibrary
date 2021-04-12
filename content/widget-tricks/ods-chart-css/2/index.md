---
title: "Advanced options"
date: 2021-04-06T21:00:10+02:00
---

Before hacking the CSS, several advanced option can help to optimize the display

 

On `ods-chart` :
- `single-y-axis="true"` : remove the Y axis label on the left 
  
    or with the following additional parameter, rename it 

- `single-y-axis-label="Nb of sites"` : rename the Y axis label on the left
  
- `labels-x-length="20"` : increase label length
- `display-legend="false"` : remove bottom legend BUT beware to create your own legend or chart description somewhere else. Specially for multilines charts.

 

On `ods-chart-query` :
- `category-colors={'x-value':'#FF0000'}` : Set a specific color for each X value 

 

On `ods-chart-serie` :
- `label-y="Number of sites by Region"` : 
- `color="#FF0000"` : Set a specific color for the serie of the chart
- `display-values="true"` : Display values on top of the serie