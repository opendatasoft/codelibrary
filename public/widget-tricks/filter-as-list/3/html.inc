<ods-dataset-context context="sirenepublic,sirenepublicfacetlistingonly"
                      sirenepublic-dataset="sirene"
                      sirenepublic-domain="public"
                      sirenepublic-parameters="{'q':'ddebact:[2010 TO 2019]',
                                              'disjunctive.ddebact':true}"
                      sirenepublicfacetlistingonly-dataset="sirene"
                      sirenepublicfacetlistingonly-domain="public"
                      sirenepublicfacetlistingonly-parameters="{'q':'ddebact:[2010 TO 2019]',
                                                              'disjunctive.ddebact':true}">
    <div class="row">
        <div class="col-sm-4"
             ng-init="years = {'values':undefined}">
            <span ods-facet-results="results"
                  ods-facet-results-context="sirenepublicfacetlistingonly"
                  ods-facet-results-facet-name="ddebact"
                  ods-facet-results-sort="-alphanum">
                {{ years.values = results; "" }}
                <div class="filtres-facet-titre">
                    Pick a year :
                </div>
                <div class="controler"
                     ng-if="years.values"
                     ng-init="selection = years.values[0].path">
                    {{ sirenepublic.parameters['refine.ddebact'] = selection ; '' }}
                    <div class="input-range-with-button">
                        <div class="controler-button"
                             ng-class="{'disabled': selection == years.values[years.values.length-1].path}"
                             ng-click="selection = (selection == years.values[years.values.length-1].path? selection : 1*selection-1)">
                            <i class="fa fa-angle-left" aria-hidden="true"></i>
                        </div>
                        <div class="controler-button controler-selection">
                            <select ng-model="selection">
                                <option ng-repeat="year in years.values"
                                        ng-selected="selection == year.path"
                                        value="{{ year.path }}">
                                    {{ year.name }} ({{ year.count | number }} companies)
                                </option>
                            </select>
                        </div>
                        <div class="controler-button"
                             ng-class="{'disabled': selection == years.values[0].path }"
                             ng-click="selection = (selection == years.values[0].path ? selection : 1*selection+1)">
                            <i class="fa fa-angle-right" aria-hidden="true"></i>
                        </div>
                    </div>
                </div>
            </span>
        </div>
        <div class="col-sm-8">
            <ods-chart ng-if="sirenepublic.parameters['refine.ddebact']"
                       align-month="true">
                <ods-chart-query context="sirenepublic" field-x="ddebact" maxpoints="0" timescale="month">
                    <ods-chart-serie chart-type="column" function-y="COUNT" color="#1B6698" scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
    </div>
</ods-dataset-context>
