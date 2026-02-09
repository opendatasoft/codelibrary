     ng-init="domain = 'data.haute-garonne.fr';
              datasetid = 'datalocale-deliberation';

              sort = 'delib_date';

              filters = [
                {'id':'coll_nom','multiple':true,'label':'Nom de la collectivité'},
                {'id':'delib_matiere_nom','multiple':true,'label':'Nom de la matière de la délibération' },
              ];
              fieldDate = 'delib_date';
              resetFiltersButton = true;
              resetFiltersButtonLabel = 'Supprimer tous les filtres';
              fieldDefaultRangeStartsNow = false;

              view = 'cards';
              fieldsList = [
                {'field':'delib_objet', 'label': ''},
                {'field':'budget_nom', 'label': 'Type de budget'},
                {'field':'vote_pour', 'label': 'Nb de vote pour'},
                {'field':'vote_contre', 'label': 'Nb de vote contre'},
                {'field':'delib_date', 'label': 'Date de la délibération', 'format': 'date'}
              ];
              fieldLink = 'delib_url';
              fieldLinkLabel = 'Voir la délibération en PDF';

              cardTitle = 'delib_matiere_nom';
              fieldPhoto = '';
              imagePosition = 'left';
              itemsPerRow = '2';

              mapView = false;
              mapPicto = '';
              mapPictoColor = '';

              sourceLinkLabel = 'Accéder aux données source';
              noResultMsg = 'Aucun résultat';
