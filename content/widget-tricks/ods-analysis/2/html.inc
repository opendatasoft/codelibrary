<ods-dataset-context context="population"
                     population-domain="discovery"
                     population-dataset="population-millesimee-communes-2016@public">
    <div class="row">
        <div class="col-md-6">
            <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="18" align-month="true">
                <ods-chart-query context="population" field-x="nom_de_la_commune" maxpoints="10" sort="serie1-1">
                    <ods-chart-serie expression-y="population_totale" chart-type="column" function-y="MAX"
                                     label-y="Population 2016" color="#142E7B" display-values="true"
                                     scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
        <div class="col-md-6">
            <div ods-analysis="analysispopulation"
                 ods-analysis-context="population"
                 ods-analysis-max="10"
                 ods-analysis-x="nom_de_la_commune"
                 ods-analysis-serie-population="MAX(population_totale)"
                 ods-analysis-sort="population">
                <div id="top10">
                    <table>
                        <tr>
                            <th>Position</th>
                            <th>Commune</th>
                            <th>Population</th>
                        </tr>
                        <tr ng-repeat="(position,analyse) in analysispopulation.results">
                            <td>{{ position + 1 }}</td> <!-- Start at 0 -->
                            <td>{{ analyse.x | capitalize }}</td>
                            <td>{{ analyse.population | number }}</td>
                        </tr>
                    </table>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
