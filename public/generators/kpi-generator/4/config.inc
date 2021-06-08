     ng-init="
      kpis = [
    {
        'category':'Vaccins',
        'title':'doses de vaccins en France',

        'dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'dose_number',

        'link_label': 'Voir les données',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement/custom/',
        'link_mode':'popin',
        'image_url':'https://ichef.bbci.co.uk/news/640/cpsprodpb/B002/production/_115785054_c1ada70a-19f7-491b-b9f4-fd577d1ab022.jpg',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'higher':'isbetter',
        'compare_date_strategie':'SM/SM-1',
        'get_date_from':'data',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'dose_number',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'Soit ',
        'valref_suffix':'par rapport au mois précédent,'
    },
    {
        'category':'Vaccins',
        'title':'doses Pfizer produites',

        'dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'dataset_refine_key': 'vaccine_type',
        'dataset_refine_value': 'Pfizer',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'dose_number',

        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement/custom/',
        'image_url':'https://img.huffingtonpost.com/asset/602fff2626000025036bcaf3.jpg?ops=scalefit_630_noupscale',

        'compare_mode':'numeric',
        'compare_strategie':'diff',

        'valref_dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'dose_number',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'',
        'valref_suffix':'de la production totale',

        'flip_additional_description':'En savoir plus sur ce groupe pharmaceutique',
        'flip_hint':'En savoir +',
        'flip_additional_link':'https://www.pfizer.com/',
        'flip_additional_link_label':'pfizer.com'
    },
    {
        'category':'Vaccins',
        'title':'doses AstraZeneca produites',

        'dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'dataset_refine_key': 'vaccine_type',
        'dataset_refine_value': 'AstraZeneca',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'dose_number',

        'link_label': 'Voir les données',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement/custom/',
        'link_mode':'popin',
        'image_url':'https://s2.qwant.com/thumbr/0x0/f/d/14d9e875694919510ae95fbe38e9098a54f69b7eade14cbb9757506f02e878/Trombose-1-420x280_c.png?u=https%3A%2F%2Falcidesvogel.com.br%2Fwp-content%2Fuploads%2F2016%2F11%2FTrombose-1-420x280_c.png&q=0&b=1&p=0&a=0',

        'compare_mode':'numeric',
        'compare_strategie':'diff',

        'valref_dataset_id':'donnees-relatives-aux-stocks-des-doses-de-vaccins-contre-la-covid-19-departement',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'dose_number',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'',
        'valref_suffix':'de la production totale',

        'flip_additional_description':'En savoir plus sur ce groupe pharmaceutique',
        'flip_additional_link':'https://www.pfizer.com/'
    },

    {
        'category':'Tests',
        'title':'tests effectués sur la période',

        'dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'nb_tests',

        'link_label': 'Voir les données',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france/custom/',
        'link_mode':'popin',
        'image_url':'https://maroc-diplomatique.net/wp-content/uploads/2020/07/tests-PCR.jpg',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'compare_date_strategie':'SM/SM-1',
        'get_date_from':'data',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'nb_tests',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'Soit ',
        'valref_suffix':' par rapport au mois précédent'
    },
    {
        'category':'Tests',
        'title':'tests positifs détectés sur la période',

        'dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'nb_pos',

        'link_label': 'Voir les données',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france/custom/',
        'link_mode':'popin',
        'image_url':'https://images.midilibre.fr/api/v1/images/view/5ef0c06cd286c23e66521344/full/image.jpg?v=1',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'higher':'isworse',
        'compare_date_strategie':'SM/SM-1',
        'get_date_from':'data',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france\n',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'nb_pos',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'Soit ',
        'valref_suffix':' par rapport au mois précédent'
    },
    {
        'category':'Tests',
        'title':'tests positifs depuis le début de l\'année',

        'dataset_id':'donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'',
        'aggregation_expression':'nb_pos',

        'link_label': 'Voir les données',
        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france/custom/',
        'link_mode':'popin',
        'image_url':'https://static.actu.fr/uploads/2020/05/centre-test-covid-19-coronavirus-population-chu-lille.jpeg',

        'compare_mode':'date',
        'compare_strategie':'none',
        'compare_date_strategie':'RY/RY-1',
        'get_date_from':'data',
        'date_field_id':'date'
    },

    {
        'category':'Hôpitaux',
        'title':'Nombre de décès sur la période',

        'dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'décès',
        'aggregation_expression':'day_death_new',

        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france/custom/',
        'link_mode':'popin',
        'image_url':'https://photos.lci.fr/images/613/344/deces-covid-hopital-ef1304-1@1x.jpeg',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'compare_date_strategie':'SM/SM-1',
        'get_date_from':'data',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'day_death_new',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'',
        'valref_suffix':' par rapport au mois précédent'
    },
    {
        'category':'Hôpitaux',
        'title':'Nombre d\'admis en réanimation',

        'dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',
        'dataset_refine_key': '',
        'dataset_refine_value': '',
        'dataset_advanced_refine_parameters':'',

        'aggregation_precision':0,
        'aggregation_function':'SUM',
        'aggregation_unit':'admis',
        'aggregation_expression':'day_intcare_new',

        'link':'https://userclub.opendatasoft.com/explore/dataset/donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france/custom/',
        'link_mode':'popin',
        'image_url':'https://images.ladepeche.fr/api/v1/images/view/5f980b95d286c24d8323d394/large/image.jpg?v=4',

        'compare_mode':'date',
        'compare_strategie':'progression',
        'compare_date_strategie':'SM/SM-1',
        'get_date_from':'data',
        'date_field_id':'date',

        'valref_dataset_id':'donnees-hospitalieres-relatives-a-lepidemie-de-covid-19-en-france',
        'valref_dataset_refine_key': '',
        'valref_dataset_refine_value': '',
        'valref_dataset_advanced_refine_parameters':'',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'day_intcare_new',
        'valref_aggregation_precision':0,
        'valref_aggregation_unit':'%',
        'valref_prefix':'',
        'valref_suffix':' par rapport au mois précédent'
    }
];

      itemsPerRowDesktop = 3;
      itemsPerRowTablet = 2;

      dateFormat = { 'prefix': 'du ', 'infix': ' au ', 'suffix': '' };

      DO_NOT_MODIFY_BELOW;

      activecategory = 'metakpicompare';
      values = { 'popin': false };