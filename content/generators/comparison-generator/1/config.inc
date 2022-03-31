ng-init="domain = 'userclub.opendatasoft.com';
                datasetid = 'healthref-france-finess';
                
                refineField = '';
                refineValue = '';

                pageTitle = 'Analyse : Etablissements du domaine sanitaire et social en France';
                pageSubtitle = 'Cette page permet de comparer la répartition des établissements du domaine sanitaire et social en France. Sélectionnez les territoires à comparer et parcourez les différents indicateurs et graphiques pour dresser votre analyse.';

                compareType = 'multiFields';
                
                filterTitle = 'Sélectionnez les catégories à comparer';
                referenceFitlerTitle = 'Catégorie de référence';
                compareFilterTitle = 'Catégorie à comparer';

                defaultLevel = 'France entière';

                IF_COMPARE_BY_MULTIFIELDS;

                fields = [
                {name:'Région',idField:'code_officiel_region',labelField:'nom_officiel_region', placeholder:'Toutes régions'},
                {name:'Département', idField:'departement',labelField:'libelle_departement', placeholder:'Tous départements'},
                {name:'EPCI', idField:'code_officiel_epci',labelField:'nom_officiel_epci', placeholder:'Tous EPCIs'},
                {name:'Commune', idField:'code_commune',labelField:'nom_officiel_commune', placeholder:'Toutes communes'}
                ];

                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                IF_COMPARE_BY_SINGLEFIELD;

                filterFieldId = 'alert_country';
                filterFieldLabel = 'alert_country';

                defaultValue = '';

                filterPlaceholder = 'Sélectionnez une valeur';

                kpis = [ 
                {
                'title': 'Nombre d\'établissements',
                'select': 'count(*)',
                'precision': 0,
                'unit': '',
                'faicon': 'square-o'
                }
                ];

                charts = [
                { 
                'disposition':'pyramid',
                'title':'Répartition par mode de fixation des tarifs',
                'xAxis':'libelle_mft',
                'label':'Nombre d\'établissements',
                'select':'count(*)'
                },
                { 
                'disposition':'pyramid',
                'title':'Répartition par catégorie d\’établissement',
                'xAxis':'libelle_categorie_d_etablissement',
                'label':'Nombre d\'établissements',
                'select':'count(*)'
                },
                { 
                'disposition':'classic',
                'title':'Participation au service public hospitalier',
                'xAxis':'libelle_sph',
                'type':'line',
                'function':'COUNT',
                'maxPoints':'20',
                'displayValues':'true',
                'label':'Nombre d\'établissements',
                'sort':'serie1-1',
                'expression':''
                },
                { 
                'disposition':'classic',
                'title':'Date d\'ouverture',
                'xAxis':'date_d_ouverture',
                'label':'Nombre d\'établissements',
                'type':'line',
                'function':'COUNT',
                'expression':'',
                'sort':'',
                'maxPoints':'',
                'displayValues':'true'
                }
                ];
