---
title: "Last but not least, the good practice for geo filters ! (showcasing ods-results)"
---

Each time it's available, filter with the ID! and avoid labels or names!
Specially for geographical division (City names, States etc...)

This resource showcase `ods-results` as the source of ods-select but most of all [Opendatasoft geo referentials](https://data.opendatasoft.com/explore/?refine.publisher=Opendatasoft&refine.theme=Geographical+referentials) that always propose codes and labels for each division.

`ods-results` [documentation](https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsResults).

> **IMPORTANT:** In the `lander` context, an optional parameter `fields` is set to limit the size of the results. It improves DRASTICALLY the performance to avoid manipulating big geo shapes in geo datasets. We STRONGLY advise to keep this parameter and list only the required fields (ie. the "label field" and the "value field" of your ods-select) 