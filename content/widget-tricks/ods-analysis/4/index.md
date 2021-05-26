---
title: "Multiple aggregations at once"
height: 600
---

Instead of using several contexts filtered on several values of the same field, and then computing an **ods-aggregation** for each context. An **ods-analysis** if often the good choice to compute them all with only one API Call (it's way faster and more efficient).
