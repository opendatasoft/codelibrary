<ods-dataset-context context="ctx"
                     ctx-dataset="georef-france-commune"
                     ctx-domain="public">
                     <div  ods-results="results"
                ods-results-context="ctx">
    <div class="search-module">
        <div class="search-bar">
            <i class="fa fa-search search-bar-icon" aria-hidden="true"></i>
            <label for="search-as-you-type" class="sr-only">Search for a city</label>
            <input id="search-as-you-type"
                   name="search-as-you-type"
                   autocomplete="off"
                   aria-label="search-as-you-type: type some characters to make a search"
                   aria-expanded="{{ variables.recherche != undefined }}"
                   aria-controls="search-results"
                   placeholder="Search in dataset"
                   ng-model="variables.recherche"
                   ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 600, 'blur': 0 }}"
                   ng-change="variables.recherche ? (ctx.parameters['q']= ('#search(com_name,\'' + variables.recherche + '\')' )) : (ctx.parameters['refine.com_code'] = undefined);"
                   class="search-bar-input"
                   type="text"/>
            <button aria-label="Clear search"
                    class="search-bar-clear"
                    ng-if="ctx.parameters['q']"
                    ng-click="ctx.parameters['q'] = undefined; ctx.parameters['refine.com_code']=undefined; variables.recherche=undefined">
                <i class="fa fa-times-circle" aria-hidden="true"></i>
                <span class="sr-only">Clear search</span>
            </button>
        </div>
                {{ctx.parameters['q'] = (variables.recherche.length>0 ? ('#search(com_name,\'' + variables.recherche + '\')' ) : undefined ) ; '' }}        
        <div class="search-results">
            <span class="sr-only">
                Search results will be displayed bellow, as a list of external links
            </span>
            <ul ng-if="ctx.parameters['q']"
                class="display-tags"

                aria-label="search-as-you-type results displayed here when a search is made"
                aria-live="polite"
                aria-atomic="true"
                aria-labelledby="search-as-you-type"
                role="group"

                id="search-results">

                <li ng-repeat="(i,item) in results"
                    ng-if="ctx.parameters['q'] && i <= 9"
                    role="listitem">
                    <div ng-click="ctx.parameters['refine.com_code']=item.fields.com_code">
                        {{item.fields.com_name }} ({{item.fields.dep_name }}) <i class="fa fa-map-marker" aria-hidden="true"></i>
                        <span class="sr-only">Filter on the selected city</span>
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
    <h2 class="content-card-title" ng-if="!ctx.parameters['refine.com_code']">Search and select a city</h2>
    <div class="row content-card" ng-if="ctx.parameters['refine.com_code']">     
    <div class="col-md-5">           
    <h2 class="content-card-title">
                    Commune sélectionnée : {{results[0].fields.com_name}}
                </h2>
                <div class="content-card-fields">
                <dl>
                <dt>  EPCI  </dt>
                <dd>{{ results[0].fields.epci_name }} </dd>
                <dt>
                   Département </dt>
                   <dd>{{ results[0].fields.dep_name }}
</dd>
                <dt>
                   Région </dt>
                   <dd>{{ results[0].fields.reg_name }}
                </dd>
                </dl>
                </div>
                </div>
                <div class="col-md-7">
    <ods-map context="ctx" scroll-wheel-zoom="false" basemap="jawg.light"></ods-map>
                </div>
                </div>
</ods-dataset-context>
