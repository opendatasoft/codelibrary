<!-- Important here: the disjunctive (multi filter) mode for the facet to still display other values even if one is selected -->
<ods-dataset-context context="swr"
                     swr-dataset="shanghai-world-university-ranking"
                     swr-domain="public"
                     swr-parameters="{'disjunctive.country':true}">
    <div class="row">
        <div class="col-sm-4"
             ods-facet-results="items"
             ods-facet-results-context="swr"
             ods-facet-results-facet-name="country"
             ods-facet-results-sort="alphanum">
            <h3>
                Select a country
            </h3>
            <h5>
                "ranks": number of ranking score over years in the dataset
            </h5>
            <select ng-model="swr.parameters['refine.country']"
                    ng-options="item.path as (item.name+' ('+item.count+' rank'+(item.count>1?'s':'')+')') for item in items"
                    ng-selected="swr.parameters['refine.country'] == item.path">
                <option value="">-- All countries --</option>
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
