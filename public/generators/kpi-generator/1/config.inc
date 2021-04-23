     ng-init="
      kpis = [
            {
                'title':'vaccine doses in France',

                'dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',

                'aggregation_function':'SUM',
                'aggregation_expression':'dose_number',

                'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement/custom/',
                'image_url':'https://ichef.bbci.co.uk/news/640/cpsprodpb/B002/production/_115785054_c1ada70a-19f7-491b-b9f4-fd577d1ab022.jpg',

                'compare_mode':'date',
                'compare_strategie':'progression',

                'compare_date_strategie':'SM/SM-1',
                'get_date_from':'data',
                'date_field_id':'date',

                'valref_dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
                'valref_aggregation_function':'SUM',
                'valref_aggregation_expression':'dose_number',
                'valref_aggregation_unit':'%',

                'valref_prefix':'Against',
                'valref_suffix':'for the last period'
            },
            {
                    'title':'positive tests ',

                    'dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',

                    'aggregation_function':'SUM',
                    'aggregation_expression':'nb_pos',

                    'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france/custom/',
                    'image_url':'https://images.midilibre.fr/api/v1/images/view/5ef0c06cd286c23e66521344/full/image.jpg?v=1',

                    'compare_mode':'date',
                    'compare_strategie':'progression',
                    'higher':'isworse',
                    'compare_date_strategie':'SM/SM-1',
                    'get_date_from':'data',
                    'date_field_id':'date',

                    'valref_dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',

                    'valref_aggregation_function':'SUM',
                    'valref_aggregation_expression':'nb_pos',
                    'valref_aggregation_unit':'%',
                    'valref_prefix':'Against',
                    'valref_suffix':''
                }
        ];

      itemsPerRowDesktop = 3;
      itemsPerRowTablet = 2;

      dateFormat = { 'prefix': 'from ', 'infix': ' to ', 'suffix': '' };

      DO_NOT_MODIFY_BELOW;

      activecategory = 'metakpicompare';
      values = { 'popin': false };