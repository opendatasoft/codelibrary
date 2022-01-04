     ng-init="domain = 'userclub.opendatasoft.com';
                datasetid = 'oeuvres-de-johannes-vermeer';

                sort = 'surface';

                filters = [
                {'id':'technique','multiple':true},
                {'id':'collection','multiple':true},
                {'id':'genre','multiple':true}
                ];
                fieldDate = '';
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';
                fieldDefaultRangeStartsNow = false;

                view = 'cards';
                fieldsList = ['titre','collection','genre','format','date'];
                fieldLink = 'wikipedia';
                fieldLinkLabel = 'Lire l\'article';

                cardTitle = 'titre';
                fieldPhoto = 'image';
                imagePosition = 'left';
                itemsPerRow = '2';

                mapView = false;
                mapPicto = '';
                mapPictoColor = '';

                kpis = [
                {
                'title': 'Taille moyenne',
                'select': 'avg(surface)',
                'precision': 2,
                'unit': 'm2',
                'faicon': 'square-o'
                },
                {
                'title': 'Nombre d\'oeuvre référencées',
                'select': 'count(*)'
                }
                ];

                sourceLinkLabel = 'Accéder aux données source';
                noResultMsg = 'Aucun résultat';