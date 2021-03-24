     ng-init="domain = 'userclub.opendatasoft.com';
                              datasetid = 'deliberations-du-conseil-municipal-dissy-les-moulineaux';

                filters = [
                {'id':'mandature','multiple':true},
                {'id':'matiere','multiple':true},
                {'id':'objet','multiple':false},
                {'id':'vote','multiple':false}
                ];
                fieldDate = '';
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';
                fieldDefaultRangeStartsNow = true;

                view = 'table';
                fieldsList = ['objet','matiere','vote','ndeg_deliberation'];
                fieldLink = 'pdf_dcm';
                fieldLinkLabel = 'Consulter la délibération';

                kpis = [
                {
                'title': 'Nombre de délibérations référencées',
                'function': 'COUNT',
                'faicon': 'file-pdf-o'
                },
                {
                'title': 'Votes adoptés',
                'function': 'SUM',
                'expression': 'vote_adopte',
                'faicon': 'check-square-o'
                }
                ];

                itemsPerRow = '3';
