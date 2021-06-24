     ng-init="  filters = [
              {'id':'language','multiple':true},
              {'id':'country','multiple':true},
              {'id':'purpose','multiple':true}
              ];
              fieldDate = '';
              resetFiltersButton = true;
              resetFiltersButtonLabel = 'Supprimer tous les filtres';
              fieldDefaultRangeStartsNow = true;

              view = 'cards';
              fieldsList = ['powered_by','description_en'];
              fieldLink = 'reference_url';
              fieldLinkLabel = 'See it live';

              cardTitle = 'name_of_the_initiative_en';
              fieldPhoto = '';
              imagePosition = 'left';
              itemsPerRow = '2';

              kpis = [
              {
              'title': 'Number of initiatives',
              'function': 'COUNT'
              }
              ];
