<ods-dataset-context context="ctx"
                     ctx-dataset="communes-et-arrondissements-municipaux-france"
                     ctx-domain="userclub">
    <div class="search-module">
        <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
        <input placeholder="Search in dataset"
               ng-model="ctx.parameters['q']"
               ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
               class="search-module-input"
               type="text"/>
        <button class="search-module-clear"
                ng-if="ctx.parameters['q']"
                ng-click="ctx.parameters['q'] = undefined">
            <i class="fa fa-times-circle" aria-hidden="true"></i>
        </button>
    </div>
    <ul class="display-tags"
        ods-results="results"
        ods-results-context="ctx"
        ods-results-max="11">
        <li ng-repeat="(i,item) in results"
            ng-if="ctx.parameters['q'] && i <= 9">
            <a ng-href="{{ 'https://www.google.fr/maps/search/' + item.fields.com_name }}" target="_blank">
                {{item.fields.com_name }} ({{item.fields.dep_name }}) <i class="fa fa-map-marker" aria-hidden="true"></i>
            </a>
        </li>
        <li class="more-than-ten"
            ng-if="ctx.parameters['q'] && results.length > 10">
            More than 10 results. Continue typing to narrow your search...
        </li>
    </ul>
</ods-dataset-context>
