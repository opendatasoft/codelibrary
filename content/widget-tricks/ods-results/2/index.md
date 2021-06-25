---
title: "Cards list"
---

With [ODS layout system](https://help.opendatasoft.com/platform/en/customizing_look_and_feel/06_customizing_theme/theme.html#layout-options), 
you can easily list results and print each record as a card. 

> Note that these codes also relies on [this resource](/page-templates/ods-layout-over-ride) that over-rides this ODS layout.

It can then be combined with other widgets, by getting a metadata from the record, 
and feeding another widget with it. In this example, we get the shape of the record, 
and feed [ods-geotooltip](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsGeotooltip) 
with its value.