     ng-init="
      kpis = [
    {
        'title':'habitants in 2012',

        'dataset_id':'resume-statistique-communes-departements-et-regions-france-2012-2013-2014',

        'aggregation_function':'SUM',
        'aggregation_expression':'population_en_2012',

        'link':'https://userclub.opendatasoft.com/explore/dataset/resume-statistique-communes-departements-et-regions-france-2012-2013-2014/analyze/?dataChart=eyJxdWVyaWVzIjpbeyJjb25maWciOnsiZGF0YXNldCI6InJlc3VtZS1zdGF0aXN0aXF1ZS1jb21tdW5lcy1kZXBhcnRlbWVudHMtZXQtcmVnaW9ucy1mcmFuY2UtMjAxMi0yMDEzLTIwMTQiLCJvcHRpb25zIjp7fX0sImNoYXJ0cyI6W3siYWxpZ25Nb250aCI6dHJ1ZSwidHlwZSI6ImNvbHVtbiIsImZ1bmMiOiJBVkciLCJ5QXhpcyI6InBvcHVsYXRpb25fZW5fMjAxMiIsInNjaWVudGlmaWNEaXNwbGF5Ijp0cnVlLCJjb2xvciI6IiMwMEM3QjEifSx7ImFsaWduTW9udGgiOnRydWUsInR5cGUiOiJjb2x1bW4iLCJmdW5jIjoiQVZHIiwieUF4aXMiOiJwb3B1bGF0aW9uX2VuXzIwMDciLCJzY2llbnRpZmljRGlzcGxheSI6dHJ1ZSwiY29sb3IiOiIjNTY1NjU2In1dLCJ4QXhpcyI6InJlZ2lvbiIsIm1heHBvaW50cyI6NTAsInNvcnQiOiJzZXJpZTEtMSJ9XSwidGltZXNjYWxlIjoiIiwiZGlzcGxheUxlZ2VuZCI6dHJ1ZSwiYWxpZ25Nb250aCI6dHJ1ZX0%3D',
        'image_url':'https://saint-didier-autrement.org/wp-content/uploads/2020/06/office_population.jpg',

        'compare_mode':'numeric',
        'compare_strategie':'progression',
        'higher':'isbetter',

        'valref_dataset_id':'resume-statistique-communes-departements-et-regions-france-2012-2013-2014',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'population_en_2007',
        'valref_aggregation_unit':'%',
        'valref_prefix':'compared to 2007. There were',
        'valref_suffix':'habitants.'
    },
    {
        'title':'habitants in Belgium',

        'dataset_id':'belgium-statistical-districts',

        'aggregation_function':'SUM',
        'aggregation_expression':'inhab',

        'link':'https://userclub.opendatasoft.com/explore/dataset/belgium-statistical-districts/analyze/?dataChart=eyJxdWVyaWVzIjpbeyJjb25maWciOnsiZGF0YXNldCI6ImJlbGdpdW0tc3RhdGlzdGljYWwtZGlzdHJpY3RzIiwib3B0aW9ucyI6e319LCJjaGFydHMiOlt7ImFsaWduTW9udGgiOnRydWUsInR5cGUiOiJjb2x1bW4iLCJmdW5jIjoiU1VNIiwieUF4aXMiOiJpbmhhYiIsInNjaWVudGlmaWNEaXNwbGF5Ijp0cnVlLCJjb2xvciI6IiMwMEM3QjEifV0sInhBeGlzIjoicmVnX2ZyIiwibWF4cG9pbnRzIjo1MCwic29ydCI6IiJ9XSwidGltZXNjYWxlIjoiIiwiZGlzcGxheUxlZ2VuZCI6dHJ1ZSwiYWxpZ25Nb250aCI6dHJ1ZX0%3D',
        'image_url':'https://saint-didier-autrement.org/wp-content/uploads/2020/06/office_population.jpg',

        'compare_mode':'numeric',
        'compare_strategie':'diff',

        'valref_dataset_id':'resume-statistique-communes-departements-et-regions-france-2012-2013-2014',

        'valref_aggregation_function':'SUM',
        'valref_aggregation_expression':'population_en_2012',
        'valref_aggregation_unit':'%',
        'valref_prefix':'compared to ',
        'valref_suffix':'habitants in France'
    }
];

      itemsPerRowDesktop = 3;
      itemsPerRowTablet = 2;

      dateFormat = { 'prefix': 'du ', 'infix': ' au ', 'suffix': '' };

      DO_NOT_MODIFY_BELOW;

      activecategory = 'metakpicompare';
      values = { 'popin': false };