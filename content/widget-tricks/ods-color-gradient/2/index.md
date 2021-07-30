---
title: "ods-color-gradient: Power exponent"
date: 2021-07-30T15:45:20+02:00
---

The power exponent is used to create a power based scale. 
The transform applied to value is of the type `y = x^k` where `k`, the exponent, can be any real number.

- For `k = 0.3` : it approximates log scale.
- For `k = 1` : it is a linear scale.
- For `k >= 2` : it approximates square scale.

`ods-color-gradient-pow-exponent` optional parameter defines the scale. If not defined, it will be set to 1 that correspond to a linear scale.  