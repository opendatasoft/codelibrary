---
title: "Date : progression between 2 periods"
date: 2021-04-20T00:05:01+02:00
---

For date period comparison, additional parameters are required such as :

- `compare_date_strategie`: If compare mode is date, select the strategy to get the period of time for the value and reference value. It can be `RM/RM-1`, `RM/RM-12`, `FM/FM-1`, `FM/FM-12`, `SM/SM-1`, `SM/SM-12`, `RY/RY-1`, `FY/FY-1`, `SY/SY-1`
  
**1st letter:** 
- R = running
- S = sliding
- F = full
  
**2nd letter:**
- M = month
- Y = year

**Digit** is -1 (for previous) or -12 for last 12th month (ie last year).

- `get_date_from`: can be `data` to take the last date of the dataset, or `now` to take the day of the user browser  
- `date_field_id`: the date field id

For `compare_strategie` = `progression` it's also important to set if a positive progression is good or not 

- `higher`: can be `isbetter` or `isworse` 