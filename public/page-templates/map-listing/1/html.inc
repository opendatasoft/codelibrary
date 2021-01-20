<!-- V1.1 :
    - Add ods-select and multiple choice option for filters
    - Add clear all filter button when one filter is applied
    - responsive display for filters and date button
    - KPI default value to 0 when no data/results to display
  -->

<div class="container"
     ng-init="domain = 'mesr.opendatasoft.com';
                datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

                filters = [
                {'id':'type_d_etablissement','multiple':true},
                {'id':'secteur_d_etablissement','multiple':false},
                {'id':'dep_nom','multiple':true}
                ];
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';

                fieldsList = ['adresse_uai', 'dep_nom', 'numero_telephone_uai'];
                fieldLink = 'url';
                fieldLinkLabel = 'Visiter le site web';

                resultTitle = 'uo_lib';
                itemsPerRow = '2';

                kpis = [
                {
                'title': 'Nombre d\'établissements',
                'function': 'COUNT',
                'faicon': 'graduation-cap'
                }
                ];

                headerBackgroundImage = 'https://images.unsplash.com/photo-1541890289-b86df5bafd81?ixlib=rb-1.2.1&auto=format&fit=crop&w=2828&q=80';
                subtitle = 'Établissements près de chez vous';

                DO_NOT_MODIFY_BELOW;

                ctxfields = {};
                values = {};
                activeFilters = {};
                ">

  <!-- ### GENERAL SETTINGS ### -->
  <!-- domain : (Domain URL) : Must contain the ID of the domain where the dataset is published.
ex: 'discovery.opendatasoft.com'
-->
  <!-- datasetid (Dataset ID) : Must contain the ID of the dataset
ex: 'oeuvres-de-johannes-vermeer'
-->
  <!-- headerBackgroundImage : Use an URL to show a background image in the header.
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
  <!-- fieldsList (List configuration) : Set the list of field IDs
ex: ['title','category','genre','date']
-->
  <!-- fieldLink (Link to an external resource) : If available, the field ID of some external resource as a web URL
ex: 'link'
-->
  <!-- fieldLinkLabel (The label of that link) : Label of the link button
ex: 'Read more here'
-->


  <!-- ### KPIS SETTINGS ### -->
  <!-- KPIS settings is a list of object that describes each KPI
List of available keys are :
- title (Name of the KPI) ex: 'Average # of citizens'
- function (function of the aggregation) ex: 'SUM'
- expression (field id that contains numerical values to aggregate) ex: 'population'
- precision (Decimal precision of the KPI) ex: 2
- unit (KPI unit) ex: 'citizens'
- faicon (FontAwesome icon id) ex: 'square-o'

title, function, expression are MANDATORY
the others are optionnal

Available functions are SUM, AVG, COUNT, STD, MAX, MIN.
Please see the documentation for more information
https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAggregation

Please see all available icons here
https://fontawesome.com/v4.7.0/icons/

ex:
kpis = [
{
'title': 'Taille moyenne',
'function': 'AVG',
'expression': 'surface',
'precision': 2,
'unit': 'm2',
'faicon': 'square-o'
},
{
'title': 'Nombre d\'oeuvre référencées',
'function': 'COUNT'
}
];
-->

  <!-- ### Subtitle ### -->
  <!-- subtitle : "Some texte" -->

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
    <!-- Private datasets can be accessed by adding an API Key.
Add this param to the <ods-dataset-context above,
where XXX is your apikey :
ctx-apikey="XXX"
-->

    <div class="page-header" style="background-image: url({{ headerBackgroundImage }})">
      <h1 class="page-title">
        {{ ctx.dataset.metas.title }}
      </h1>
    </div>

    <!-- Page subtitle -->
    <h2 class="page-subtitle" ng-bind-html="ctx.dataset.metas.description | shortSummary"></h2>

    <span ng-repeat="field in ctx.dataset.fields">
        {{ ctxfields[field.name] = field.label; '' }}
      </span>

    <span ng-repeat="filter in filters">
        {{ ctx.parameters['refine.' + filter.id] = activeFilters[filter.id] ; '' }}
      </span>

    <!-- KPIs -->
    <section class="kpis-container row row-equal-height">
      <div class="{{ 'col-md-' + (12/itemsPerRow) }} margin-bottom-20"
           ng-repeat="kpi in kpis">
        <!-- KPI box component -->
        <div class="kpi-card"
             ods-aggregation="agg"
             ods-aggregation-context="ctx"
             ods-aggregation-function="{{ kpi.function }}"
             ods-aggregation-expression="{{ kpi.expression }}">
          <i class="kpi-icon fa fa-{{ kpi.faicon || 'gitlab' }}" aria-hidden="true"></i>
          <h2 class="kpi-title">
            {{ (agg || 0) | number : (kpi.precision || 0) }}
            <span ng-if="kpi.unit" class="kpi-unit">{{ kpi.unit }}</span>
          </h2>
          <p class="kpi-description">
            {{ kpi.title }}
          </p>
        </div>
      </div>
    </section>



    <!-- Section 1 -->
    <section class="page-section">
      <h2 class="section-title">
        {{ subtitle }}
      </h2>

      <div class="content-card">
        <p class="content-card-description">
          Utilisez les filtres ci-dessus pour affiner votre recherche.
        </p>

        <!-- SEARCH -->
        <div class="search-module">
          <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
          <input placeholder="Rechercher"
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

        <div class="row">
          <div class="col-md-5 col-xs-12">
            <ul class="result-list">
              <li class="result"
                  ng-repeat="item in items"
                  ods-results="items"
                  ods-results-context="ctx"
                  ods-results-max="1000"
                  ng-click="ctx.parameters['refine.' + resultTitle] = (ctx.parameters['refine.' + resultTitle]?undefined:item.fields[resultTitle])">

                <h2 class="result-title">
                  {{ item.fields[resultTitle] }}
                </h2>
                <dl class="result-info">
                  <dt ng-repeat-start="field in fieldsList">
                    {{ ctxfields[field] }}
                  </dt>
                  <dd ng-repeat-end>{{ item.fields[field] }}</dd>
                </dl>
                <div ng-if="fieldLink">
                  <!-- fieldLink is used here
     For more advanced scenario, you can send the user to :

     - the dataset table filtered with the fieldLink value, through a text query
     href="/explore/dataset/{{ datasetid }}/table?q={{ item.fields[fieldLink] }}"

     - the dataset table filtered with the fieldLink value, through a refine on the field
     href="/explore/dataset/{{ datasetid }}/table?refine.{{ fieldLink }}={{ item.fields[fieldLink] }}"

     - a page using url-sync=true setting :
     href="/pages/yourpage/?refine.{{ fieldLink }}={{ item.fields[fieldLink] }}"
     -->
                  <a href="{{ item.fields[fieldLink] }}"
                     target="_blank"
                     class="content-card-button"
                     ng-if="item.fields[fieldLink]">
                    {{ fieldLinkLabel }}
                  </a>
                </div>
              </li>
            </ul>
          </div>

          <div class="col-md-7 col-xs-12">
            <ods-map no-refit="false"
                     scroll-wheel-zoom="false">
              <ods-map-layer-group>
                <ods-map-layer context="ctx"
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
          </div>
        </div>
      </div>
      <a href="{{ ctx.domainUrl }}/explore/dataset/{{ datasetid }}" target="_blank">Accéder aux données source</a>
    </section>
  </ods-dataset-context>
</div>
</div>
