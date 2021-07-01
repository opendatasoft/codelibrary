     ng-init="domain = 'discovery.opendatasoft.com';
                datasetid = 'oeuvres-de-johannes-vermeer';

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
