
        ng-init="domain = 'opendata.hauts-de-seine.fr';
                datasetid = 'archives-de-la-planete-paris';

                filters = [
                {'id':'operateur','multiple':true},
                {'id':'themes','multiple':true},
                {'id':'lieu_retraite','multiple':true}
                ];
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                fieldsList = ['sujets', 'procede_technique', 'date_de_prise_de_vue'];
                fieldLink = 'photo';
                fieldLinkLabel = 'Télécharger l\'image';

                fieldImage = 'photo';
                imagePosition = 'left';

                resultTitle = 'legende_revisee';
                itemsPerRow = '2';

                kpis = [
                {
                'title': 'Nombre d\'œuvres référencées',
                'function': 'COUNT',
                'faicon': 'camera-retro'
                }
                ];

                headerBackgroundImage = 'https://opendata.hauts-de-seine.fr/explore/dataset/archives-de-la-planete/files/ef4d61b0016cb909b5081622a0abecfe/download/';
                subtitle = 'Autochromes dans la capitale, par les opérateurs d\'Albert Kahn';

                mapPictoColor = '#EC643C';
                mapPicto = 'ods-photo';
