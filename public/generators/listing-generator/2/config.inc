     ng-init="domain = 'parisdata.opendatasoft.com';
                datasetid = 'que-faire-a-paris-';

                filters = [
                {'id':'category','multiple':true},
                {'id':'tags','multiple':true},
                {'id':'access_type','multiple':false},
                {'id':'price_type','multiple':false}
                ];
                fieldDate = 'date_start';
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';
                fieldDefaultRangeStartsNow = true;

                view = 'cards';
                fieldsList = ['address_name','address_street','address_city','category'];
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
