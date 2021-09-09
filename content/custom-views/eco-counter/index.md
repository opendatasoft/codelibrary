---
title: "Eco Counter"
date: 2021-06-30T11:18:25+02:00
tags: ["display"]
resources:
  - src: "*/"
    name: folder-:counter
---

This custom view is a plug and play add-on for data from the eco-counter extractor. It can be copy-pasted in your [visualization tab](https://help.opendatasoft.com/platform/en/publishing_data/07_configuring_visualizations/06_configuring_custom_view/custom.html#configuring-the-custom-view).

You will need to up set up two datasets (either via URL or file upload), with the following name and configuration:

### Eco-counter sites 
* name: `eco-counter-sites` *(if you change the name of this dataset, you have to change it in the code for eco-counter data custom view as well, in the tooltip section.)*
* source type: **eco-counter-sites**

For each picture:
* Split text
    - Field: `Photos`
    - Séparator: `/`
    - Output field : `photo1` (or photo2, photo3)
* Expression
    - `=(photo1 != ""?"[https://www.eco-visio.net/Photos/](https://www.eco-visio.net/Photos/)" & id & "/" & photo1:"")` (or photo2, photo3)
    - Output field : `urlphoto1` (or urlphoto2, urlphoto3)

{{< setup-images src="sites-processor-all.png,sites-processor-expression.png,sites-processor-split.png" caption="Sites processor" >}}

### Eco-counter data 
* name: `eco-counter-data` *(if you change the name of this dataset, you have to change it in the code for eco-counter sites custom view as well, in the tooltip section.)*
* source type: _eco-counter_, _hour_ as _timestep_ in the options.
* **Join** processor with the _eco-counter-sites_ dataset, `id` as local and remote key and `name` as return field.

{{< setup-images src="data-processor.png" caption="Data processor" >}}
