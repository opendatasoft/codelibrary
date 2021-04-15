<div class="row">
    <div class="col-md-4 col-md-offset-2 col-sm-6 mb" ng-if="true"
         ng-init="names = ['John','George','Harry','Meredith']; selection">
        <h3>
            Simplest mode, with a string array
        </h3>
        <ods-select options="names"
                    selected-values="selection"
                    placeholder="Pick a name"></ods-select>
        <h4>Input:</h4>
        <pre ng-bind="names|json"></pre>
        <h4>Selection:</h4>
        <pre ng-bind="selection|json"></pre>
    </div>
    <div class="col-md-4 col-sm-6 mb" ng-if="true"
         ng-init="
            names = [
                {name:'Mister John',id:'john'},
                {name:'King George',id:'george'},
                {name:'Prince Harry',id:'harry'},
                {name:'Lady Meredith',id:'meredith'}
            ];
            selection">
        <h3>
            Modifiers options with json object array
        </h3>
        <ods-select options="names"
                    selected-values="selection"
                    label-modifier="name"
                    value-modifier="id"
                    placeholder="Pick a name"></ods-select>
        <h4>Input:</h4>
        <pre ng-bind="names|json"></pre>
        <h4>Selection:</h4>
        <pre ng-bind="selection|json"></pre>
    </div>
</div>