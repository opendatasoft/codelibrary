     ng-init="domain = 'parisdata.opendatasoft.com';
                datasetid = 'que-faire-a-paris-';

                sort = '-date_start';

                filters = [
                {'id':'category','multiple':true},
                {'id':'tags','multiple':true},
                {'id':'access_type','multiple':false},
                {'id':'price_type','multiple':false}
                ];
                fieldDate = 'date_start';
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';
                fieldDefaultRangeStartsNow = false;

                view = 'cards';
                fieldsList = [
                                  {'field':'address_name'},
                                  {'field':'address_street'},
                                  {'field':'address_city'},
                                  {'field':'conditionversement'},
                                  {'field':'category'},
                                  {'field':'date_start','format':'date'},
                                  {'field':'date_end','format':'date'}
                              ];
                fieldLink = 'url';
                fieldLinkLabel = 'Plus d\'informations';

                cardTitle = 'title';
                fieldPhoto = 'cover';
                imagePosition = 'top';
                itemsPerRow = '2';

                kpis = [{
                'title': 'Nombre d\'activités',
                'function': 'COUNT'
                }
                ];
