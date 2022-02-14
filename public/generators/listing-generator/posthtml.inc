
              DO_NOT_MODIFY_BELOW;

              localctxfields = {};
              values = {};
              activeFilters = {};
              localctx = undefined;
    ">

    <ods-dataset-context context="localctx"
                       localctx-domain="{{ domain || localctx.domain }}"
                       localctx-dataset="{{ datasetid || localctx.dataset.datasetid }}">
      {{ localctx = ctx || localctx ; '' }}

      <!-- Private datasets can be accessed by adding an API Key.
           Add this param to the <ods-dataset-context above,
           where XXX is your apikey :
           localctx-apikey="XXX"
      -->
      <ods-dataset-context ng-if="localctx.dataset.datasetid"
                           context="localctxdate"
                           localctxdate-domain="{{ localctx.domain }}"
                           localctxdate-dataset="{{ localctx.dataset.datasetid }}">

          <span ng-if="sort">
            {{localctx.parameters['sort'] = sort; ''}}
          </span>

          <span ng-if="fieldDefaultRangeStartsNow">
            {{localctxdate.parameters={'q.date': fieldDate + '&gt;#now()'}; ''}}
          </span>

          <div ng-show="!$parent.$parent.$parent.$parent.$parent || blocks">
              <h1 class="page-title">
                  {{ localctx.dataset.metas.title }}
              </h1>

              <p class="page-subtitle" ng-bind-html="localctx.dataset.metas.description | shortSummary"></p>
          </div>

          <span ng-repeat="field in localctx.dataset.fields">
            {{ localctxfields[field.name] = field.label; '' }}
          </span>

          <div ng-show="!$parent.$parent.$parent.$parent.$parent || blocks">
            <span ng-repeat="filter in filters">
            {{ localctx.parameters['refine.' + filter.id] = activeFilters[filter.id] ; '' }}
            </span>
          </div>

          <div ng-show="!$parent.$parent.$parent.$parent.$parent || blocks" class="content-card search-module-container">
              <!-- SEARCH -->
              <div class="search-module">
                  <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
                  <input placeholder="Rechercher"
                         ng-model="localctx.parameters['q']"
                         ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
                         ng-change="localctx.parameters['start'] = undefined"
                         class="search-module-input"
                         type="text"/>
                  <button class="search-module-clear"
                          ng-if="localctx.parameters['q']"
                          ng-click="localctx.parameters['q'] = undefined;
                  localctx.parameters['start'] = undefined">
                      <i class="fa fa-times-circle" aria-hidden="true"></i>
                  </button>
              </div>

              <!-- FILTERS Search & Select -->
              <div class="filter-list"
                   ng-init="dropdown.open = '';
                            select = {}">
                  <div ng-repeat="filter in filters">
                      {{ localctx.parameters['disjunctive.' + filter.id] = true; '' }}
                      <div ods-facet-results="categories"
                           ods-facet-results-facet-name="{{ filter.id }}"
                           ods-facet-results-context="localctx"
                           ods-facet-results-sort="alphanum">
                          <ods-select ng-if="categories"
                                      selected-values="activeFilters[filter.id]"
                                      multiple="filter.multiple"
                                      options="categories"
                                      label-modifier="name"
                                      value-modifier="name"
                                      on-change="localctx.parameters['start'] = undefined"
                                      placeholder="{{ filter.label || localctxfields[filter.id] }}"></ods-select>
                      </div>
                  </div>

                  <div class="clear-filters"
                       ng-show="(activeFilters | values).join('') || localctx.parameters['geofilter.distance'] || localctx.parameters['geofilter.polygon']">
                      <div class="clear-filters-button"
                           role="button"
                           ng-click="activeFilters = {};
                                     localctx.parameters['geofilter.distance'] = undefined;
                                     localctx.parameters['geofilter.polygon'] = undefined;
                                     localctx.parameters['start'] = undefined">
                          {{ resetFiltersButtonLabel }}
                          <i class="fa fa-times-circle" aria-hidden="true"></i>
                      </div>
                  </div>
              </div>

              <!-- FILTERS date (if any) -->
              <div class="filter-date"
                   ng-if="fieldDate">
                  <!--
                        On récupère la plage de date du jeu de données. On fait une analyse pour récupérer la première et dernière date du champs date_de_restitution
                        pour le min: conditionnelle pour ajouter le 0 si le mois ou le jour est inférieur à 10 pour avoir une date iso
                        [dateminmax.results.length-1] : permet de récupérer dynamiquement le dernier élément de l'array du results => donc ici on calcule le nombre d'éléments dans l'array pour la date, donc 2, et 2-1= 1 donc 2019
                        Pareil que précédemment, ne pas hésiter à enlever le '' pour voir le comportement
                    -->
                      <span ods-analysis="dateminmax"
                            ods-analysis-context="localctxdate"
                            ods-analysis-x-year="{{ fieldDate }}.year"
                            ods-analysis-x-month="{{ fieldDate }}.month"
                            ods-analysis-x-day="{{ fieldDate }}.day"
                            ods-analysis-serie-c="COUNT()"
                            ods-analysis-sort="x.{{ fieldDate }}.year,x.{{ fieldDate }}.month,x.{{ fieldDate }}.day">
                        <span ng-if="dateminmax.results && dateminmax.results.length > 0">
                        {{ values['periode']['min'] = dateminmax.results[0].x.year + '-' + (10 > dateminmax.results[0].x.month?'0':'') + dateminmax.results[0].x.month + '-' + (10 > dateminmax.results[0].x.day?'0':'') + dateminmax.results[0].x.day;
                        values['periode']['max'] = dateminmax.results[dateminmax.results.length-1].x.year + '-' + (10 > dateminmax.results[dateminmax.results.length-1].x.month?'0':'') + dateminmax.results[dateminmax.results.length-1].x.month + '-' + (10 > dateminmax.results[dateminmax.results.length-1].x.day?'0':'') + dateminmax.results[dateminmax.results.length-1].x.day;
                        ''}}
                        </span>
                      </span>

                  <!-- Affichage du range slider: les dates récupérées dans l'analyse pour initialiser les bounds
                                                     la sélection période par défaut avec le mois + 1
                                                     le min/maxselection qui correspondent aux bornes choisies par le user -->

                  <ods-date-range-slider ng-if="values.periode.min && values.periode.max"
                                         context="localctx"
                                         initial-from="{{ values.periode.min }}"
                                         initial-to="{{ values.periode.max }}"
                                         start-bound="values.periode.min"
                                         end-bound="values.periode.max"
                                         date-field="{{ fieldDate }}"
                                         precision="day"
                                         from="values.periode.minselection"
                                         to="values.periode.maxselection">
                  </ods-date-range-slider>

                  <!-- le click sur toute la période resette la période choisie sur la date min et max -->
                  <div ng-if="resetFiltersButton && values.periode.min && values.periode.max" class="filter-date-button"
                       ng-class="{'filter-date-button-disabled':
                                   values.periode.minselection == values.periode.min &&
                                   values.periode.maxselection == values.periode.max}"
                       ng-click="values.periode.minselection = values.periode.min;
                                 values.periode.maxselection = values.periode.max;
                                 localctx.parameters['start'] = undefined">
                      Toute la période <i class="fa fa-arrows-h" aria-hidden="true"></i>
                  </div>

              </div>
          </div>

          <!-- KPIs -->
          <section class="kpis-container row row-equal-height">
              <div class="{{ 'col-md-' + (12/itemsPerRow) }} margin-bottom-20"
                   ng-repeat="kpi in kpis">
                  <!-- KPI box component -->
                  <div class="kpi-card"
                       ods-adv-analysis="agg"
                       ods-adv-analysis-context="localctx"
                       ods-adv-analysis-select="{{ kpi.select }} as x">
                      <i ng-if="kpi.faicon"
                         class="kpi-icon fa fa-{{ kpi.faicon }}" aria-hidden="true"></i>
                      <p class="kpi-title">
                          {{ (agg[0].x || 0) | number : (kpi.precision || 0) }}
                          <span ng-if="kpi.unit" class="kpi-unit">{{ kpi.unit }}</span>
                      </p>
                      <p class="kpi-description">
                          {{ kpi.title }}
                      </p>
                  </div>
              </div>
          </section>

          <!-- Source link -->
          <div ng-show="!$parent.$parent.$parent.$parent.$parent">
              <div class="margin-bottom-20" style="text-align: right; width: 100%">
                  <a href="https://{{ domain }}/explore/dataset/{{ datasetid }}/"
                     target="_blank">{{ sourceLinkLabel }}</a>
              </div>
          </div>

          <!-- TABLE -->
          <section ng-if="view == 'table'"
                   class="content-card">
              <div class="table-module">
                  <table class="table-basic"
                         id="tableref"
                         ods-results="items"
                         ods-results-context="localctx"
                         ods-results-max="10">
                      <!-- prevent user selection/filters to display a page that is off limits from results (for example: display page 12 of a list of less than 119 items) -->
                      {{ localctx.parameters['start'] =
                      (localctx.nhits - localctx.parameters['start']) &lt;= 0 ? undefined : localctx.parameters['start'] ; '' }}
                      <thead>
                      <tr>
                          <th ng-if="!fieldsList[0].field"
                              ng-repeat="field in fieldsList">{{ localctxfields[field] }}</th>
                          <th ng-if="fieldsList[0].field"
                              ng-repeat="fieldconfig in fieldsList">{{ fieldconfig.label || localctxfields[fieldconfig.field] }}</th>
                          <th ng-if="fieldLink"></th>
                      </tr>
                      </thead>
                      <tbody>
                      <tr ng-repeat="item in items">
                          <td ng-if="!fieldsList[0].field"
                              ng-repeat="field in fieldsList"
                              style="max-width: calc(100vw / {{ fieldsList.length }});"
                              title="{{ localctxfields[field] }}">
                              {{ item.fields[field] }}
                          </td>
                          <td ng-if="fieldsList[0].field"
                              ng-repeat="fieldconfig in fieldsList"
                              style="max-width: calc(100vw / {{ fieldsList.length }});"
                              title="{{ localctxfields[fieldconfig.field] }}">
                            <span ng-switch="fieldconfig.format">
                              <span ng-switch-when="number">
                                {{ item.fields[fieldconfig.field] | number : (fieldconfig.options.precision || 0) }} {{ fieldconfig.options.unit }}
                              </span>
                              <span ng-switch-when="date">
                                {{ item.fields[fieldconfig.field] | date : (fieldconfig.options.dateFormat || 'mediumDate') }}
                              </span>
                              <span ng-switch-default>
                                {{ item.fields[fieldconfig.field] }}
                              </span>
                            </span>
                          </td>
                          <td ng-if="fieldLink">
                              <!-- if fieldLink is a json and contains the 'id' key, it means that the link points to a file hosted on ODS platform and can be downloaded. If it's an external link, the other link tag is used -->
                              <a ng-if="item.fields[fieldLink].id"
                                 href="https://{{ domain }}/explore/dataset/{{ datasetid }}/files/{{ item.fields[fieldLink].id }}/download/"
                                 target="_blank"
                                 title="{{ fieldLinkLabel }}"
                                 class="table-dropdown-button">
                                  <i class="fa fa-external-link"></i>
                              </a>

                              <!-- fieldLink is used here
                                For more advanced scenario, you can send the user to :

                                - the dataset table filtered with the fieldLink value, through a text query
                                href="/explore/dataset/{{ datasetid }}/table?q={{ item.fields[fieldLink] }}"

                                - the dataset table filtered with the fieldLink value, through a refine on the field
                                href="/explore/dataset/{{ datasetid }}/table?refine.{{ fieldLink }}={{ item.fields[fieldLink] }}"

                                - a page using url-sync=true setting :
                                href="/pages/yourpage/?refine.{{ fieldLink }}={{ item.fields[fieldLink] }}"
                                -->

                              <a ng-if="!item.fields[fieldLink].id"
                                 href="{{ item.fields[fieldLink] }}"
                                 target="_blank"
                                 title="{{ fieldLinkLabel }}"
                                 class="table-dropdown-button">
                                  <i class="fa fa-external-link"></i>
                              </a>
                          </td>
                      </tr>
                      </tbody>
                  </table>
              </div>
          </section>
          <ods-pagination-block ng-if="view == 'table'"
                                context="localctx"
                                per-page="10"
                                nofollow="true"
                                container-identifier="tableref">
          </ods-pagination-block>

          <!-- CARDS -->
          <section ng-if="view == 'cards'"
                   class="row">
              <div class="{{ 'col-md-' + (mapView?5:12) }} {{ mapView ? 'map-active':''}}">
                  <ods-infinite-scroll-results context="localctx"
                                               list-class="row row-equal-height listing"
                                               result-class="{{ 'col-md-' + (12/(mapView?1:itemsPerRow)) }} margin-bottom-20"
                                               no-results-message="{{ noResultMsg }}">
                      <div class="content-card"
                           ng-class="{'content-card-horizontal': imagePosition === 'left' }">
                          <div class="content-card-img"
                               ng-if="item.fields[$parent.$parent.$parent.$parent.$parent.fieldPhoto]"
                               style="{{ 'background-image: url(https://' + $parent.$parent.$parent.$parent.$parent.domain + '/explore/dataset/' + $parent.$parent.$parent.$parent.$parent.datasetid + '/files/' + item.fields[$parent.$parent.$parent.$parent.$parent.fieldPhoto].id + '/300/);' }}">
                          </div>
                          <div class="content-card-body">
                              <h2 class="content-card-title text-center">
                                  {{ item.fields[$parent.$parent.$parent.$parent.$parent.cardTitle] }}
                              </h2>
                              <div class="content-card-fields">
                                  <!-- If fieldsList is an array of fields ID -->
                                  <dl ng-if="!$parent.$parent.$parent.$parent.$parent.fieldsList[0].field">
                                      <dt ng-repeat-start="field in $parent.$parent.$parent.$parent.$parent.fieldsList">
                                          {{ $parent.$parent.$parent.$parent.$parent.localctxfields[field] }}
                                      </dt>
                                      <dd ng-repeat-end>
                                          {{ item.fields[field] }}
                                      </dd>
                                  </dl>
                                  <!-- If fieldsList is an object (advanced settings of fields) -->
                                  <dl ng-if="$parent.$parent.$parent.$parent.$parent.fieldsList[0].field">
                                      <dt ng-repeat-start="fieldconfig in $parent.$parent.$parent.$parent.$parent.fieldsList"
                                          ng-show="item.fields[fieldconfig.field]">
                                          {{ (fieldconfig|keys).indexOf('label')>=0?fieldconfig.label : $parent.$parent.$parent.$parent.$parent.localctxfields[fieldconfig.field] }}
                                      </dt>
                                      <dd ng-show="item.fields[fieldconfig.field]"
                                          ng-switch="fieldconfig.format"
                                          ng-repeat-end>
                                            <span ng-switch-when="number">
                                              {{ item.fields[fieldconfig.field] | number : (fieldconfig.options.precision || 0) }} {{ fieldconfig.options.unit }}
                                            </span>
                                                                          <span ng-switch-when="date">
                                              {{ item.fields[fieldconfig.field] | date : (fieldconfig.options.dateFormat || 'mediumDate') }}
                                            </span>
                                                                          <span ng-switch-default>
                                              {{ item.fields[fieldconfig.field] }}
                                            </span>
                                      </dd>
                                  </dl>
                              </div>
                              <div ng-if="$parent.$parent.$parent.$parent.$parent.fieldLink" class="text-center">
                                  <!-- if fieldLink is a json and contains the 'id' key, it means that the link points to a file hosted on ODS platform and can be downloaded. If it's an external link, the other link tag is used -->
                                  <a ng-if="item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink].id"
                                     href="https://{{ $parent.$parent.$parent.$parent.$parent.domain }}/explore/dataset/{{ $parent.$parent.$parent.$parent.$parent.datasetid }}/files/{{ item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink].id }}/download/"
                                     target="_blank"
                                     class="content-card-button">
                                      {{ $parent.$parent.$parent.$parent.$parent.fieldLinkLabel }}
                                  </a>

                                  <!-- fieldLink is used here
                                      For more advanced scenario, you can send the user to :

                                      - the dataset table filtered with the fieldLink value, through a text query
                                      href="/explore/dataset/{{ $parent.$parent.$parent.$parent.$parent.datasetid }}/table?q={{ item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink] }}"

                                      - the dataset table filtered with the fieldLink value, through a refine on the field
                                      href="/explore/dataset/{{ $parent.$parent.$parent.$parent.$parent.datasetid }}/table?refine.{{ $parent.$parent.$parent.$parent.$parent.fieldLink }}={{ item.fields[$root.fieldLink] }}"

                                      - a page using url-sync=true setting :
                                      href="/pages/yourpage/?refine.{{ $parent.$parent.$parent.$parent.$parent.fieldLink }}={{ item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink] }}"
                                      -->
                                  <a ng-if="!item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink].id" href="{{ item.fields[$parent.$parent.$parent.$parent.$parent.fieldLink] }}"
                                     target="_blank"
                                     class="content-card-button">
                                      {{ $parent.$parent.$parent.$parent.$parent.fieldLinkLabel }}
                                  </a>
                              </div>
                          </div>
                      </div>
                  </ods-infinite-scroll-results>
              </div>
              <div ng-if="mapView" class="col-md-7">
                  <ods-map no-refit="false"
                           scroll-wheel-zoom="false">
                      <ods-map-layer-group>
                          <ods-map-layer context="localctx"
                                         color="{{ mapPictoColor }}"
                                         picto="{{ mapPicto }}"
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
              </div>
          </section>


      </ods-dataset-context>
    </ods-dataset-context>

</div>