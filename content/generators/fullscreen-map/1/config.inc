<!-- SETTINGS START HERE -->
<div ng-init="domain = 'mesr.opendatasoft.com';
                datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

                title = 'Établissements près de chez vous';

                filters = [
                {'id':'type_d_etablissement','multiple':true},
                {'id':'secteur_d_etablissement','multiple':true},
                {'id':'dep_nom','multiple':true}
                ];
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                resultTitle = 'uo_lib';
                fieldsList = ['adresse_uai', 'dep_nom', 'numero_telephone_uai'];
                fieldLink = 'url';
                fieldLinkLabel = 'Visiter le site web';
                mapLinkLabel = 'Voir sur la carte';

                viewListButtonText = 'Voir la liste';
                viewDetailsButtonText = 'Voir les détails';
                backToResultsButtonText = 'Retour aux résultats';
