<div class="row">
    <div class="col-md-4 col-md-offset-2 col-sm-6 mb" ng-if="true"
         ng-init="names = ['John','George','Harry','Meredith']; selection">
        <h3>
            Use ng-init to set the selection only once at the start
        </h3>
        <ods-select ng-init="selection = ['John']"
                    options="names"
                    selected-values="selection"
                    placeholder="Pick a name"></ods-select>
        <h4>Input:</h4>
        <pre ng-bind="names|json"></pre>
        <h4>Selection:</h4>
        <pre ng-bind="selection|json"></pre>
    </div>
    <div class="col-md-4 col-sm-6 mb" ng-if="true"
         ng-init="names = ['John','George','Harry','Meredith']; selection">
        <h3>
            If the selection is cleared, reset it to "John"
        </h3>
        {{ selection = (selection.length > 0 ? selection : ['John']); ''}}
        <ods-select options="names"
                    selected-values="selection"
                    placeholder="Pick a name"></ods-select>
        <h4>Input:</h4>
        <pre ng-bind="names|json"></pre>
        <h4>Selection:</h4>
        <pre ng-bind="selection|json"></pre>
    </div>
</div>