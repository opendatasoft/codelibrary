<div class="container">
    <ods-dataset-context context="ctx,ctxdate" ctx-domain="userclub.opendatasoft.com" ctx-dataset="rappel-conso"
        ctxdate-domain="userclub.opendatasoft.com" ctxdate-dataset="rappel-conso"
        ctx-parameters="{'sort':'-date_de_publication_de_la_fiche','disjunctive.nature_juridique_du_rappel':'true','disjunctive.distributeurs':'true','disjunctive.categorie_de_produit':'true'}">
        <h1 class="page-title">Rappel conso</h1>
        <p class="page-subtitle">
            Le jeu de données du site rappel-conso comprend la liste des fiches de rappels publiées sur le site
            rappel-conso.
        </p>
        <div class="content-card search-module-container">
            <!-- SEARCH -->
            <div class="search-module">
                <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
                <input placeholder="Search" ng-model="ctx.parameters['q']"
                    ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
                    class="search-module-input" type="text" />
                <button class="search-module-clear" ng-if="ctx.parameters['q']"
                    ng-click="ctx.parameters['q'] = undefined">
                    <i class="fa fa-times-circle" aria-hidden="true"></i>
                </button>
            </div>

            <!-- FILTERS Search & Select -->
            <div class="filter-list" ng-init="dropdown.open = ''">
                <div ods-facet-results="naturejuridique" ods-facet-results-facet-name="nature_juridique_du_rappel"
                    ods-facet-results-context="ctx" ods-facet-results-sort="alphanum">
                    <ods-select ng-if="naturejuridique"
                        selected-values="ctx.parameters['refine.nature_juridique_du_rappel']" multiple="false"
                        options="naturejuridique" label-modifier="name" value-modifier="name"
                        placeholder="Sélectionnez une nature juridique"></ods-select>
                </div>
                <div ods-facet-results="categorie" ods-facet-results-facet-name="categorie_de_produit"
                    ods-facet-results-context="ctx" ods-facet-results-sort="alphanum">
                    <ods-select ng-if="categorie" selected-values="ctx.parameters['refine.categorie_de_produit']"
                        multiple="true" options="categorie" label-modifier="name" value-modifier="name"
                        placeholder="Sélectionnez une catégorie"></ods-select>
                </div>
                <div ods-facet-results="distributeurs" ods-facet-results-facet-name="distributeurs"
                    ods-facet-results-context="ctx" ods-facet-results-sort="alphanum">
                    <ods-select ng-if="distributeurs" selected-values="ctx.parameters['refine.distributeurs']"
                        multiple="true" options="distributeurs" label-modifier="name" value-modifier="name"
                        placeholder="Sélectionnez un distributeur"></ods-select>
                </div>

                <div class="clear-filters"
                    ng-show="ctx.parameters['refine.categorie_de_produit'].length >0 ||  ctx.parameters['refine.distributeurs'].length >0 || ctx.parameters['refine.nature_juridique_du_rappel'].length >0">
                    <div class="clear-filters-button" role="button" ng-click="ctx.parameters['refine.categorie_de_produit'] = undefined;
                    ctx.parameters['refine.distributeurs'] = undefined;
                    ctx.parameters['refine.nature_juridique_du_rappel'] = undefined">
                        Supprimer tous les filtres
                        <i class="fa fa-times-circle" aria-hidden="true"></i>
                    </div>
                </div>
            </div>

            <!-- FILTERS date  -->
            <div class="filter-date"
                ng-init="bounds = {'min':undefined, 'max':undefined, 'minselection':undefined, 'maxselection':undefined}">
                <!--
                Get the date range
                If the day or month is on 1 digit (ie. < 10), it is right justified with a 0 padding.
                dateminmax[0] is the first date (oldest)
                dateminmax[dateminmax.results.length-1] is the last date (newest / biggest)
            -->
                <span ods-analysis="dateminmax" ods-analysis-context="ctxdate"
                    ods-analysis-x-year="date_de_publication_de_la_fiche.year"
                    ods-analysis-x-month="date_de_publication_de_la_fiche.month"
                    ods-analysis-x-day="date_de_publication_de_la_fiche.day" ods-analysis-serie-c="COUNT()"
                    ods-analysis-sort="x.date_de_publication_de_la_fiche.year,x.date_de_publication_de_la_fiche.month,x.date_de_publication_de_la_fiche.day">
                    <span ng-if="dateminmax.results && dateminmax.results.length > 0">
                        {{ bounds['min'] = dateminmax.results[0].x.year + '-' + (10 >
                        dateminmax.results[0].x.month?'0':'') + dateminmax.results[0].x.month + '-' +
                        (10 > dateminmax.results[0].x.day?'0':'') + dateminmax.results[0].x.day;
                        bounds['max'] = dateminmax.results[dateminmax.results.length-1].x.year + '-' +
                        (10 > dateminmax.results[dateminmax.results.length-1].x.month?'0':'') +
                        dateminmax.results[dateminmax.results.length-1].x.month + '-' + (10 >
                        dateminmax.results[dateminmax.results.length-1].x.day?'0':'') +
                        dateminmax.results[dateminmax.results.length-1].x.day; ''}}
                    </span>
                </span>
                <ods-date-range-slider ng-if="bounds.min && bounds.max" context="ctx" initial-from="{{ bounds.min }}"
                    initial-to="{{ bounds.max }}" start-bound="bounds.min" end-bound="bounds.max"
                    date-field="date_de_publication_de_la_fiche" precision="day" from="bounds.minselection"
                    to="bounds.maxselection">
                </ods-date-range-slider>
                <!-- Resetting the range by setting widget "from" and "to" to the min/max bounds computed with ods-analysis -->
                <div ng-if="bounds.min && bounds.max" class="filter-date-button" ng-class="{'filter-date-button-disabled':
                    values.periode.minselection == values.periode.min &&
                    values.periode.maxselection == values.periode.max}"
                    ng-click="bounds.minselection = bounds.min; bounds.maxselection = bounds.max">
                    The entire period <i class="fa fa-arrows-h" aria-hidden="true"></i>
                </div>
            </div>
        </div>

        <!-- KPIs -->
        <section class="kpis-container row row-equal-height">
            <div class="col-md-4 margin-bottom-20">
                <!-- KPI box component -->
                <div class="kpi-card" ods-aggregation="total" ods-aggregation-context="ctx"
                    ods-aggregation-function="COUNT">
                    <i class="kpi-icon fa fa-calendar" aria-hidden="true"></i>
                    <p class="kpi-title">{{ (total || 0) | number : 0 }}</p>
                    <p class="kpi-description">Nombre de rappels</p>
                </div>
            </div>
        </section>

        <!-- CARDS -->
        <section>
            <div class="row row-equal-height" ods-results="items" ods-results-context="ctx" ods-results-max="12">
                <div ng-repeat="item in items" class="col-md-6 margin-bottom-20">
                    <div class="content-card" ng-class="{'content-card-horizontal': imagePosition === 'left' }">
                        <div class="content-card-img"
                            style="{{ 'background-image: url(https://userclub.opendatasoft.com/explore/dataset/rappel-conso/files/' + item.fields.lien_vers_la_liste_des_images.id + '/300/);' }}">
                        </div>
                        <div class="content-card-body">
                            <h2 class="content-card-title text-center">
                                {{ item.fields.noms_des_modeles_ou_references }}
                            </h2>
                            <div class="content-card-fields">
                                <dl>
                                    <dt>Motif du rappel</dt>
                                    <dd>{{item.fields.motif_du_rappel}}</dd>
                                    <dt>Risques</dt>
                                    <dd>{{item.fields.risques_encourus_par_le_consommateur}}</dd>
                                    <dt>Marque</dt>
                                    <dd>{{item.fields.nom_de_la_marque_du_produit}}</dd>
                                    <dt>Catégorie</dt>
                                    <dd>{{item.fields.categorie_de_produit}}</dd>
                                    <dt>Distributeur</dt>
                                    <dd>{{item.fields.distributeurs}}</dd>
                                    <dt>Nature juridique du rappel</dt>
                                    <dd>{{item.fields.nature_juridique_du_rappel}}</dd>
                                    <dt>Date de publication de la fiche</dt>
                                    <dd>
                                        {{item.fields.date_de_publication_de_la_fiche | moment : 'DD/MM/YYYY'}}
                                    </dd>
                                </dl>
                            </div>
                            <div class="text-center">
                                <a href="{{item.fields.lien_vers_l_affichette_pdf}}" target="_blank"
                                    class="content-card-button">
                                    Lien vers l'affichette
                                </a>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </section>
        <a href="https://userclub.opendatasoft.com/explore/dataset/rappel-conso/" target="_blank"
            class="margin-bottom-20">View data</a>
    </ods-dataset-context>
</div>