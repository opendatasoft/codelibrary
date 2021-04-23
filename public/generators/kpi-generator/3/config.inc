     ng-init="
      kpis = [
    {
        'title':'patients in intensive care on',

        'dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',

        'aggregation_function':'SUM',
        'aggregation_expression':'day_intcare_new',

        'link_label':'See data in a pop in',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france/custom/',
        'link_mode':'popin',
        'image_url':'https://images.ladepeche.fr/api/v1/images/view/5f980b95d286c24d8323d394/large/image.jpg?v=4',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'compare_date_strategie':'FM/FM-1',
        'higher':'isworse',
        'get_date_from':'now',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'day_intcare_new',
        'valref_aggregation_unit':'%',
        'valref_prefix':'They were',
        'valref_suffix':'on the last period',

        'flip_additional_description':'Know more about intensive care recovery',
        'flip_hint':'Know more',
        'flip_additional_link':'https://www.yourcovidrecovery.nhs.uk/what-is-covid-19/after-a-stay-on-icu/',
        'flip_additional_link_label':'yourcovidrecovery.nhs.uk'
    }
];

      itemsPerRowDesktop = 3;
      itemsPerRowTablet = 2;

      dateFormat = { 'prefix': 'from ', 'infix': ' to ', 'suffix': '' };

      DO_NOT_MODIFY_BELOW;

      activecategory = 'metakpicompare';
      values = { 'popin': false };