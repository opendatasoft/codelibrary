<div class="container"
     ng-init="domain = 'mesr.opendatasoft.com';
              datasetid = 'fr-esr-principaux-etablissements-enseignement-superieur';

              filters = ['type_d_etablissement', 'secteur_d_etablissement', 'dep_nom'];

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

              ctxfields = {}
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
  <!-- filters (Filters) : List of field IDs to generate the filters pannel.
NB: the field must be a facet in the dataset
NB: alphanumerical sort is applied in the filter view
ex: ['technique','collection','genre']
-->


  <!-- ### LIST VIEW SETTINGS ### -->
  <!-- view (List view type) : Type of the view to list results, can be 'table' or 'cards'
-->
  <!-- fieldsList (List configuration) : Set the list of field IDs
ex: ['title','category','genre','date']
-->
  <!-- fieldLink (Link to an external resource) : If available, the field ID of some external resource as a web URL
ex: 'link'
-->
  <!-- fieldLinkLabel (The label of that link) : Label of the link button
ex: 'Read more here'
-->

  <!-- Specific to the 'cards' view mode, set a title and a background image if any -->
  <!-- resultTitle (Title of the result) : Field id of the reulst title
ex: 'title'
 -->
  <!-- fieldPhoto (Field id of the image field if any)
ex: 'image'
 -->
  <!-- imagePosition (Image position) : Image position in the card, can be 'top' or 'left'
ex: 'left'
 -->
  <!-- itemsPerRow (Number of columns) : Modify the columns layout. The division by 12 must be a whole number, ie it can be 1, 2, 3, 4, 6 or 12. But 6 and 12 will generaly be two norrow
ex: '3'
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
            {{ agg | number : (kpi.precision || 0) }}
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
                        id="dropdown-button"
                        class="dropdown-button"
                        aria-haspopup="true"
                        aria-expanded="{{ dropdown.open == filter }}">
                  {{ (!select[filter] ? ctxfields[filter] : select[filter] | capitalize) }}
                </button>
                <div class="dropdown-menu"a
                     ng-class="{'dropdown-visible' : dropdown.open == filter }"
                     aria-labelledby="dropdown-button">
                  <div class="dropdown-title">
                    {{ ctxfields[filter] }}
                  </div>
                  <ul class="dropdown-items">
                    <li class="dropdown-item">
                      <label class="dropdown-label">
                        <input ng-model="select[filter]"
                               ng-value="Tous"
                               type="radio"
                               class="dropdown-input" />
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
