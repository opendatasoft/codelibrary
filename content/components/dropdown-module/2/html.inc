<div class="ods-box">
    <!-- Important here: the disjunctive (multi filter) mode for the facet to still display other values even if one is selected -->
    <ods-dataset-context context="universities"
                         universities-domain="public"
                         universities-dataset="shanghai-world-university-ranking"
                         universities-parameters="{'disjunctive.country':true}">
        <div class="row">
            <div class="col-sm-4"
                 ods-facet-results="countries"
                 ods-facet-results-context="universities"
                 ods-facet-results-facet-name="country"
                 ods-facet-results-sort="alphanum">
                <h3>
                    Select a country to view universities
                </h3>
                <!-- Dropdown starts here -->
                <div class="cl-dropdown"
                     ng-init="dropdown.open = ''">
                    <button ng-click="dropdown.open = (dropdown.open == 'country' ? '' : 'country');"
                            ng-class="{'cl-dropdown-button-active': universities.parameters['refine.country'],
                                      'cl-dropdown-button-open': dropdown.open == 'country'}"
                            id="dropdown-button"
                            class="cl-dropdown-button"
                            aria-haspopup="true"
                            aria-expanded="{{ dropdown.open == 'country' }}">
                        {{ (!universities.parameters['refine.country'] ? 'Country' : universities.parameters['refine.country'] | capitalize) }}
                    </button>
                    <div class="cl-dropdown-menu"
                         ng-class="{'cl-dropdown-visible' : dropdown.open == 'country' }"
                         aria-labelledby="dropdown-button">
                        <div class="cl-dropdown-title">
                            Country
                        </div>
                        <ul class="cl-dropdown-items">
                            <li class="cl-dropdown-item">
                                <label class="cl-dropdown-label">
                                    <input ng-model="universities.parameters['refine.country']"
                                           ng-value="All"
                                           name="country"
                                           type="radio"
                                           class="cl-dropdown-input" />
                                    All countries
                                </label>
                            </li>
                            <li ng-repeat="country in countries"
                                class="cl-dropdown-item">
                                <label class="cl-dropdown-label">
                                    <input ng-model="universities.parameters['refine.country']"
                                           ng-value="country.path"
                                           name="country"
                                           class="cl-dropdown-input"
                                           type="radio" />
                                    {{ country.path | capitalize }}
                                </label>
                            </li>
                        </ul>
                        {{universities.parameters['refine.country'] = (universities.parameters['refine.country'] == 'All' ? undefined : universities.parameters['refine.country']); ''}}
                    </div>
                    <div class="cl-dropdown-backdrop"
                         ng-click="dropdown.open = ''"
                         ng-show="dropdown.open != ''"></div>
                </div>
                <!-- Dropdown ends here -->
            </div>
            <div class="col-sm-8">
                <ods-map context="universities"></ods-map>
                <ods-table context="universities"></ods-table>
            </div>
        </div>
    </ods-dataset-context>
</div>
