<!-- V2.1 :
    - Add ods-select and multiple choice option for filters
    - Add clear all filter button when one filter is applied
    - Add documentation
  -->

<div ng-init="domain = 'mesr.opendatasoft.com';
                datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

                title = 'Établissements près de chez vous';

                filters = [
                {'id':'type_d_etablissement','multiple':true},
                {'id':'secteur_d_etablissement','multiple':true},
                {'id':'dep_nom','multiple':true}
                ];
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                resultTitle = 'uo_lib';
                fieldsList = ['adresse_uai', 'dep_nom', 'numero_telephone_uai'];
                fieldLink = 'url';
                fieldLinkLabel = 'Visiter le site web';
                mapLinkLabel = 'Voir sur la carte';

                viewListButtonText = 'Voir la liste';
                viewDetailsButtonText = 'Voir les détails';
                backToResultsButtonText = 'Retour aux résultats';

                DO_NOT_MODIFY_BELOW;

                ctxfields = {};
                isVisible = false;
                activeFilters = {};
                ">

    <!-- ### GENERAL SETTINGS ### -->
    <!-- domain : (Domain URL) : Must contain the ID of the domain where the dataset is published.
      ex: 'discovery.opendatasoft.com'
    -->
    <!-- datasetid (Dataset ID) : Must contain the ID of the dataset
      ex: 'oeuvres-de-johannes-vermeer'
    -->

    <!-- title (Title of the page) :
    ex: 'List of interest around you'
    -->

    <!-- ### FILTERS SETTINGS ### -->
    <!-- filters (Filters) : List of object that contains the IDs to generate the filters pannel.
    and multiple true or false to allow the user to select multiple values in the filter.
    NB: the field must be a facet in the dataset
    NB: alphanumerical sort is applied in the filter view
     ex: [
              {'id':'filterid','multiple':true},
              {'id':'filterid2','multiple':false}
         ]
    -->
    <!-- resetFiltersButton (boolean) : add a reset filters button after filters block -->
    <!-- resetFiltersButtonLabel (Label of the button) : test to display when a filter is selected
        ex: 'Clear all filters'
    -->

    <!-- ### LIST VIEW SETTINGS ### -->
    <!-- resultTitle (Title of the item) : Set the item title from a field ID
      ex: 'title';
    -->
    <!-- fieldsList (List configuration) : Set the list of field IDs
      ex: ['category','genre','date']
    -->
    <!-- fieldLink (Link to an external resource) : If available, the field ID of some external resource as a web URL
      ex: 'link'
    -->
    <!-- fieldLinkLabel (The label of that link) : Label of the link button
      ex: 'Read more here'
    -->
    <!-- mapLinkLabel (The label of the item button) : used to select the item and see it on the map
      ex: 'See on the map'
    -->

    <!-- ### MOBILE VIEW SETTINGS ### -->
    <!-- viewListButtonText : when displaying the map, the bottom button to open the list view
      ex: 'See the list'
    -->
    <!-- viewDetailsButtonText : when an item is selected on the map, the bottom button to open the list view with the selected item
      ex: 'See the item details'
    -->
    <!-- backToResultsButtonText : when the list view is opened, to close button to go back to the map
      ex: "Back to the list'
    -->



    <!-- MUST READ

  A common error is forget to protect commas with a leading backslash, as commas are used to declare values of variable it will break the settings
  wrongVariable = 'I'll be freed from commas'
  correctVariable = 'I\'ll be freed from commas'
  -->

    <!-- DO NOT MODIFY -->
    <!-- Technical fields, do not modify please -->

    <ods-dataset-context context="ctx"
                         ctx-domain="{{ domain }}"
                         ctx-dataset="{{ datasetid }}">

      <span ng-repeat="field in ctx.dataset.fields">
        {{ ctxfields[field.name] = field.label; '' }}
      </span>

        <span ng-repeat="filter in filters">
        {{ ctx.parameters['refine.' + filter.id] = activeFilters[filter.id] ; '' }}
      </span>

        <aside class="cl-modal"
               ng-class="{ 'is-visible' : modal.isVisible}">
            <div class="cl-modal-header">
                <button class="cl-modal-close-mobile"
                        title="Close modal"
                        ng-click="modal.isVisible = false">
                    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none"
                         stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
                         class="feather feather-x">
                        <line x1="18" y1="6" x2="6" y2="18"></line>
                        <line x1="6" y1="6" x2="18" y2="18"></line>
                    </svg>
                </button>
                <h1 class="cl-modal-title">
                    {{ title }}
                </h1>
                <div class="search-module">
                    <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
                    <input placeholder="Search"
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

                <!-- FILTERS -->
                <div class="filter-list"
                     ng-init="dropdown.open = '';
                        select = {}">
                    <div ng-repeat="filter in filters">
                        {{ ctx.parameters['disjunctive.' + filter.id] = true; '' }}
                        <div ods-facet-results="categories"
                             ods-facet-results-facet-name="{{ filter.id }}"
                             ods-facet-results-context="ctx"
                             ods-facet-results-sort="alphanum">
                            <ods-select ng-if="ctxfields[filter.id]"
                                        selected-values="activeFilters[filter.id]"
                                        multiple="filter.multiple"
                                        options="categories"
                                        label-modifier="name"
                                        value-modifier="name"
                                        placeholder="{{ ctxfields[filter.id] }}"></ods-select>
                        </div>
                    </div>

                    <div class="clear-filters"
                         ng-show="(activeFilters | values).join('')">
                        <div class="clear-filters-button"
                             role="button"
                             ng-click="activeFilters = {}">
                            {{ resetFiltersButtonLabel }}
                            <i class="fa fa-times-circle" aria-hidden="true"></i>
                        </div>
                    </div>
                </div>
            </div>

            <div class="cl-modal-content">
                <ul class="result-list">
                    <li class="result"
                        ng-repeat="item in items"
                        ods-results="items"
                        ods-results-context="ctx"
                        ods-results-max="1000">

                        <h2 class="result-title">
                            {{ item.fields[resultTitle] }}
                        </h2>
                        <dl class="result-info">
                            <dt ng-repeat-start="field in fieldsList">
                                {{ ctxfields[field] }}
                            </dt>
                            <dd ng-repeat-end>{{ item.fields[field] }}</dd>
                        </dl>
                        <div class="result-footer">
                            <a href="{{ item.fields[fieldLink] }}"
                               ng-if="fieldLink && item.fields[fieldLink]"
                               target="_blank">
                                {{ fieldLinkLabel }}
                            </a>
                            <button class="result-button"
                                    ng-if="!ctx.parameters['refine.' + resultTitle]"
                                    ng-click="modal.isVisible = false;
                                  ctx.parameters['refine.' + resultTitle] = item.fields[resultTitle];">
                                {{ mapLinkLabel }}
                            </button>
                            <button class="result-button"
                                    ng-if="ctx.parameters['refine.' + resultTitle]"
                                    ng-click="ctx.parameters['refine.' + resultTitle] = undefined">
                                {{ backToResultsButtonText }}
                                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"
                                     fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"
                                     stroke-linejoin="round" class="feather feather-x">
                                    <line x1="18" y1="6" x2="6" y2="18"></line>
                                    <line x1="6" y1="6" x2="18" y2="18"></line>
                                </svg>
                            </button>
                        </div>
                    </li>
                </ul>
            </div>
        </aside>


        <ods-map no-refit="true"
                 scroll-wheel-zoom="true"
                 display-control="false"
                 display-control-single-layer="false"
                 toolbar-fullscreen="false"
                 toolbar-drawing="false">
            <ods-map-layer-group>
                <ods-map-layer context="ctx"
                               refine-on-click-context="ctx"
                               refine-on-click-map-field="{{ resultTitle }}"
                               refine-on-click-context-field="{{ resultTitle }}"
                               color="#0098c3"
                               picto="college"
                               show-marker="true"
                               display="auto"
                               shape-opacity="0.5"
                               point-opacity="1"
                               border-color="#FFFFFF"
                               border-opacity="1"
                               border-size="1"
                               border-pattern="solid"
                               size="4"
                               size-min="3"
                               size-max="5"
                               size-function="linear"></ods-map-layer>
            </ods-map-layer-group>
        </ods-map>

        <div class="cl-modal-open-mobile"
             ng-click="modal.isVisible = true">
            <svg xmlns="http://www.w3.org/2000/svg"
                 width="24"
                 height="24"
                 viewBox="0 0 24 24"
                 fill="none"
                 stroke="currentColor"
                 stroke-width="2"
                 stroke-linecap="round"
                 stroke-linejoin="round"
                 class="feather feather-chevron-up">
                <polyline points="18 15 12 9 6 15"></polyline>
            </svg>
            <h3 class="cl-modal-open-mobile-title"
                ng-if="!ctx.parameters['refine.' + resultTitle]">
                {{ viewListButtonText }}
            </h3>
            <h3 class="cl-modal-open-mobile-title"
                ng-if="ctx.parameters['refine.' + resultTitle]">
                {{ viewDetailsButtonText }}
            </h3>
        </div>
    </ods-dataset-context>
</div>
