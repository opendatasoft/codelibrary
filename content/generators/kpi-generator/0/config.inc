     ng-init="
      kpis = [
    {
        'title':'Pfizer doses',

        'dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'dataset_refine_key': 'vaccine_type',
        'dataset_refine_value': 'Pfizer',

        'aggregation_function':'SUM',
        'aggregation_expression':'dose_number',

        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement/custom/',
        'image_url':'https://img.huffingtonpost.com/asset/602fff2626000025036bcaf3.jpg?ops=scalefit_630_noupscale',

        'compare_mode':'numeric',
        'compare_strategie':'diff',

        'valref_dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'dose_number',
        'valref_aggregation_unit':'%',
        'valref_prefix':'of all doses.',
        'valref_suffix':'doses in total.'
    }
];

      itemsPerRowDesktop = 3;
      itemsPerRowTablet = 2;

      dateFormat = { 'prefix': 'from ', 'infix': ' to ', 'suffix': '' };

      DO_NOT_MODIFY_BELOW;

      activecategory = 'metakpicompare';
      values = { 'popin': false };