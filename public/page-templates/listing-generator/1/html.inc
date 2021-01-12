    <!-- V2.1 :
        - Add ods-select and multiple choice option for filters
        - Add clear all filter button when one filter is applied
        - responsive display for filters and date button
        - KPI default value to 0 when no data/results to display
      -->
    <!-- V2.0 :
      - add a date field that display a date range slider
      - download link knows support files hosted on ODS
      - dynamic title / descriptiton / access source link from the context
    -->

    <div class="container"
         ng-init="domain = 'discovery.opendatasoft.com';
                datasetid = 'oeuvres-de-johannes-vermeer';

                filters = [
                {'id':'technique','multiple':true},
                {'id':'collection','multiple':true},
                {'id':'genre','multiple':true}
                ];
                fieldDate = '';
                resetFiltersButton = true;
                resetFiltersButtonLabel = 'Supprimer tous les filtres';
                fieldDefaultRangeStartsNow = true;

                view = 'cards';
                fieldsList = ['titre','collection','genre','format','date'];
                fieldLink = 'wikipedia';
                fieldLinkLabel = 'Lire l\'article';

                cardTitle = 'titre';
                fieldPhoto = 'image';
                imagePosition = 'left';
                itemsPerRow = '2';

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

                DO_NOT_MODIFY_BELOW;

                ctxfields = {};
                values = {};
                activeFilters = {};
                ">
        <!-- ### GENERAL SETTINGS ### -->
        <!-- domain : (Domain URL) : Must contain the URL of the domain where the dataset is published.
         ex: 'discovery.opendatasoft.com'
        -->
        <!-- datasetid (Dataset ID) : Must contain the ID of the dataset
         ex: 'oeuvres-de-johannes-vermeer'
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

        <!-- ### DATE SETTINGS -->
        <!-- fieldDate : a date type field to display a date-range-slider -->
        <!-- resetFiltersButton : reset date period button true/false -->
        <!-- fieldDefaultRangeStartsNow : false make the default range selection start from the first date, and end to the last date, if set to true, the range starts from now, to the last date -->

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
        <!-- cardTitle (Title of the card) : Field id of the card title
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

        <!-- MUST READ

        A common error is forget to protect commas with a leading backslash, as commas are used to declare values of variable it will break the settings
        wrongVariable = 'I'll be freed from commas'
        correctVariable = 'I\'ll be freed from commas'
    -->

        <!-- DO NOT MODIFY -->
        <!-- Technical fields, do not modify please -->


        <ods-dataset-context context="ctx,ctxdate"
                             ctx-domain="{{ domain }}"
                             ctx-dataset="{{ datasetid }}"
                             ctxdate-domain="{{ domain }}"
                             ctxdate-dataset="{{ datasetid }}"
                             ctxdate-parameters=customParameters>
            <!-- Private datasets can be accessed by adding an API Key.
                  Add this param to the <ods-dataset-context above,
                  where XXX is your apikey :
                    ctx-apikey="XXX"
                -->

            <span ng-if="fieldDefaultRangeStartsNow">
        {{ctxdate.parameters={'q.date': fieldDate + '&gt;#now()'};''}}
      </span>

            <h1 class="page-title">
                {{ ctx.dataset.metas.title }}
            </h1>

            <p class="page-subtitle" ng-bind-html="ctx.dataset.metas.description | shortSummary"></p>

            <span ng-repeat="field in ctx.dataset.fields">
        {{ ctxfields[field.name] = field.label; '' }}
      </span>

            <span ng-repeat="filter in filters">
        {{ ctx.parameters['refine.' + filter.id] = activeFilters[filter.id] ; '' }}
      </span>

            <div class="content-card search-module-container">
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

                <!-- FILTERS Search & Select -->
                <div class="filter-list"
                     ng-init="dropdown.open = '';
                      select = {}">
                    <div ng-repeat="filter in filters">
                        {{ ctx.parameters['disjunctive.' + filter.id] = true; '' }}
                        <div ods-facet-results="categories"
                             ods-facet-results-facet-name="{{ filter.id }}"
                             ods-facet-results-context="ctx"
                             ods-facet-results-sort="alphanum">
                            <ods-select ng-if="categories"
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
                          ods-analysis-context="ctxdate"
                          ods-analysis-x-year="{{ fieldDate }}.year"
                          ods-analysis-x-month="{{ fieldDate }}.month"
                          ods-analysis-x-day="{{ fieldDate }}.day"
                          ods-analysis-serie-c="COUNT()"
                          ods-analysis-sort="x.{{ fieldDate }}.year,x.{{ fieldDate }}.month,x.{{ fieldDate }}.day">
            <span ng-if="dateminmax.results">
              {{ values['periode']['min'] = dateminmax.results[0].x.year + '-' + (10 > dateminmax.results[0].x.month?'0':'') + dateminmax.results[0].x.month + '-' + (10 > dateminmax.results[0].x.day?'0':'') + dateminmax.results[0].x.day;
              values['periode']['max'] = dateminmax.results[dateminmax.results.length-1].x.year + '-' + (10 > dateminmax.results[dateminmax.results.length-1].x.month?'0':'') + dateminmax.results[dateminmax.results.length-1].x.month + '-' + (10 > dateminmax.results[dateminmax.results.length-1].x.day?'0':'') + dateminmax.results[dateminmax.results.length-1].x.day;
              ''}}
            </span>
          </span>

                    <!-- Affichage du range slider: les dates récupérées dans l'analyse pour initialiser les bounds
                                         la sélection période par défaut avec le mois + 1
                                         le min/maxselection qui correspondent aux bornes choisies par le user -->

                    <ods-date-range-slider ng-if="values.periode.min && values.periode.max"
                                           context="ctx"
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
                    <div ng-if="resetFiltersButton" class="filter-date-button"
                         ng-class="{'filter-date-button-disabled':
                         values.periode.minselection == values.periode.min &&
                         values.periode.maxselection == values.periode.max}"
                         ng-click="values.periode.minselection = values.periode.min;
                         values.periode.maxselection = values.periode.max">
                        Toute la période <i class="fa fa-arrows-h" aria-hidden="true"></i>
                    </div>

                </div>

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


                <!-- TABLE -->
                <section ng-if="view == 'table'"
                         class="content-card">
                    <div class="table-module">
                        <table class="table-basic"
                               ods-results="items"
                               ods-results-context="ctx"
                               ods-results-max="20">
                            <thead>
                            <tr>
                                <th ng-repeat="field in fieldsList">{{ ctxfields[field] }}</th>
                                <th ng-if="fieldLink"></th>
                            </tr>
                            </thead>
                            <tbody>
                            <tr ng-repeat="item in items">
                                <td ng-repeat="field in fieldsList"
                                    style="max-width: calc(100vh / {{ fieldsList.length }});"
                                    title="{{ item.fields[field] }}">
                                    {{ item.fields[field] }}
                                </td>
                                <td ng-if="fieldLink">
                                    <a href="{{ item.fields[fieldLink] }}"
                                       tilte="{{ fieldLinkLabel }}"
                                       target="_blank"
                                       class="table-dropdown-button">
                                        <i class="fa fa-external-link"></i>
                                    </a>
                                </td>
                            </tr>
                            </tbody>
                        </table>
                    </div>
                </section>


                <!-- CARDS -->
                <section ng-if="view == 'cards'">
                    <div class="row row-equal-height"
                         ods-results="items"
                         ods-results-context="ctx"
                         ods-results-max="{{ 8 * itemsPerRow }}">
                        <div ng-repeat="item in items"
                             class="{{ 'col-md-' + (12/itemsPerRow) }} margin-bottom-20">
                            <div class="content-card"
                                 ng-class="{'content-card-horizontal': imagePosition === 'left' }">
                                <div class="content-card-img"
                                     ng-if="item.fields[fieldPhoto]"
                                     style="{{ 'background-image: url(https://' + domain + '/explore/dataset/' + datasetid + '/files/' + item.fields[fieldPhoto].id + '/300/);' }}">
                                </div>
                                <div class="content-card-body">
                                    <h2 class="content-card-title text-center">
                                        {{ item.fields[cardTitle] }}
                                    </h2>
                                    <div class="content-card-fields">
                                        <dl>
                                            <dt ng-repeat-start="field in fieldsList">{{ ctxfields[field] }}</dt>
                                            <dd ng-repeat-end>{{ item.fields[field] }}</dd>
                                        </dl>
                                    </div>
                                    <div ng-if="fieldLink" class="text-center">
                                        <!-- if fieldLink is a json and contains the 'id' key, it means that the link points to a file hosted on ODS platform and can be downloaded. If it's an external link, the other link tag is used -->
                                        <a ng-if="item.fields[fieldLink].id"
                                           href="https://{{ domain }}/explore/dataset/{{ datasetid }}/files/{{ item.fields[fieldLink].id }}/download/"
                                           target="_blank"
                                           class="content-card-button">
                                            {{ fieldLinkLabel }}
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
                                        <a ng-if="!item.fields[fieldLink].id" href="{{ item.fields[fieldLink] }}"
                                           target="_blank"
                                           class="content-card-button">
                                            {{ fieldLinkLabel }}
                                        </a>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </section>

                <a href="https://{{ domain }}/explore/dataset/{{ datasetid }}/"
                   target="_blank"
                   class="margin-bottom-20">Accéder aux données source</a>
        </ods-dataset-context>
    </div>
