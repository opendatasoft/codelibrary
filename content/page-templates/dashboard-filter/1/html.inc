<ods-dataset-context context="synop"
                     synop-domain="userclub"
                     synop-dataset="observation-synop"
                     synop-parameters="{'disjunctive.nom_reg':true, 'disjunctive.nom_dept':true}">
    <section class="header">
        <div class="container">
            <div class="heading">
                <h1 class="title">Observation météorologique historiques en France (SYNOP)
                </h1>
                <p class="description">
                    Focus sur les températures observées depuis 2010.
                </p>
                Filtrer par :
                <div class="shared-width-ods-selects">
                    <div ods-facet-results="reglist"
                         ods-facet-results-facet-name="nom_reg"
                         ods-facet-results-context="synop"
                         ods-facet-results-sort="alphanum">
                        <ods-select options="reglist"
                                    selected-values="synop.parameters['refine.nom_reg']"
                                    label-modifier="name"
                                    value-modifier="name"
                                    placeholder="Sélectionnez une région"></ods-select>

                    </div>
                    <div ods-facet-results="deplist"
                         ods-facet-results-facet-name="nom_dept"
                         ods-facet-results-context="synop"
                         ods-facet-results-sort="alphanum">
                        <ods-select options="deplist"
                                    selected-values="synop.parameters['refine.nom_dept']"
                                    label-modifier="name"
                                    value-modifier="name"
                                    placeholder="Sélectionnez un département"></ods-select>

                    </div>
                </div>
            </div>
        </div>
    </section>
    <section>
        <div class="container">
            <div class="kpi-container"
                 ods-adv-analysis="analysis"
                 ods-adv-analysis-context="synop"
                 ods-adv-analysis-select="min(tc) as temperature, max(tc) as maxtemp, avg(tc) as tempmoyenne">
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-thermometer-empty" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].temperature | number : 2 }}°C
                    </p>
                    <p class="kpi-description">
                        Température minimale observée
                    </p>
                </div>
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-thermometer-half" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].tempmoyenne | number : 2}} °C
                    </p>
                    <p class="kpi-description">
                        Température moyenne observée
                    </p>
                </div>
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-thermometer-full" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].maxtemp | number : 2}} °C
                    </p>
                    <p class="kpi-description">
                        Température maximale observée
                    </p>
                </div>

            </div>
        </div>
    </section>
    <section>
        <div class="container">
            <div class="row">
                <div class="col-md-7">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Température maximale sur 12 heures (°C)
                        </h2>
                        <ods-map no-refit="false" scroll-wheel-zoom="false" basemap="jawg.light"
                                 location="5,46.54375,2.41699" max-zoom="10">
                            <ods-map-layer-group>
                                <ods-map-layer context="synop"
                                               color-gradient="{'1':'#FF2A0F','0.25':'#F7EB0C','0.5':'#F9B50D','0.75':'#FF7007'}"
                                               picto="ods-circle" show-marker="true" display="heatmap" radius="4"
                                               function="AVG" expression="tx12c" shape-opacity="0.5" point-opacity="1"
                                               border-color="#FFFFFF" border-opacity="1" border-size="1"
                                               border-pattern="solid" size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>

                    </div>
                </div>
                <div class="col-md-5">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Communes les plus chaudes
                        </h2>
                        <ods-chart single-y-axis="true" scientific-display="false" labels-x-length="20"
                                   align-month="true">
                            <ods-chart-query context="synop" field-x="libgeo" maxpoints="10" sort="serie1-1">
                                <ods-chart-serie expression-y="tc" chart-type="bar" function-y="AVG"
                                                 label-y="Température moyenne (°C)" color="#FF515A"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>

                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Évolution des précipitations
                        </h2>
                            <ods-chart scientific-display="false" align-month="true">
                                <ods-chart-query context="synop" field-x="date" maxpoints="0" timescale="month">
                                    <ods-chart-serie expression-y="rr24" chart-type="areaspline" function-y="AVG" color="#1B6698" scientific-display="true"  label-y="Précipitations moyennes dans les 24 dernières heures">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                                            </div>
                </div>
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Évolution des températures moyennes (°C)
                        </h2>
                        <ods-chart scientific-display="false" align-month="true">
                            <ods-chart-query context="synop" field-x="date" maxpoints="0" timescale="month">
                                <ods-chart-serie expression-y="tc" chart-type="column" function-y="AVG" color="#FF515A"
                                                 scientific-display="true" label-y="Température moyenne (°C)">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
            </div>
        </div>
    </section>
</ods-dataset-context>