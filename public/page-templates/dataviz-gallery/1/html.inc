<div class="container">
    <ods-dataset-context context="ctx,ctxdate" 
                         ctx-dataset="datavizgallery" 
                         ctxdate-dataset="datavizgallery"
                         ctx-parameters="{'sort':'date','disjunctive.theme':'true'}">
        <h1 class="page-title">Dataviz Gallery</h1>
        <p class="page-subtitle">
            Sur cette page vous pouvez trouver les dernières visualisations crées sur notre portail.
        </p>
        <div class="content-card search-module-container">
            <!-- SEARCH -->
            <div class="search-module">
                <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
                <input placeholder="Rechercher" ng-model="ctx.parameters['q']"
                       ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
                       class="search-module-input" type="text" />
                <button class="search-module-clear" ng-if="ctx.parameters['q']"
                        ng-click="ctx.parameters['q'] = undefined">
                    <i class="fa fa-times-circle" aria-hidden="true"></i>
                </button>
            </div>

            <!-- FILTERS Search & Select -->
            <div class="filter-list">
                <div ods-facet-results="theme" ods-facet-results-facet-name="theme"
                     ods-facet-results-context="ctx" ods-facet-results-sort="alphanum">
                    <ods-select ng-if="theme"
                                selected-values="ctx.parameters['refine.theme']" multiple="false"
                                options="theme" label-modifier="name" value-modifier="name"
                                placeholder="Sélectionnez un thème"></ods-select>
                </div>
                <div class="clear-filters"
                     ng-show="ctx.parameters['refine.theme'].length >0 ">
                    <div class="clear-filters-button" role="button" ng-click="ctx.parameters['refine.theme'] = undefined;">
                        Supprimer le filtre
                        <i class="fa fa-times-circle" aria-hidden="true"></i>
                    </div>
                </div>
            </div>

            <!-- FILTERS date  - If you want to add a date filter to your template, you can do it by removing this line (45) and the line 80

            <div class="filter-date"
                 ng-init="bounds = {'min':undefined, 'max':undefined, 'minselection':undefined, 'maxselection':undefined}">
                <div ods-adv-analysis="dateanalysis"
                     ods-adv-analysis-context="ctxdate"
                     ods-adv-analysis-select="min(date) as mindate, max(date) as maxdate">
                    {{ bounds.min = (dateanalysis[0].mindate | moment : 'YYYY-MM-DD') ; '' }}
                    {{ bounds.max = (dateanalysis[0].maxdate | moment : 'YYYY-MM-DD') ; '' }}
                </div>
                <ods-date-range-slider ng-if="bounds.min && bounds.max"
                                       context="ctx"
                                       initial-from="{{ bounds.min }}"
                                       initial-to="{{ bounds.max }}"
                                       start-bound="bounds.min"
                                       end-bound="bounds.max"
                                       date-field="date"
                                       precision="day"
                                       from="bounds.minselection"
                                       to="bounds.maxselection">
                </ods-date-range-slider>
                <div ng-if="bounds.min && bounds.max"
                     class="filter-date-button" 
                     ng-class="{'filter-date-button-disabled':
                               bounds.minselection == bounds.min &&
                               bounds.maxselection == bounds.max}"
                     ng-click="bounds.minselection = bounds.min;
                               bounds.maxselection = bounds.max">
                    Toute la période <i class="fa fa-arrows-h" aria-hidden="true"></i>
                </div>
            </div>

            remove this other line to activate the date filter option  -->

        </div>

        <!-- KPIs -->
        <section class="kpis-container row row-equal-height">
            <!-- KPI box component -->
            <div class="kpi-card"
                 tabindex="0"
                 ods-adv-analysis="agg"
                 ods-adv-analysis-context="ctx"
                 ods-adv-analysis-select="count(*) as x">
                <p class="kpi-title">
                    {{ (agg[0].x || 0) | number : (kpi.precision || 0) }}
                    <span ng-if="kpi.unit" class="kpi-unit">{{ kpi.unit }}</span>
                </p>
                <p class="page-subtitle">
                    data visualisation<span ng-if="agg[0].x>1">s</span> sélectionnée<span ng-if="agg[0].x>1">s</span>
                </p>
            </div>

        </section>

        <!-- CARDS -->

        <section>           
            <div class="row row-equal-height" 
                 ods-results="items" 
                 ods-results-context="ctx" 
                 ods-results-max="100">  

                <div ng-repeat="item in items" class="col-md-4">

                    <div class="access-card">
                        <div class="access-card-container">
                            <a href="{{item.fields.datavizlink}}" target="_blank">
                                <div class="access-card-img"
                                     style="background-image: url('/assets/theme_image/{{item.fields.photo}}')">
                                    <h3 class="access-card-pretitle">{{item.fields.theme}}</h3>
                                </div>
                            </a>
                            <div class="access-card-content">
                                <h2 class="access-card-title">{{ item.fields.title }}</h2>
                                <!-- remove this line and line 128 to add the date of creation of your dataset 
                                <p>Date de création : {{item.fields.date | date}}</p>
                                -->
                                <p>Jeu<span ng-if="(item.fields.iddataset  | split: ';').length >1">x</span> de données utilisé<span ng-if="(item.fields.iddataset  | split: ';').length >1">s</span> : </p>
                                <ul>
                                    <li ng-repeat="dataset in (item.fields.iddataset  | split: ';')">
                                        <ods-catalog-context context="catalogue"
                                                             catalogue-parameters="{'refine.datasetid':dataset}">  
                                            <span ods-results="listedataset"
                                                  ods-results-context="catalogue"
                                                  ods-results-max="10">
                                                <a ng-href="/explore/dataset/{{dataset}}" target="_blank">{{listedataset[0].metas.title}}</a>
                                            </span>
                                        </ods-catalog-context>

                                    </li>
                                </ul>

                            </div>
                        </div>
                        <div class="access-card-button">
                            <a href="{{item.fields.datavizlink}}" target="_blank"><div class="access-card-button-content">
                                Accéder
                                </div>
                            </a>
                        </div>
                    </div>
                </div>
            </div>
        </section>
        <!-- End of cards section-->
    </ods-dataset-context>
</div>