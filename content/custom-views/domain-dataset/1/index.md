---
title: "Domain dataset overview"
date: 2021-04-19
domainid: "userclub"
datasetid: "domaindatasets"
---

This custom view will help you create an overview of all the datasets on your domain. See the [user guide](https://help.opendatasoft.com/platform/en/publishing_data/01_creating_a_dataset/connectors/dataset_of_datasets.html) to set up this special dataset.

For this view to properly function, you need to activate these options on the extractor:

- Statistics
- Private datasets
- Staged datasets

You need to set up the following fields as facets:

- Dataset ID
- Themes (multivalued by `;`)
- License
- Publisher
- Visibility
- Publishing Properties

You also need to set up a _Replace text_ processor with the field _Publishing Properties_ and new value set to _"manual"_:

![processor setup](processor.png)

See this resource live [here](https://userclub.opendatasoft.com/explore/dataset/domaindatasets/custom/?sort=modified). (Note:
we made this page public for the sake of example, but it is most likely a private view).
