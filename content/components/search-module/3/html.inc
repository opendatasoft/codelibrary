<ods-dataset-context context="ctx"
                     ctx-dataset="communes-et-arrondissements-municipaux-france"
                     ctx-domain="userclub">
    <div class="search-module">
        <div class="search-bar">
            <i class="fa fa-search search-bar-icon" aria-hidden="true"></i>
            <label for="search-as-you-type" class="sr-only">Search for a city</label>
            <input id="search-as-you-type"
                   name="search-as-you-type"
                   aria-label="search-as-you-type: type some characters to make a search"
                   aria-expanded="{{ ctx.parameters['q'] != undefined }}"
                   aria-controls="search-results"
                   placeholder="Search in dataset"
                   ng-model="ctx.parameters['q']"
                   ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
                   class="search-bar-input"
                   type="text"/>
            <button aria-label="Clear search"
                    class="search-bar-clear"
                    ng-if="ctx.parameters['q']"
                    ng-click="ctx.parameters['q'] = undefined">
                <i class="fa fa-times-circle" aria-hidden="true"></i>
                <span class="sr-only">Clear search</span>
            </button>
        </div>
        <div class="search-results">
            <span class="sr-only">
                Search results will be displayed bellow, as a list of external links
            </span>
            <ul class="display-tags"
                ods-results="results"
                ods-results-context="ctx"
                ods-results-max="11"

                aria-label="search-as-you-type results displayed here when a search is made"
                aria-live="polite"
                aria-atomic="true"
                aria-labelledby="search-as-you-type"
                role="group"

                id="search-results">
                <li ng-repeat="(i,item) in results"
                    ng-if="ctx.parameters['q'] && i <= 9"
                    role="listitem">
                    <a ng-href="{{ 'https://www.google.fr/maps/search/' + item.fields.com_name }}" target="_blank">
                        {{item.fields.com_name }} ({{item.fields.dep_name }}) <i class="fa fa-map-marker" aria-hidden="true"></i>
                        <span class="sr-only">Open selected city in another tab</span>
                    </a>
                </li>
                <li class="more-than-ten"
                    role="listitem"
                    ng-if="ctx.parameters['q'] && results.length > 10">
                    More than 10 results. Continue typing to narrow your search...
                </li>
            </ul>
        </div>
    </div>
</ods-dataset-context>
