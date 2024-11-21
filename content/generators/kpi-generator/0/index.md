---
title: "Numeric, difference between 2 values"
description: "Compare 2 numerical values"
date: 2021-06-08T00:05:01+02:00
---

**The main KPI settings**

- `title` : name of the KPI, below the value

Dataset setting :
- `dataset_id`

Dataset filter (simple way, with 1 refine) :
- `dataset_refine_key`: a facet field,
- `dataset_refine_value`: a value, 
  
Dataset filters (advanced way, with 1 object) :
- `dataset_advanced_refine_parameters` : an object, ex: `{'q':'some text query', 'refine.field':'value'}`

Value settings, to setup the aggregation :
- `aggregation_function`: can be SUM, AVG, MIN, MAX, STD, COUNT
- `aggregation_expression`: a numerical field id

- `link`: a link to redirect the user
- `image_url`: the url of the item image

**Then, the reference value, and how to compare it**

- `compare_mode`: can be `date` or `numeric`
- `compare_strategie`: can be `none`, `diff` or `progression`

 

- `valref_dataset_id`
- `valref_dataset_refine_key`
- `valref_dataset_refine_value`
- `valref_dataset_advanced_refine_parameters`
- `valref_aggregation_function`
- `valref_aggregation_expression`
- `valref_aggregation_unit`

- `valref_prefix`: a sentence to add before the reference value
- `valref_suffix`: a sentence to add after the reference value

[Visual documentation with 1 example here](https://docs.google.com/presentation/d/1pG1Q2RcP20Aep_6mMK7aeG184_mzczXAm7oxAu_eMz8/edit#slide=id.p)