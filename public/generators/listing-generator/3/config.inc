     ng-init="domain = 'userclub.opendatasoft.com';
                      datasetid = 'deliberations-du-conseil-municipal-dissy-les-moulineaux';

              sort = '';

              filters = [
              {'id':'mandature','multiple':true},
              {'id':'matiere','multiple':true},
              {'id':'objet','multiple':false},
              {'id':'vote','multiple':false}
              ];
              fieldDate = '';
              resetFiltersButton = true;
              resetFiltersButtonLabel = 'Supprimer tous les filtres';
              fieldDefaultRangeStartsNow = false;

              view = 'table';
              fieldsList = ['objet','matiere','vote','ndeg_deliberation'];
              fieldLink = 'pdf_dcm';
              fieldLinkLabel = 'Consulter la délibération';

              mapView = false;
              mapPicto = '';
              mapPictoColor = '';

              kpis = [
              {
              'title': 'Nombre de délibérations référencées',
              'select': 'count(*)',
              'faicon': 'file-pdf-o'
              },
              {
              'title': 'Votes adoptés',
              'select': 'sum(vote_adopte)',
              'faicon': 'check-square-o'
              }
              ];

              itemsPerRow = '3';

              sourceLinkLabel = 'Accéder aux données source';
              noResultMsg = 'Aucun résultat';
