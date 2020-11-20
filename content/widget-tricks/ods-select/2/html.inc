<div>
    <ods-dataset-context context="evenementspublicsopenagenda,secondarycontext"
                         evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                         evenementspublicsopenagenda-parameters="{'disjunctive.city':true}"
                         evenementspublicsopenagenda-domain="userclub"
                         secondarycontext-dataset="evenements-publics-openagenda"
                         secondarycontext-parameters="{'disjunctive.city':true}"
                         secondarycontext-domain="userclub">
        <div class="row"
             ods-facet-results="cities"
             ods-facet-results-facet-name="city"
             ods-facet-results-context="evenementspublicsopenagenda">
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    Simplest mode, with label and value modifier on the name
                </h3>
                <ods-select options="cities"
                            selected-values="selection"
                            label-modifier="name"
                            value-modifier="name"
                            placeholder="Pick a city"></ods-select>
                <h4>Input:</h4>
                <pre ng-bind="cities|json"></pre>
                <h4>Selection:</h4>
                <pre ng-bind="selection|json"></pre>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    Expression in the label-modifier
                </h3>
                <ods-select options="cities"
                            selected-values="selection"
                            label-modifier="name + ' - ' + (count | number) + ' events'"
                            value-modifier="name"
                            placeholder="Pick a city"></ods-select>
                <h4>Input:</h4>
                <pre ng-bind="cities|json"></pre>
                <h4>Selection:</h4>
                <pre ng-bind="selection|json"></pre>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true">
                <h3>
                    Use the selection to refine the dataset through selected-values parameter
                </h3>
                <ods-select options="cities"
                            selected-values="evenementspublicsopenagenda.parameters['refine.city']"
                            label-modifier="name + ' - ' + (count | number) + ' events'"
                            value-modifier="name"
                            placeholder="Pick a city"></ods-select>
                <ods-table context="evenementspublicsopenagenda" displayed-fields="address"></ods-table>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    More advanced: refine the dataset with an AngularJs expression
                </h3>
                <ods-select options="cities"
                            selected-values="selection"
                            label-modifier="name + ' - ' + (count | number) + ' events'"
                            value-modifier="name"
                            placeholder="Pick a city"></ods-select>
                {{ secondarycontext.parameters['refine.city'] = selection; '' }}
                <ods-table context="secondarycontext" displayed-fields="address"></ods-table>
            </div>
        </div>

    </ods-dataset-context>
</div>