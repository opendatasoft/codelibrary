<ods-dataset-context context="population"
                     population-domain="public"
                     population-dataset="population-millesimee-communes-2016">
    <div class="row">
        <div class="col-md-5">
            <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="18" align-month="true">
                <ods-chart-query context="population" field-x="nom_de_la_commune" maxpoints="9" sort="serie1-1">
                    <ods-chart-serie expression-y="population_totale" chart-type="column" function-y="MAX"
                                     label-y="Population 2016" color="#142E7B" display-values="true"
                                     scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>

        </div>
        <div class="col-md-7">
                <div ods-aggregation="populationtotal"
                     ods-aggregation-context="population"
                     ods-aggregation-function="SUM"
                     ods-aggregation-expression="population_totale">
                    <h3>
                        Overall population (City population sum)
                    </h3>
                    <p>
                        <b>{{ populationtotal | number }}</b> residents
                    </p>
                    <div ods-analysis="analysispopulation"
                         ods-analysis-context="population"
                         ods-analysis-max="9"
                         ods-analysis-x="nom_de_la_commune"
                         ods-analysis-serie-population="MAX(population_totale)"
                         ods-analysis-sort="population">
                        <div class="row">
                            <div class="col-xs-4" ng-repeat="(position,analyse) in analysispopulation.results">
                                <div class="kpi-bloc"
                                     ng-class="{'top3': position < 3}">
                                    <div class="position">
                                        {{ position + 1 }} <!-- Start at 0 -->
                                    </div>
                                    <div class="commune">
                                        {{ analyse.x | capitalize }}
                                    </div>
                                    <div class="population">
                                        {{ analyse.population | number }}
                                    </div>
                                    <div class="ratio">
                                        (<b>{{ analyse.population / populationtotal * 100 | number : 2 }}%</b> of total population)
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
        </div>
    </div>
</ods-dataset-context>
