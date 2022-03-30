<ods-dataset-context context="search,ctx"
                     search-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     search-domain="public"
                     ctx-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctx-domain="public"

                     ng-init="variables = {}">
    <div ods-adv-analysis="results"
         ods-adv-analysis-context="search"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="com_arm_name,com_arm_code,dep_code">

        <div class="search-module">
            <!-- The search bar with it's cancel button -->
            <div class="search-bar">
                <i class="fa fa-search search-bar-icon" aria-hidden="true"></i>
                <label for="search-as-you-type" class="sr-only">Search for a city</label>
                <input id="search-as-you-type"
                       name="search-as-you-type"
                       autocomplete="off"
                       aria-label="search-as-you-type: type some characters to make a search"
                       aria-expanded="{{ variables.recherche != undefined }}"
                       aria-controls="search-results"
                       placeholder="Search for a city"
                       ng-model="variables.recherche"
                       ng-model-options="{ updateOn: 'keyup', debounce: 400}"
                       ng-change="variables.recherche ? (search.parameters['q'] = ('#search(com_arm_name,\'' + variables.recherche + '\')' )) : (ctx.parameters['refine.com_arm_code'] = undefined);"
                       class="search-bar-input"
                       type="text"/>
                <button aria-label="Clear search"
                        class="search-bar-clear"
                        ng-if="variables.recherche"
                        ng-click="variables.recherche = undefined;
                                  search.parameters['q'] = undefined">
                    <i class="fa fa-times-circle" aria-hidden="true"></i>
                    <span class="sr-only">Clear search</span>
                </button>
            </div>

            <!-- Search results -->
            <div class="search-results">
                <span class="sr-only">
                    Search results will be displayed bellow, as a list of external links
                </span>
                <ul ng-if="search.parameters['q']"
                    class="display-tags"

                    aria-label="search-as-you-type results displayed here when a search is made"
                    aria-live="polite"
                    aria-atomic="true"
                    aria-labelledby="search-as-you-type"
                    role="group"

                    id="search-results">

                    <li ng-repeat="(i,item) in results"
                        ng-if="search.parameters['q'] && i <= 9"
                        role="listitem">
                        <div ng-click="ctx.parameters['refine.com_arm_code'] = item.com_arm_code;
                                       variables.selection = item.com_arm_name;">
                            {{item.com_arm_name }} ({{item.dep_code }})
                            <i class="fa fa-map-marker" aria-hidden="true"></i>
                            <span class="sr-only">Filter on the selected city</span>
                        </div>
                    </li>
                    <li class="more-than-ten"
                        role="listitem"
                        ng-if="search.parameters['q'] && results.length > 10">
                        More than 10 results. Continue typing to narrow your search...
                    </li>
                </ul>
            </div>

            <!-- The active selection, and clear selection button -->
            <div class="search-selection"
                 ng-if="ctx.parameters['refine.com_arm_code']">
                <h2 class="search-selection-value">
                    {{ variables.selection }}
                </h2>
                <button class="clear-filters-button"
                        ng-click="ctx.parameters['refine.com_arm_code'] = undefined;
                                  variables.selection = undefined">
                    Clear selection
                    <i class="fa fa-times-circle" aria-hidden="true"></i>
                </button>
            </div>
        </div>

        <!-- Optionnal content, for the resource only, to highlight the selection and filter -->
        <ods-chart timescale="year" align-month="true">
            <ods-chart-query context="ctx" field-x="geo_year" maxpoints="0" timescale="year"
                             series-breakdown="variable_label">
                <ods-chart-serie expression-y="value" chart-type="column" function-y="SUM" label-y="Nombre de personnes"
                                 color="Paired" display-values="false" scientific-display="true">
                </ods-chart-serie>
            </ods-chart-query>
        </ods-chart>
    </div>
</ods-dataset-context>
