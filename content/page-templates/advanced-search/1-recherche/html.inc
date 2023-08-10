<ods-dataset-context context="boamp,motclesctx"
                     boamp-dataset="boamp"
                     boamp-domain="boamp-datadila"
                     motclesctx-dataset="liste-mots-descripteurs-boamp"
                     motclesctx-domain="boamp-datadila"
                     ng-init="values = {}">

    <div ods-adv-analysis="motcles"
         ods-adv-analysis-context="motclesctx"
         ods-adv-analysis-group-by="mc_code,mc_libelle"
         ods-adv-analysis-limit="500">
        {{ values.motcles = motcles ; '' }}
    </div>

    <div class="row">
        <div class="col-md-6">
            <h2>
                Page de recherche avancée
            </h2>

            <div>
                <label for="ft_input_search">
                    Recherche texte
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

            <!--<fieldset>
                <legend>Checkbox : {{ values.checkbox }}</legend>
                <div>
                    <input type="checkbox" id="checkbox-a"
                           ng-model="values.checkbox['a']">
                    <label for="checkbox-a">A</label>
                </div>
                <div>
                    <input type="checkbox" id="checkbox-b"
                           ng-model="values.checkbox['b']">
                    <label for="checkbox-b">B</label>
                </div>
                <div>
                    <input type="checkbox" id="checkbox-c"
                           ng-model="values.checkbox['c']">
                    <label for="checkbox-c">C</label>
                </div>
            </fieldset>

            <fieldset>
                <legend>Statut de l’avis : {{ values.radio }}</legend>
                <div>
                    <input type="radio" id="radio-a" name="radio-status"
                           value=0
                           ng-model="values.radio">
                    <label for="radio-a">Avis en cours</label>
                </div>
                <div>
                    <input type="radio" id="radio-b" name="radio-status"
                           value=1
                           ng-model="values.radio">
                    <label for="radio-b">Avis clôturés</label>
                </div>
                <div>
                    <input type="radio" id="radio-c" name="radio-status"
                           value=2
                           ng-model="values.radio">
                    <label for="radio-c">Tous les avis</label>
                </div>
            </fieldset>-->

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

            <!--<div>
                <label for="idweb_input_search">
                    Référence de l’avis (exemple : 21-145897)
                </label>
                <input type="text"
                       id="idweb_input_search"
                       ng-model="values.id"
                       placeholder="" />
            </div>-->

            <!--<div>
                <label for="select_department">Département(s) du lieu de publication, d’exécution</label>
                <div ods-results="departementslist" ods-results-context="depts" ods-results-max="150" id="select-dpt">

                    <ods-select
                            selected-values="values.departements_select"
                            multiple="true"
                            options="values.departements"
                            placeholder="Tous les départements">
                    </ods-select>
                </div>
            </div>-->

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

            <!--<div>
                <label for="select_seuil_marche">Seuils de marché</label>
                <ods-select id="select_seuil_marche"
                            selected-values="values.seuils_select"
                            multiple="true"
                            options="values.liste_seuils"
                            placeholder="Tous les marchés">
                </ods-select>
            </div>-->
        </div>

        <div class="col-md-6">
            <ul ods-results="items"
                ods-results-context="boamp"
                ods-results-max="10">

                <li ng-repeat="(i,item) in items"
                    ng-init="avis_gestion = (item.fields.gestion | fromjson);
                             avis_donnees= (item.fields.donnees | fromjson);
                             lots=avis_donnees.OBJET.LOTS">

                    <div ng-if="item.fields.idweb =='23-10244' ">
                        <h2>
                            Annonce supprimée
                        </h2>
                    </div>

                    {{link_to_annonce="/pages/avis?q=idweb:" + '"' + item.fields.idweb + '"' ; '' }}

                    <div ng-if="item.fields.idweb !='23-10244' ">
                        <h2 ng-bind="'Avis n° ' + item.fields.idweb">
                            <span ng-bind="' Publié le ' + (item.fields.dateparution | moment:'LL')"></span>
                            <p>
                        <span ng-if="avis_gestion.INDEXATION.DATE_LIMITE_REPONSE"
                              ng-init="arrayDT = avis_gestion.INDEXATION.DATE_LIMITE_REPONSE.split('T');
                                       arrayDate = arrayDT[0].split('-');

                                       year = arrayDate[0];
                                       month = arrayDate[1];
                                       day = arrayDate[2];
                                       time_str = arrayDT[1];

                                       date_str_FormatFr = arrayDate[2] + '/' + arrayDate[1] + '/' + arrayDate[0];
                                       time_display = time_str.substring(0,5).replace(':','h');">Date limite de réponse le {{date_str_FormatFr}} à {{time_display}}</span>
                            </p>

                            <!--                            <img ng-if="item.fields.criteres.includes('environnementaux')" src="/assets/theme_image/ico-critere-environnement.png" alt="Critères environnementaux" title="Critères environnementaux">-->
                            <!--                            <img ng-if="item.fields.criteres.includes('sociaux')" src="/assets/theme_image/ico-critere-social.png" alt="Critères sociaux" title="Critères sociaux">-->
                            <!--                            <img ng-if="item.fields.marche_public_simplifie == 1" src="/assets/theme_image/ico-critere-mps.png" alt="MPS" title="Marché public simplifié" style="padding-bottom:2px;">-->
                            <p>
                                <a href="{{link_to_annonce}}">
                                    <span ng-bind-html="item.fields.objet"></span>
                                </a>
                            </p>
                        </h2>

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