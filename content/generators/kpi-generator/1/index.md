---
title: "KPI Page, auto generated"
date: 2021-04-20T00:05:01+02:00
---

[Visual documentation with 1 example here](https://docs.google.com/presentation/d/1pG1Q2RcP20Aep_6mMK7aeG184_mzczXAm7oxAu_eMz8/edit#slide=id.p)

Available parameters and values for one item of the `kpis` list :  

- ```category` : Regroup the item in the specified category,
- `title` : name of the KPI, below the value

Dataset setting :
- `dataset_id`  

Optional refine can be a couple of key and value :
- `dataset_refine_key`: a field id
- `dataset_refine_value`: the refine value

or can be the entire context parameter :
- `dataset_advanced_refine_parameters`:

Value settings, to setup the aggregation :
- `aggregation_precision`: number of digits for decimals
- `aggregation_function`: can be SUM, AVG, MIN, MAX, STD, COUNT
- `aggregation_unit`: displayed after the value (same font)
- `aggregation_expression`: a numerical field id

 

- `link_label`: label of the link button
- `link`: a link to redirect the user
- `link_mode`: can be empty for standard links, or `popin` to open a modal
- `image_url`: the url of the item image

 

- `compare_mode`: can be `numeric` or `date`
- `compare_strategie`: can be `none`, `diff` or `progression`
- `higher`: can be `isbetter` to orientate the arrow and color

 

For `date` `compare_mode` :
- `compare_date_strategie`: can be `RM/RM-1`, `RM/RM-12`, `FM/FM-1`, `FM/FM-12`, `SM/SM-1`, `SM/SM-12`, `RY/RY-1`, `FY/FY-1`, `SY/SY-1`
- `date_selection_strategie`: how the last date is obtained, can be `ods-analysis`, `ods-results` or `ods-datetime`
- `date_field_id`: a date field id (day precision only FTM)

 

Reference value, for comparison :
Dataset and aggregation settings:
- `valref_dataset_id`
- `valref_dataset_refine_key`
- `valref_dataset_refine_value`
- `valref_dataset_advanced_refine_parameters`

 
- `valref_aggregation_function`
- `valref_aggregation_expression`
- `valref_aggregation_precision`
- `valref_aggregation_unit`

 
- `valref_suffix`: an additional text, close to the value

For additional information, you can switch the kpi card into a flip kpi card :
- `flip_additional_description`: displayed on the back face
- `flip_hint`: Displayed on the front face
- `flip_additional_link`: an additional link
- `flip_additional_link_label`: and it's optional link button label