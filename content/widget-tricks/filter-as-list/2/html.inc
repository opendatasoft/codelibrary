<!-- Important here: in addition of the important disjunctive param, you need to think about the sort param to get the expected 1st record with ods-results -->
<ods-dataset-context context="swr"
                      swr-dataset="shanghai-world-university-ranking"
                      swr-domain="public"
                     swr-parameters="{'disjunctive.country':true,
                                     'sort':'total_score'}"
                     ng-init="default = {'selection':undefined}">
    <!-- Important here: store the result in a global variable to use it later -->
    <span ng-repeat="item in items" ods-results="items" ods-results-context="swr" ods-results-max="1">
        {{ default.selection = item.fields.country ; "" }}
    </span>
    <div class="row">
        <div class="col-sm-4">
            <h3>
                Select a country
            </h3>
            <h5>
                Default selection: country having the university with the best score.
            </h5>
            <!-- Important here: ng-init is executed only once, it's perfect to set the first refine at start-up -->
            <!-- Important here: only display the select once default.selection exists -->
            <select ng-if="default.selection"
                    ng-model="swr.parameters['refine.country']"
                    ng-init="swr.parameters['refine.country'] = default.selection">
                <option ods-facet-results="items"
                        ods-facet-results-context="swr"
                        ods-facet-results-facet-name="country"
                        ods-facet-results-sort="alphanum"
                        ng-repeat="item in items"
                        value="{{item.name}}"
                        ng-selected="item.name == default.selection">
                    {{item.name}} ({{item.count}} rank{{item.count>1?'s':''}})
                </option>
            </select>
        </div>
        <div class="col-sm-8">
            <ods-chart single-y-axis="true" min="0" max="100" step="10" labels-x-length="30" align-month="true">
                <ods-chart-query context="swr" field-x="university_name" maxpoints="10" sort="serie1-1">
                    <ods-chart-serie expression-y="pub" chart-type="bar" function-y="AVG" label-y="Average score (research paper publication)" color="#1B6698" display-units="false" display-values="true" scientific-display="false">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
    </div>
</ods-dataset-context>
