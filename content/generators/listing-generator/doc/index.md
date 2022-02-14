---
title: Listing Generator documentation
date: "2022-02-10T00:00:00+01:00"
description: Complete list of options for the listing generator resource 
tags: ["display", "navigation", "list", "map", "aggregation"]
nocode: true
---

Welcome to the Listing Generator documentation !
Find the [code and live examples above](#automated-listing-visualization).

### Before start, important read

The listing generator is an HTML template powered by ods-widgets library from Opendatasoft. ods-widgets library relies on AngularJs and therefore propose directives and expressions to operate dynamic behavior into your pages.  
Settings set within the page. You'll therefore need to pay attention to the following section to avoid input mistakes.

#### First, a minimalist example

A simple page containing a variable declaration into an ng-init directive:

```html
<div ng-init="title = 'Any text here...';
              anotherVar = 'other value';">
  <h1>
    {{ title }} <!-- output: Any text here... -->
  </h1>
</div> 
```

- `title` is a variable, and `Any text here...` its value

The value is then between quotes `'`.

> A common error is omitting to escape (protect) apostrophes with a leading backslash (ie `\'`).  
Apostrophes are used to declare keys and values in object, and therefore are reserved characters. This is the reason why they MUST be escaped.


```javascript
wrongVariable = 'I'll be freed from apostrophes'; // This leads to an error !!!
```
  
```javascript
correctVariable = 'I\'ll be freed from apostrophes'; // Ok !
```

## General settings

#### `domain`

Domain URL (string) : Must contain the URL of the domain where the dataset is published.
```
domain = 'userclub.opendatasoft.com';
```
        
#### `datasetid`

Dataset ID (string) : Must contain the ID of the dataset
```
datasetid = 'oeuvres-de-johannes-vermeer';
```

#### `sort`

Sort (string) : a sort parameter
```
sort = '-date';
```

**Note:** The field must be sortable (numeric,date,facet or sortable text field)

## Filters settings

#### `filters`

List of filter configurations to generate the filters panel.
Parameters are :
- id (string) : the ID of the field
- multiple (boolean) : true or false, to allow the user to select multiple values in the filter
- label (string) : a custom placeholder instead of the field label

**Note :** The field must be a facet in the dataset  
**Note :** Alphanumerical sort is applied in the filter view

```
filters = [
              {'id':'filterid','multiple':true},
              {'id':'filterid2','multiple':false,'label':'ID of the filter'}
           ];
```

#### `resetFiltersButton`

resetFiltersButton (boolean) : true or false, add a reset filters button after filters block -->
```
resetFiltersButton = true;
```

#### `resetFiltersButtonLabel`

resetFiltersButtonLabel (string) : label of the reset filters button
```
resetFiltersButtonLabel = 'Clear all filters';
```

## Date settings

#### `fieldDate`

fieldDate (string) : a date field to display a date-range-slider
```
fieldDate = 'date';
```

#### `resetFiltersButton`
resetFiltersButton (boolean) : true or false, display a button to reset the date period selection
```
resetFiltersButton = true;
```

#### `fieldDefaultRangeStartsNow`
fieldDefaultRangeStartsNow (boolean) : 
- false : set the date range based on the data, ie. start from the first date, and end to the last date 
- true : the range starts from now (the calendar day), to the last date

```
fieldDefaultRangeStartsNow = false;
```

## List view settings
  
#### `view`
view (string) : Type of the view to list results, can be `table` or `cards`
```
view = 'cards';
```  

#### `noResultMsg` (only available if `view` is set to `cards`)
noResultMsg (string) : the message to display if no results

```
noResultMsg = 'No more results.';
```

#### `fieldsList`

fieldsList (list) : Set the list of fields
 
##### Simple mode : can be an array of field IDs
```
fieldsList = ['title','category','genre','date'];
```

##### Advanced mode : can be an array of object.
  
  Each object describes the field format and provide optional options.
  - `field` (string) : mandatory, the ID of te field
  - `format` (string) : optional, can be 'date' or 'number'
  - `options` (string) : optional, format options
    - for `number` format :
      - `precision` (string) : set the number of digit for decimals
      - `unit` (string) : set an unit after the value
    - for `date` format : 
      - `dateFormat` (string) : date format, according to [Angularjs date filter syntax](https://www.w3schools.com/angular/ng_filter_date.asp)
    - label (string) : optional, define your own label for this field.
      - if not set : use the default label from the dataset
      - if set to a string, use this string as label
      - if set to an empty string `''`, remove the field label (for `cards` view only).

```
fieldsList = [
                {'field':'address'},
                {'field':'city'},
                {'field':'price', 'format':'number', 'options': {'precision':1, 'unit':'$'}},
                {'field':'date_start','format':'date'},
                {'field':'date_end','format':'date', 'options': {'dateFormat':'longDate'}}
              ];
```
            
#### `fieldLink`

fieldLink (string) : the field ID of external resource as a web URL
```
link = 'urlfield';
```

#### `fieldLinkLabel`

fieldLinkLabel (string) : Label of the external resource link
```
fieldLinkLabel = 'Read more here';
```

#### `cardTitle` (only available if `view` is set to `cards`)
cardTitle (string) : id of the field used as a title of the card
```
cardTitle = 'title';
```

#### `fieldPhoto` (only available if `view` is set to `cards`)
fieldPhoto (string) : (Field id of the image field if any)
```
fieldPhoto = 'image';
````

#### `imagePosition` (only available if `view` is set to `cards`)
imagePosition (string) : (Image position) : Image position in the card, can be 'top' or 'left'
```
imagePosition = 'left';
```

#### `itemsPerRow`
itemsPerRow (string) : number of columns in the cards and KPI layout, must be a 12 multiple (1, 2, 3, 4, 6 or 12).
```
itemsPerRow = '3';
```

## KPI Settings
  
KPI settings is a list of object that describes each KPI.  
Available options are :
- `title` (string) : mandatory, name of the KPI, ex: 'City population'
- `select` (string) : mandatory, API V2 select, containing the calculation to perform, ex: 'sum(population)' or 'count(*)'
- `precision` (string) : optional, decimal precision of the KPI, ex: 2
- `unit` (string) : optional, KPI unit, ex: 'citizens'
- `faicon` (stirng) : optional, FontAwesome icon id, ex: 'square-o' (omit the fa- prefix)

[Please see the documentation for more information regarding the select](https://help.opendatasoft.com/apis/ods-explore-v2/#section/Opendatasoft-Query-Language-(ODSQL))

[Please see all available Fontawesome icons here](https://fontawesome.com/v4.7.0/icons/)

```
kpis = [
            {
                'title': 'Taille moyenne',
                'select': 'avg(surface),
                'precision': 2,
                'unit': 'm2',
                'faicon': 'square-o'
            },
            {
                'title': 'Nombre d\'oeuvre référencées',
                'select': 'count(*)'
            }
         ];
```

#### `sourceLinkLabel`

sourceLinkLabel (string) : the label of the 'access to source' link

```
sourceLinkLabel = 'Direct access to the data';
```