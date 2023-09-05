<ods-dataset-context context="boamp,motclesctx"
                     boamp-dataset="boamp"
                     boamp-parameters="{'refine.type_marche_facette':[], 'refine.dc':[]}"
                     boamp-domain="boamp-datadila"
                     motclesctx-dataset="liste-mots-descripteurs-boamp"
                     motclesctx-domain="boamp-datadila"

                     ods-datetime="datedujour_raw"

                     ng-init="values = {};
                              datedujour = (datedujour_raw|moment:'YYYY-MM-DD');">

    <div ods-adv-analysis="motcles"
         ods-adv-analysis-context="motclesctx"
         ods-adv-analysis-group-by="mc_code,mc_libelle"
         ods-adv-analysis-limit="500">
        {{ values.motcles = motcles ; '' }}
    </div>

    <div ods-results="items"
         ods-results-context="boamp"
         ods-results-max="10">
        {{ values.items = items ; '' }}
    </div>

    <div class="row">
        <div class="col-md-6">
            <h2>
                Page de recherche avancée
            </h2>

            <div>
                <label for="ft_input_search">
                    Recherche texte : {{ boamp.parameters['q'] }}
                </label>
                <input type="text"
                       id="ft_input_search"
                       ng-model="boamp.parameters['q']"
                       ng-model-options="{ debounce: 250 }"
                       placeholder="" />
            </div>

            <div>
                <label for="ft_search_objet_query">
                    Rechercher dans le champ objet : {{ boamp.parameters['q.objet'] = values.search_objet ? '#search(objet, \"' + values.search_objet + '\")' : undefined }}
                </label>
                <input type="text"
                       id="ft_search_objet_query"
                       name="search"
                       ng-model="values.search_objet"
                       ng-model-options="{ debounce: 250 }"
                       placeholder="" />
            </div>

            <fieldset ng-if="boamp.parameters">
                <legend>Type marché : {{ boamp.parameters['refine.type_marche_facette'] }}</legend>
                <label for="checkbox-service">
                    Service
                    <input type="checkbox" id="checkbox-service"
                           ods-toggle-model="boamp.parameters"
                           ods-toggle-key="refine.type_marche_facette"
                           ods-toggle-value="Service" />
                </label>
                <label for="checkbox-travaux">
                    Travaux
                    <input type="checkbox" id="checkbox-travaux"
                           ods-toggle-model="boamp.parameters"
                           ods-toggle-key="refine.type_marche_facette"
                           ods-toggle-value="Travaux" />
                </label>
                <label for="checkbox-fournitures">
                    Fournitures
                    <input type="checkbox" id="checkbox-fournitures"
                           ods-toggle-model="boamp.parameters"
                           ods-toggle-key="refine.type_marche_facette"
                           ods-toggle-value="Fournitures" />
                </label>
            </fieldset>

            <fieldset>
                <legend>Statut de l’avis : {{ boamp.parameters['q.etat_avis'] }}</legend>
                <div>
                    <input type="radio" id="radio-avis-en-cours" name="radio-status"
                           value=0
                           ng-model="values.statut_avis">
                    <label for="radio-avis-en-cours">Avis en cours</label>
                </div>
                <div>
                    <input type="radio" id="radio-avis-clotures" name="radio-status"
                           value=1
                           ng-model="values.statut_avis">
                    <label for="radio-avis-clotures">Avis clôturés</label>
                </div>
                <div>
                    <input type="radio" id="radio-tous-les-avis" name="radio-status"
                           value=2
                           ng-model="values.statut_avis">
                    <label for="radio-tous-les-avis">Tous les avis</label>
                </div>

                <!-- calcul des query string sur date pivot du jour pour les recherches lié à l'état de l'avis -->
                {{ values.statut_avis == 0 ? boamp.parameters['q.etat_avis'] = '(NOT #null(datelimitereponse) AND datelimitereponse>="' + datedujour + '") OR (#null(datelimitereponse) AND datefindiffusion>="' + datedujour + '")' : '' ; '' }}
                {{ values.statut_avis == 1 ? boamp.parameters['q.etat_avis'] = '(NOT #null(datelimitereponse) AND datelimitereponse<"' + datedujour + '") OR (#null(datelimitereponse) AND datefindiffusion<"' + datedujour + '")' : '' ; '' }}
                {{ values.statut_avis == 2 ? boamp.parameters['q.etat_avis'] = null : '' ; '' }}
            </fieldset>

            <div ng-if="values.motcles">
                <label for="select_keywords">
                    Mots clés : {{ boamp.parameters['refine.dc'] }}
                </label>
                <ods-select id="select_keywords"
                            selected-values="boamp.parameters['refine.dc']"
                            multiple="true"
                            label-modifier="mc_libelle"
                            value-modifier="mc_code"
                            options="values.motcles"
                            placeholder="">
                </ods-select>
            </div>

            <div>
                <label for="idweb_input_search">
                    Référence de l’avis (exemple : 21-145897) : {{ boamp.parameters['q.idweb'] = values.idweb ? '#search(idweb, \"' + values.idweb + '\")' : undefined }}
                </label>
                <input type="text"
                       id="idweb_input_search"
                       ng-model="values.idweb"
                       placeholder="" />
            </div>

            <fieldset>
                <ods-timerange context="boamp"
                               date-format="DD/MM/YYYY"
                               display-time="false"
                               from="values.FromParution"
                               to="values.ToParution"
                               time-field="dateparution"
                               suffix="dateparution">
                </ods-timerange>

                <legend>
                    <b>Date de publication </b>
                    <span>( format&nbsp;: jj/mm/aaaa )</span>
                </legend>
            </fieldset>

        </div>

        <div class="col-md-6">
            <ul>
                <li ng-repeat="(i,item) in values.items"
                    ng-init="avis_gestion = (item.fields.gestion | fromjson);
                             avis_donnees= (item.fields.donnees | fromjson);
                             lots=avis_donnees.OBJET.LOTS">

                    <div ng-if="item.fields.idweb =='23-10244' ">
                        <h2>
                            Annonce supprimée
                        </h2>
                    </div>

                    {{link_to_annonce = "https://userclub.opendatasoft.com/pages/advanced-search-fiche?q=idweb:" + '"' + item.fields.idweb + '"' ; '' }}

                    <div ng-if="item.fields.idweb !='23-10244' ">
                        <a target="_blank" href="{{link_to_annonce}}">
                            <h2 ng-bind="'Avis n° ' + item.fields.idweb"></h2>
                        </a>

                        <div>
                            <ul>
                                <li>
                                    <span>Objet : </span>
                                    <span ng-bind="item.fields.objet"></span>
                                </li>
                                <li>
                                    <span>Département : </span>
                                    <span ng-repeat="dept in tab_dept">{{dept}} </span>
                                </li>
                                <li>
                                    <span>Acheteur : </span><span ng-bind-html="item.fields.nomacheteur"></span>
                                </li>

                                <li>
                                    <span>Type d'avis : </span>
                                    <span ng-bind="item.fields.nature_libelle"></span>
                                    <span ng-if="item.fields.sousnaturenature_libelle"> - <span ng-bind="item.fields.sousnature_libelle"></span></span>
                                    <span ng-if="item.fields.etat == 'RECTIFICATIF'"> - rectificatif </span>
                                    <span ng-if="item.fields.etat == 'ANNULATION'"> - annulation </span>
                                    <span ng-if="item.fields.etat == 'RECTIFANNUL'"> - rectificatif et annulation </span>
                                </li>

                                <li>
                                    <span>Procédure : </span>
                                    <span margin-left="5em" ng-bind="item.fields.procedure_libelle"></span>
                                </li>

                                <li>
                                    <span>Date de parution : </span>
                                    <span margin-left="5em" ng-bind="item.fields.dateparution | date"></span>
                                    <span> - date limite de réponse : </span>
                                    <span margin-left="5em" ng-bind="item.fields.datelimitereponse | date"></span>
                                </li>
                            </ul>
                        </div>
                    </div>
                </li>
            </ul>

            <ods-pagination-block
                    context="boamp"
                    nofollow=false
                    container-identifier="container-pagination"
                    role="navigation">
            </ods-pagination-block>
        </div>
    </div>

</ods-dataset-context>