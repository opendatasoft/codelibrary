<div class="container">
    <ods-dataset-context context="georef,datactx,refinectx"
                         georef-dataset="departements-et-collectivites-doutre-mer-france"
                         georef-domain="userclub"
                         refinectx-dataset="departements-et-collectivites-doutre-mer-france"
                         refinectx-domain="userclub"
                         datactx-dataset="healthref-france-finess"
                         datactx-parameters="{'refine.libelle_categorie_d_etablissement':'Pharmacie d\'Officine'}"
                         datactx-domain="userclub"
                         values={}>

        <div ods-color-gradient="colorgradient"
             ods-color-gradient-context="datactx"
             ods-color-gradient-x="departement"
             ods-color-gradient-serie="COUNT()">

            <h3>
                Number of pharmacies by department
            </h3>
            <p>
                Click on a department for more details
            </p>
            <div class="map-container">
                <ods-map basemap="streets" style="height:550px" no-refit="true">
                    <ods-map-layer context="georef"
                                   color-categories="colorgradient['colors']"
                                   color-by-field="dep_code"
                                   color-categories-other="lightgrey"
                                   display="categories"
                                   shape-opacity="0.95"
                                   refine-on-click-context="refinectx"
                                   refine-on-click-refinectx-replace-refine="true"
                                   refine-on-click-refinectx-map-field="dep_code"
                                   refine-on-click-refinectx-context-field="dep_code"></ods-map-layer>
                    <ods-map-layer context="refinectx"
                                   show-if="refinectx.parameters['refine.dep_code']"
                                   color="transparent"
                                   border-color="red"
                                   border-opacity="1"
                                   border-size="3"></ods-map-layer>
                </ods-map>
                <div ng-if="refinectx.parameters['refine.dep_code']"
                     class="kpis">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Aggregation value
                                </h3>
                                <p class="description">
                                    used to color the map
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value">
                                    {{ colorgradient['values'][refinectx.parameters['refine.dep_code']] | number }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                Selected key : {{ refinectx.parameters['refine.dep_code'].join('') || refinectx.parameters['refine.dep_code'] }}
                            </div>
                        </div>
                    </div>

                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Department name
                                </h3>
                                <p class="description">
                                    from the filtered geo ref context
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-results="results"
                                   ods-results-max="1"
                                   ods-results-context="refinectx">
                                    {{ results[0].fields.dep_name }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                Value from an ods-results
                            </div>
                        </div>
                    </div>

                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top"
                                 ods-results="results"
                                 ods-results-max="1"
                                 ods-results-context="refinectx">
                                <h3 class="title">
                                    % of pharmacies in France
                                </h3>
                                <p class="description">
                                    in {{ results[0].fields.dep_name }}
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered"
                                 ods-adv-analysis="dataanalysis"
                                 ods-adv-analysis-context="datactx"
                                 ods-adv-analysis-select="count(*) as count">
                                <p class="value">
                                    {{ colorgradient['values'][refinectx.parameters['refine.dep_code']] / dataanalysis[0].count * 100 | number : 1 }} %
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                Aggregation compared with an analysis on the data context
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>
