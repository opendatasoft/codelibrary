<ods-dataset-context context="populationmillesime"
           populationmillesime-domain="public"
           populationmillesime-dataset="population-francaise-communes"
           populationmillesime-parameters="{'refine.annee_recensement':'2016'}">
  <div class="row">
    <div class="col-md-5">
        <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="18" align-month="true">
              <ods-chart-query context="populationmillesime" field-x="nom_de_la_commune" maxpoints="8" sort="serie1-1">
                  <ods-chart-serie expression-y="population_totale" chart-type="bar" function-y="MAX"
                                   label-y="2016 Census population" color="#142E7B" display-values="true" scientific-display="true">
                  </ods-chart-serie>
              </ods-chart-query>
        </ods-chart>
    </div>
    <div class="col-md-7">
          <h3>
              Top cities by population, click to see the evolution over years
          </h3>
          <div ods-analysis="analysispopulationhomemadechart"
               ods-analysis-context="populationmillesime"
               ods-analysis-max="8"
               ods-analysis-x="nom_de_la_commune"
               ods-analysis-serie-population="MAX(population_totale)"
               ods-analysis-sort="population">
              <div ods-subaggregation="analysispopulationhomemadechart.results"
                   ods-subaggregation-serie-max="MAX(population)">
                  <div class="homemadechart"
                       ng-init="select = {'commune':''}">
                      <div class="homemadechart__line"
                           ng-repeat="(position,analysehomemadechart) in analysispopulationhomemadechart.results">
                          <div class="homemadechart__line-progressionbar"
                               ng-click="select.commune = analysehomemadechart.x"
                               ng-class="{'selected': select.commune == analysehomemadechart.x}"
                               style="width: {{ analysehomemadechart.population / results[0].max * 100 }}%">
                              <div class="homemadechart__line-commune">
                                  {{ analysehomemadechart.x | capitalize }}
                              </div>
                              <div class="homemadechart__line-population">
                                  {{ analysehomemadechart.population | number }}
                              </div>
                          </div>
                          <div class="homemadechart__line-progressionbackground">
                          </div>
                          <div class="homemadechart__focus"
                               ng-if="select.commune == analysehomemadechart.x">
                              <div class="homemadechart__focus__close"
                                   ng-click="select.commune = undefined">
                                  <i class="fa fa-times" aria-hidden="true"></i>
                              </div>
                              <h4>
                                  Population evolution in {{ analysehomemadechart.x }} since 2006
                              </h4>
                              <ods-dataset-context context="historic"
                                                   historic-domain="public"
                                                   historic-dataset="population-francaise-communes"
                                                   historic-parameters="{'q': 'nom_de_la_commune:&quot;' + analysehomemadechart.x + '&quot;'}">
                                  <ods-chart timescale="year" single-y-axis="true"
                                             logarithmic="true" align-month="true">
                                      <ods-chart-query context="historic"
                                                       field-x="annee_recensement" maxpoints="0"
                                                       timescale="year">
                                          <ods-chart-serie expression-y="population_totale"
                                                           chart-type="column"
                                                           function-y="MAX" color="#142E7B"
                                                           scientific-display="true">
                                          </ods-chart-serie>
                                      </ods-chart-query>
                                  </ods-chart>
                              </ods-dataset-context>
                          </div>
                      </div>
                  </div>
              </div>
          </div>
    </div>
</ods-dataset-context>
