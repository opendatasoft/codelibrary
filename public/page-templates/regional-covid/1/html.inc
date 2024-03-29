<div class="container">
    <section>
        <h2 class="text-primary text-center mb-4">
            COVID-19 epidemiologic status in Castilla y León
        </h2>
    </section>
    <!-- The data used here are from the first dashboard of the kind on ODS made by Junta de Castilla y Leone.
    See the page here : https://analisis.datosabiertos.jcyl.es/pages/coronavirus/
    See the data here : https://analisis.datosabiertos.jcyl.es/explore/dataset/situacion-epidemiologica-coronavirus-en-castilla-y-leon/table/?disjunctive.provincia&dataChart=eyJxdWVyaWVzIjpbeyJjaGFydHMiOlt7InR5cGUiOiJzcGxpbmUiLCJmdW5jIjoiU1VNIiwieUF4aXMiOiJjYXNvc19jb25maXJtYWRvcyIsInNjaWVudGlmaWNEaXNwbGF5Ijp0cnVlLCJjb2xvciI6IiM2NmMyYTUifSx7ImFsaWduTW9udGgiOnRydWUsInR5cGUiOiJzcGxpbmUiLCJmdW5jIjoiU1VNIiwieUF4aXMiOiJmYWxsZWNpbWllbnRvcyIsInNjaWVudGlmaWNEaXNwbGF5Ijp0cnVlLCJjb2xvciI6IiNmYzhkNjIifV0sInhBeGlzIjoiZmVjaGEiLCJtYXhwb2ludHMiOiIiLCJ0aW1lc2NhbGUiOiJkYXkiLCJzb3J0IjoiIiwiY29uZmlnIjp7ImRhdGFzZXQiOiJzaXR1YWNpb24tZXBpZGVtaW9sb2dpY2EtY29yb25hdmlydXMtZW4tY2FzdGlsbGEteS1sZW9uIiwib3B0aW9ucyI6eyJkaXNqdW5jdGl2ZS5wcm92aW5jaWEiOnRydWV9fX1dLCJkaXNwbGF5TGVnZW5kIjp0cnVlLCJhbGlnbk1vbnRoIjp0cnVlLCJ0aW1lc2NhbGUiOiIiLCJzaW5nbGVBeGlzIjp0cnVlfQ%3D%3D&location=8,41.64954,-4.33333&basemap=jawg.streets -->
    <ods-dataset-context context="regions, cases, selected"
                         cases-domain="jcyl"
                         cases-dataset="situacion-epidemiologica-coronavirus-en-castilla-y-leon"
                         selected-domain="jcyl"
                         selected-dataset="situacion-epidemiologica-coronavirus-en-castilla-y-leon"
                         selected-parameters="{'disjunctive.provincia':true}"
                         regions-dataset="limites-provinciales-de-castilla-y-leon-recintos"
                         regions-domain="https://analisis.datosabiertos.jcyl.es">
        <span ods-analysis="byDate" ods-analysis-context="cases" ods-analysis-max="0" ods-analysis-x="fecha"
              ods-analysis-serie-confirmados="SUM(casos_confirmados)" ods-analysis-serie-nuevos="SUM(nuevos_positivos)"
              ods-analysis-serie-altas="SUM(altas)"
              ods-analysis-serie-fallecimientos="SUM(fallecimientos)" ods-analysis-sort="fecha">
        </span>
        {{ nbRecords = byDate.results.length - 1; "" }}
        <!-- This code will refine results for latest date present in the datafield. The data on a given date must then already have the cumulative total at a given day avalaible.
      If you only have daily increments, you need one more context that is not refined by the last date, on which you do the ODS analysis with SUM -->
        <span ods-results="list" ods-results-context="cases" ods-results-max="-1" ods-results-sort="fecha">
            {{ lastDate = list[list.length-1].fields.fecha; "" }}
            {{ cases.parameters['refine.fecha'] = lastDate;""}}
        </span>
        <span ods-analysis="byPostcode" ods-analysis-context="cases" ods-analysis-max="0"
              ods-analysis-x-provincia="provincia" ods-analysis-serie-confirmados="SUM(casos_confirmados)"
              ods-analysis-serie-nuevos="SUM(nuevos_positivos)"
              ods-analysis-serie-altas="SUM(altas)" ods-analysis-serie-fallecimientos="SUM(fallecimientos)"
              ods-analysis-serie-codigos="SUM(codigo_ine)" ods-analysis-sort="-codigos">
        </span>
        <span ods-analysis="byRegion" ods-analysis-context="cases" ods-analysis-x="provincia" ods-analysis-max="0"
              ods-analysis-serie-confirmados="SUM(casos_confirmados)" ods-analysis-serie-nuevos="SUM(nuevos_positivos)"
              ods-analysis-serie-altas="SUM(altas)" ods-analysis-serie-fallecimientos="SUM(fallecimientos)"
              ods-analysis-sort="confirmados">
        </span>

        <!-- These are a few examples key figures you may want to put. You can add as many as you want, they will warp to multiple lines if you have a lot (but consider not putting too many) -->
        <section>
            <div class="row">
                <div class="col-md-3">
                    <div class="insight-card">
                        <h3 class="text-highlight insight-figure">{{ byDate.results[nbRecords].confirmados }}</h3>
                        <p class="text-light">Cases</p>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="insight-card">
                        <h3 class="text-highlight insight-figure">{{ byDate.results[nbRecords].nuevos }}</h3>
                        <p class="text-light">New-cases today</p>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="insight-card">
                        <h3 class="text-highlight insight-figure">{{ byDate.results[nbRecords].altas }}</h3>
                        <p class="text-light">Recovered</p>
                    </div>
                </div>
                <div class="col-md-3">
                    <div class="insight-card">
                        <h3 class="text-highlight insight-figure">{{ byDate.results[nbRecords].fallecimientos }}</h3>
                        <p class="text-light">Deaths</p>
                    </div>
                </div>
            </div>
        </section>
        <p ods-resluts="items" ods-results-context="cases" ods-results-max="0">{{ items }}</p>
        <!-- The example shows two tabs, you may add as many as you want for deaths etc. (but we strongly recommend not adding too many)
    The subagregation here is only needed for colors-->
        <section>
            <div class="row feature-box" ng-init="tabselector = 'firsttab'">
                <div class="col-xs-12">
                    <div class="tabs">
                        <a class="tab" ng-click="tabselector = 'firsttab'"
                           ng-class="{'activetab' : tabselector == 'firsttab'}">
                            Total cases
                        </a>
                        <a class="tab" ng-click="tabselector = 'secondtab'"
                           ng-class="{'activetab' : tabselector == 'secondtab'}">
                            New cases today
                        </a>
                    </div>
                    <div class="col-xs-12" ng-if="tabselector == 'firsttab'">
                        <div ng-init="colors = {};">
                            <!-- Put serie you want to color regions with in "maxval/minval" res."nameofserie". Replace res.codigos with your ZIP code field name -->
                            <div ods-subaggregation="byPostcode.results"
                                 ods-subaggregation-serie-maxval="MAX(confirmados)"
                                 ods-subaggregation-serie-minval="MIN(confirmados)">
                                <span ng-repeat="res in byPostcode.results">
                                    <!-- This is a little trick to have 5 digit ZIP code match 2 digit region code -->
                                    {{reg_code = res.codigos > 9999 ? (res.codigos | limitTo:2) : (res.codigos | limitTo:1); ""}}
                                    {{colors[reg_code] = "hsl(220,75%," + (75 - ((res.confirmados - results[0].minval) / (results[0].maxval - results[0].minval) * 50) | number : 0) + "%,1)"; "" }}
                                </span>
                            </div>
                            <ods-map basemap="jawg.light" no-refit="false" scroll-wheel-zoom="false"
                                     display-control="false" toolbar-drawing="false">
                                <!-- Put the serie you want as numbers on the map in "expresion" -->
                                <ods-map-layer context="cases" color="#142e7b" picto="ods-circle" display="clusters"
                                               function="SUM" expression="casos_confirmados" shape-opacity="0.5"
                                               point-opacity="1" caption="false"
                                               title="Epidimioliogic satutus in Castilla dy Leon" size-min="3"
                                               size-max="5" size-function="linear"></ods-map-layer>
                                <ods-map-layer context="regions" color-categories="colors" color-by-field="cod_ine_prov"
                                               color-categories-other="lightgrey" display="categories"
                                               shape-opacity="0.7" tooltip-disabled="true"></ods-map-layer>
                            </ods-map>
                        </div>
                    </div>
                    <div class="col-xs-12" ng-if="tabselector == 'secondtab'">
                        <div ng-init="colors = {};">
                            <!-- Put serie you want to color regions with in maxval/min -->
                            <div ods-subaggregation="byPostcode.results" ods-subaggregation-serie-maxval="MAX(nuevos)"
                                 ods-subaggregation-serie-minval="MIN(nuevos)">
                                <span ng-repeat="res in byPostcode.results">
                                    {{reg_code = res.codigos > 9999 ? (res.codigos | limitTo:2) : (res.codigos | limitTo:1); ""}}
                                    {{colors[reg_code] = "hsl(220,75%," + (75 - ((res.nuevos - results[0].minval) / (results[0].maxval - results[0].minval) * 50) | number : 0) + "%,1)"; "" }}
                                </span>
                            </div>
                        </div>
                        <ods-map basemap="jawg.light" no-refit="false" scroll-wheel-zoom="false" display-control="false"
                                 toolbar-drawing="false">
                            <ods-map-layer context="cases" color="#142e7b" picto="ods-circle" display="clusters"
                                           function="SUM" expression="nuevos_positivos" shape-opacity="0.5"
                                           point-opacity="1" caption="false"
                                           title="Epidimioliogic satutus in Castilla dy Leon"
                                           size-min="3" size-max="5" size-function="linear"></ods-map-layer>
                            <ods-map-layer context="regions" color-categories="colors" color-by-field="cod_ine_prov"
                                           color-categories-other="lightgrey" display="categories" shape-opacity="0.7"
                                           tooltip-disabled="true"></ods-map-layer>
                        </ods-map>
                    </div>
                </div>
            </div>
        </section>

        <section>
            <!-- Row of this section a selectable, to stack by filtering the "selected" context. That is why we use the same context twice (otherwise the map and KPIs would also be filtered) -->
            <div class="row feature-box">
                <div class="col-xs-12" title="Click on a row to add it to the charts below">
                    <table class="summary-table">
                        <thead>
                        <!-- Replace with your own headings. You may add more fields. -->
                        <th>Region</th>
                        <th>Confirmed</th>
                        <th>Recovered</th>
                        <th>Deaths</th>
                        </thead>
                        <tbody>
                        <tr ng-repeat="region in byRegion.results" ng-class="{'toggled': toggled}">
                            <td>
                                <div>
                                    <!-- The custom checkbox is made by using the label and hiding the checkbox. Regular checkboxes will work perfectly as wall (but cannot be styled) -->
                                    <input id="{{ region.x }}" type="checkbox" class="hidden-checkbox"
                                           ods-toggle-model="$parent.selected.parameters"
                                           ods-toggle-key="refine.provincia" ods-toggle-value="{{ region.x }}"/>
                                    <label for="{{ region.x }}" class="fake-checkbox"
                                           ng-click="toggled = !toggled"></label>
                                    {{ region.x }}
                                </div>
                            </td>
                            <!-- Replace with corresponding data fields -->
                            <td>{{ region.confirmados }}</td>
                            <td>{{ region.altas }}</td>
                            <td>{{ region.fallecimientos }}</td>
                        </tr>
                        </tbody>
                    </table>
                </div>
                <!-- Those charts will react to selected rows. Only change the expression-y. -->
                <div class="col-md-6">
                    <h4 class="text-primary text-center">Evolution</h4>
                    <ods-chart timescale="year" single-y-axis="true" scientific-display="false" align-month="true">
                        <ods-chart-query context="selected" field-x="fecha" maxpoints="0" timescale="day">
                            <ods-chart-serie expression-y="casos_confirmados" chart-type="spline" function-y="SUM"
                                             label-y="Confirmed cases" color="#00c7b1" scientific-display="true"
                                             display-values="true">
                            </ods-chart-serie>
                            <ods-chart-serie expression-y="fallecimientos" chart-type="line" function-y="SUM"
                                             label-y="Deceased" color="#fc8d62" scientific-display="true"
                                             display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="col-md-6">
                    <h4 class="text-primary text-center">Daily Increment</h4>
                    <ods-chart timescale="year" align-month="true">
                        <ods-chart-query context="selected" field-x="fecha" maxpoints="0" timescale="day">
                            <ods-chart-serie expression-y="nuevos_positivos" chart-type="column" function-y="SUM"
                                             label-y="New positives" color="#00c7b1" display-values="true"
                                             display-stack-values="false" scientific-display="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </section>
    </ods-dataset-context>
</div>

