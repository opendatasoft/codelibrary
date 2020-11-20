<div>
    <ods-dataset-context context="evenementspublicsopenagenda,secondarycontext"
                         evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                         evenementspublicsopenagenda-parameters="{'disjunctive.region':true}"
                         evenementspublicsopenagenda-domain="userclub"
                         secondarycontext-dataset="evenements-publics-openagenda"
                         secondarycontext-parameters="{'disjunctive.region':true}"
                         secondarycontext-domain="userclub">
        <div class="row"
             ods-analysis="regions"
             ods-analysis-context="evenementspublicsopenagenda"
             ods-analysis-x="region"
             ods-analysis-serie-count="COUNT()"
             ods-analysis-sort="count"
             ods-analysis-max="200">
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    Simplest mode, with label and value modifier on the X axis
                </h3>
                <ods-select options="regions.results"
                            selected-values="selection"
                            label-modifier="x"
                            value-modifier="x"
                            placeholder="Pick a region"></ods-select>
                <h4>Input:</h4>
                <pre ng-bind="regions|json"></pre>
                <h4>Selection:</h4>
                <pre ng-bind="selection|json"></pre>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    Expression in the label-modifier
                </h3>
                <ods-select options="regions.results"
                            selected-values="selection"
                            label-modifier="x + ' - ' + (count | number) + ' events'"
                            value-modifier="x"
                            placeholder="Pick a region"></ods-select>
                <h4>Input:</h4>
                <pre ng-bind="regions|json"></pre>
                <h4>Selection:</h4>
                <pre ng-bind="selection|json"></pre>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true">
                <h3>
                    Use the selection to refine the dataset through selected-values parameter
                </h3>
                <ods-select options="regions.results"
                            selected-values="evenementspublicsopenagenda.parameters['refine.region']"
                            label-modifier="x + ' - ' + (count | number) + ' events'"
                            value-modifier="x"
                            placeholder="Pick a region"></ods-select>
                <ods-table context="evenementspublicsopenagenda" displayed-fields="department"></ods-table>
            </div>
            <div class="col-md-3 col-sm-6 mb" ng-if="true" ng-init="selection">
                <h3>
                    More advanced: refine the dataset with an AngularJs expression
                </h3>
                <ods-select options="regions.results"
                            selected-values="selection"
                            label-modifier="x + ' - ' + (count | number) + ' events'"
                            value-modifier="x"
                            placeholder="Pick a region"></ods-select>
                {{ secondarycontext.parameters['refine.region'] = selection; '' }}
                <ods-table context="secondarycontext" displayed-fields="department"></ods-table>
            </div>
        </div>

    </ods-dataset-context>
</div>