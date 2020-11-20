---
title: "ods-select - 1"
---

## Fed by a static, manually declared list

`ods-select` accept any kind of source as long as it's a `json array`. It can be an array of strings, but also an array of object and ods-select `label-modifier` and `value-modifier` can be used to specify which key in the array item to use for, respectively the label and the field value. 