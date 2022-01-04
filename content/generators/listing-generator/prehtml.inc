<!-- V3 :
      - The listing generator is now fully compatible for both pages, custom views and embeds.
      - Add 'mapView' option to activate a map (in 'cards' view)
      - Add pagination module for 'table' view
      - Add infinite scroll for 'cards' view
      - Set a label parameter for the "access to source" link
    -->

<!-- V2.2 :
    - Add 'sort' param
    - Add an advanced mode for fieldsList
    Fields can now be a list of object, that provides the field id, the format, and some options.
    See the documentation for more details.
    - No icon displayed by default for KPIs
  -->
<!-- V2.1 :
    - Add ods-select and multiple choice option for filters
    - Add clear all filter button when one filter is applied
    - responsive display for filters and date button
    - KPI default value to 0 when no data/results to display
  -->
<!-- V2.0 :
  - add a date field that display a date range slider
  - download link knows support files hosted on ODS
  - dynamic title / descriptiton / access source link from the context
-->

<!-- IMPORTANT ******** MUST READ !

    In the following settings declaration :

    A common error is forget to escape (protect) apostrophe with a leading backslash
    As apostrophes are used to declare values of variable it will break the settings

    Ex:
    wrongVariable = 'I'll be freed from apostrophes'
    correctVariable = 'I\'ll be freed from apostrophes'
-->

<!-- ### GENERAL SETTINGS ### -->
<!-- domain : (Domain URL) : Must contain the URL of the domain where the dataset is published.
       ex: 'discovery.opendatasoft.com'
      -->
<!-- datasetid (Dataset ID) : Must contain the ID of the dataset
       ex: 'oeuvres-de-johannes-vermeer'
      -->
<!-- sort : a sort parameter
       ex: '-date'
      -->

<!-- ### FILTERS SETTINGS ### -->
<!-- filters (Filters) : List of object that contains the IDs to generate the filters pannel.
      and multiple true or false to allow the user to select multiple values in the filter.
      NB: the field must be a facet in the dataset
      NB: alphanumerical sort is applied in the filter view
       ex: [
                {'id':'filterid','multiple':true},
                {'id':'filterid2','multiple':false}
           ]
      -->
<!-- resetFiltersButton (boolean) : add a reset filters button after filters block -->
<!-- resetFiltersButtonLabel (Label of the button) : test to display when a filter is selected
          ex: 'Clear all filters'
      -->

<!-- ### DATE SETTINGS -->
<!-- fieldDate : a date type field to display a date-range-slider -->
<!-- resetFiltersButton : reset date period button true/false -->
<!-- fieldDefaultRangeStartsNow : false make the default range selection start from the first date, and end to the last date, if set to true, the range starts from now, to the last date -->

<!-- ### LIST VIEW SETTINGS ### -->
<!-- view (List view type) : Type of the view to list results, can be 'table' or 'cards'
      -->
<!-- If 'cards' :
           noResultMsg : the message to display if no results
      -->

<!-- fieldsList (List configuration) : Set the list of fields
      Simple mode :
          Can be an array of field IDs
          ex: ['title','category','genre','date']

      Advanced mode :
          Can be an array of object.
          Each object describe the field format and provide optional options.
          field: the ID of te field
          format: is optional, can be 'date' or 'number'
          options: is optional,
              - it can have a 'precision' and 'unit' for 'number' format
              - it can have a 'dateFormat' for 'date' format
           ex: [
                    {'field':'address'},
                    {'field':'city'},
                    {'field':'price', 'format':'number', 'options': {'precision':1, 'unit':'$'}},
                    {'field':'date_start','format':'date'},
                    {'field':'date_end','format':'date', 'options': {'dateFormat':'longDate'}}
               ];
      -->
<!-- fieldLink (Link to an external resource) : If available, the field ID of some external resource as a web URL
       ex: 'link'
      -->
<!-- fieldLinkLabel (The label of that link) : Label of the link button
       ex: 'Read more here'
      -->

<!-- Specific to the 'cards' view mode, set a title and a background image if any -->
<!-- cardTitle (Title of the card) : Field id of the card title
       ex: 'title'
  -->
<!-- fieldPhoto (Field id of the image field if any)
       ex: 'image'
  -->
<!-- imagePosition (Image position) : Image position in the card, can be 'top' or 'left'
       ex: 'left'
  -->
<!-- itemsPerRow (Number of columns) : Modify the columns layout. The division by 12 must be a whole number, ie it can be 1, 2, 3, 4, 6 or 12. But 6 and 12 will generaly be two norrow
       ex: '3'
  -->

<!-- ### KPIS SETTINGS ### -->
<!-- KPIS settings is a list of object that describes each KPI
       List of available keys are :
      - title (Name of the KPI) ex: 'Average # of citizens'
      - select (API V2 select containing the calculation to perform) ex: 'sum(population)' or 'count(*)'
      - precision (Decimal precision of the KPI) ex: 2
      - unit (KPI unit) ex: 'citizens'
      - faicon (FontAwesome icon id) ex: 'square-o'

      'title', 'select' are MANDATORY
      others are optionnal

      Please see the documentation for more information
      https://help.opendatasoft.com/apis/ods-explore-v2/#section/Opendatasoft-Query-Language-(ODSQL)

      Please see all available icons here
      https://fontawesome.com/v4.7.0/icons/

      ex:
      kpis = [
                {
                    'title': 'Taille moyenne',
                    'function': 'AVG',
                    'expression': 'surface',
                    'precision': 2,
                    'unit': 'm2',
                    'faicon': 'square-o'
                },
                {
                    'title': 'Nombre d\'oeuvre référencées',
                    'function': 'COUNT'
                }
             ];

      -->

<!-- sourceLinkLabel : the label of the 'access to source' link -->

<!-- DO NOT MODIFY -->
<!-- Technical fields, do not modify please -->

<!-- SETTINGS START HERE -->
<div class="container"