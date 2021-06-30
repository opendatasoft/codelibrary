---
title: "Eco Counter"
date: 2021-06-30T11:18:25+02:00
tags: ["display"]
resources:
  - src: "*/"
    name: folder-:counter
---

This custom view is a plug and play add-on for data from the eco-counter extractor. You will need to up set up two datasets (either via URL or file upload), with the following configuration:

- Eco-counter sites: with **eco-counter-sites** as source type (which will do automatically sort and format everything).
- Eco-counter data: with **eco-counter** as source type and a join processor with the _eco-counter-sites_ dataset with `id` as local and remote key and `name` as return field.

The view can then be copy-pasted in your visualization tab.
