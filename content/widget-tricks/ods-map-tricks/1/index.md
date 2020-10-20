---
title: "ods-maps tricks - 1"
---

## Map as a selector

In this example, the french administrative regions are displayed first and the user click refines on the departments dataset. On the right section you can observe the applied filter on departments context and the list of departments returned. The 'regions' context is not affected and is not filtered. Note that it would also be possible to apply the filter on regions context, to do so, please have a look to the next resource of this page.

_If your layer is displayed as raw or aggregation, you can configure a layer so that a click on an item triggers a refine on another context, using **refineOnClickContext**. One or more contexts can be defined:_