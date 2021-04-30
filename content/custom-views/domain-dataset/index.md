---
title: "Domain Datasets"
date: 2021-04-19T14:57:49+02:00
description: "Overview of all datasets of the domain"
resources:
  - src: "*/"
    title: "Section #:counter"
---

This custom view will help you create an overview of all the datasets on your domain. See the [user guide](https://help.opendatasoft.com/platform/fr/publishing_data/04_configuring_a_source/connectors/dataset_of_datasets.html#creation) to set up this special dataset.

For this view to properly function, you need to set up the following fields as facets:

- Dataset ID
- Publishing Properties
- Themes (multivalued)
- Publisher
- License
- Visibility

You also need to set up a _Replace text_ processor with the field _Publishing Properties_ and new value set to _"manual"_:
![processor setup](processor.png)
