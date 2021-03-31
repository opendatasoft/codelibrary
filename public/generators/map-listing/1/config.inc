
     ng-init="domain = 'mesr.opendatasoft.com';
                datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

                filters = [
                {'id':'type_d_etablissement','multiple':true},
                {'id':'secteur_d_etablissement','multiple':false},
                {'id':'dep_nom','multiple':true}
                ];
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                fieldsList = ['adresse_uai', 'dep_nom', 'numero_telephone_uai'];
                fieldLink = 'url';
                fieldLinkLabel = 'Visiter le site web';

                fieldImage = '';
                imagePosition = 'left';

                resultTitle = 'uo_lib';
                itemsPerRow = '2';

                kpis = [
                {
                'title': 'Nombre d\'établissements',
                'function': 'COUNT',
                'faicon': 'graduation-cap'
                }
                ];

                headerBackgroundImage = 'https://images.unsplash.com/photo-1541890289-b86df5bafd81?ixlib=rb-1.2.1&auto=format&fit=crop&w=2828&q=80';
                subtitle = 'Établissements près de chez vous';

                mapPictoColor = '';
                mapPicto = '';
