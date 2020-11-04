<div ng-init="domain = 'mesr.opendatasoft.com';
              datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

              filters = ['type_d_etablissement', 'secteur_d_etablissement', 'dep_nom'];

              fieldsList = ['adresse_uai', 'dep_nom', 'numero_telephone_uai'];
              fieldLink = 'url';
              fieldLinkLabel = 'Visiter le site web';
              mapLinkLabel = 'Voir sur la carte';

              resultTitle = 'uo_lib';

              title = 'Établissements près de chez vous';
              
              viewListButtonText = 'Voir la liste';
              viewDetailsButtonText = 'Voir les détails';
              backToResultsButtonText = 'Retour aux résultats';

              DO_NOT_MODIFY_BELOW;

              ctxfields = {};
              modal.isVisible = false
              ">
    <ods-dataset-context context="ctx"
                         ctx-domain="{{ domain }}"
                         ctx-dataset="{{ datasetid }}">

        <span ng-repeat="field in ctx.dataset.fields">
            {{ ctxfields[field.name] = field.label; '' }}
        </span>

        <aside class="modal"
               ng-class="{ 'is-visible' : modal.isVisible}">
            <div class="modal-header">
                <button class="modal-close-mobile"
                        title="Close modal"
                        ng-click="modal.isVisible = false">
                    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-x"><line x1="18" y1="6" x2="6" y2="18"></line><line x1="6" y1="6" x2="18" y2="18"></line></svg>
                </button>
                <h1 class="modal-title">
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
                        {{ ctx.parameters['disjunctive.' + filter] = true; '' }}
                        <div ods-facet-results="categories"
                             ods-facet-results-facet-name="{{ filter }}"
                             ods-facet-results-context="ctx"
                             ods-facet-results-sort="alphanum">
                            <div class="dropdown"
                                 ng-if="categories">
                                <button ng-click="dropdown.open = (dropdown.open == filter ? '' : filter);"
                                        ng-class="{'dropdown-button-active': select[filter],
                                                  'dropdown-button-open': dropdown.open == filter}"
                                        id="dropdown-button-{{ filter }}"
                                        class="dropdown-button"
                                        aria-haspopup="true"
                                        aria-expanded="{{ dropdown.open == filter }}">
                                    {{ (!select[filter] ? ctxfields[filter] : select[filter] | capitalize) }}
                                </button>
                                <div class="dropdown-menu"
                                     ng-class="{'dropdown-visible' : dropdown.open == filter }"
                                     aria-labelledby="dropdown-button-{{ filter }}">
                                    <div class="dropdown-title">
                                        {{ ctxfields[filter] }}
                                    </div>
                                    <ul class="dropdown-items">
                                        <li class="dropdown-item">
                                            <label class="dropdown-label">
                                                <input ng-model="select[filter]"
                                                       ng-value="Tous"
                                                       type="radio"
                                                       class="dropdown-input" 
                                                       translate />
                                                Tous
                                            </label>
                                        </li>
                                        <li ng-repeat="category in categories"
                                            class="dropdown-item">
                                            <label class="dropdown-label"
                                                   title="{{ category.path | capitalize }}">
                                                <input ng-model="select[filter]"
                                                       ng-value="category.path"
                                                       class="dropdown-input"
                                                       type="radio" />
                                                {{ category.path | capitalize }}
                                            </label>
                                        </li>
                                    </ul>
                                    {{ ctx.parameters['refine.' + filter] = (select[filter]=='Tous'?undefined:select[filter]); ''}}
                                </div>
                                <div class="dropdown-backdrop"
                                     ng-click="dropdown.open = ''"
                                     ng-show="dropdown.open != ''"></div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="modal-content">
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
                                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-x"><line x1="18" y1="6" x2="6" y2="18"></line><line x1="6" y1="6" x2="18" y2="18"></line></svg>
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

        <div class="modal-open-mobile"
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
                 class="feather feather-chevron-up"><polyline points="18 15 12 9 6 15"></polyline></svg>
            <h3 class="modal-open-mobile-title"
                ng-if="!ctx.parameters['refine.' + resultTitle]">
                {{ viewListButtonText }}
            </h3>
            <h3 class="modal-open-mobile-title"
                ng-if="ctx.parameters['refine.' + resultTitle]">
                {{ viewDetailsButtonText }}
            </h3>
        </div>
    </ods-dataset-context>
</div>