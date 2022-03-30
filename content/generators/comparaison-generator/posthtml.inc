

                DO_NOT_MODIFY_BELOW;

                selected1 = {};
                selected2 = {};
                selectionRefFinale = '';
                selectionCompareFinale = {};
                ">
    <!--

    -->

    <!-- ### GENERAL SETTINGS ### -->
    <!-- domain (Domain URL): Must contain the URL of the domain where the dataset is published.
     ex: 'public.opendatasoft.com'
    -->
    <!-- datasetid (Dataset ID): Must contain the ID of the dataset
     ex: 'healthref-france-finess'
    -->
    <!-- compareType: Must contain the type of comparison you want to do. 
            Can be multiFields (to do a comparison based on a serie of fields, for example geographical levels or category and sub-category) or singleField (to do a comparison based on a single field).
     ex: 'multiFields'
    -->

        <!-- defaultLevel: the title you want to display when no filter is selected -->


    <!-- ### FILTERS SETTINGS ### -->
    <!-- IF_COMPARE_BY_MULTIFIELDS -->
    <!-- fields : List of fields available on the comparison filters, and their corresponding field id in the dataset.
        You can put as many fields as you have available on your dataset.
        List of parameters are :
        - name (label of the filter to be display on the filter list) ex: 'Region'
        - idField (id of the field containing the id of the filter) ex: 'reg_code'. can be the same as the labelField.
        - labelField (id of the field containing the label of the filter) ex: 'reg_name'
        NB: the field must be a facet in the dataset
        NB: alphanumerical sort is applied in the filter view
        ex: 
        fields = [
                        {
                            name:'Région',idField:'reg_code',labelField:'reg_name'
                        },
                        {
                            name:'Département',idField:'dep_code',labelField:'dep_name'
                        },
                        {
                            name:'EPCI',idField:'epci_code',labelField:'epci_name'
                        },
                        {
                            name:'Commune',idField:'com_code',labelField:'com_name'
                        }
                ]
    -->

        <!-- resetFiltersButtonLabel (Label of the button) : test to display when a filter is selected
         ex: 'Clear all filters'
    -->

    <!-- IF_COMPARE_BY_SINGLEFIELD -->
    <!--filterFieldId: id of the field containing the id of the filter field;
        filterFieldLabel: id of the field containing the label of the filter field;
        filterFieldId and filterFieldLabel can have the same id.
        ex:  filterFieldId = 'categetab';
             filterFieldLabel = 'libcategetab'
    -->

    <!--defaultValue: default selected value you want to set up on the filter;
       ex:  defaultValue = '44';
       WARNING: must be the value of the filterFieldId and NOT the filterFieldLabel, if they are different.
   -->

    <!-- filterPlaceholder: placeholder text for the filter -->

    <!-- ### KPIS SETTINGS ### -->
    <!-- KPIS settings is a list of object that describes each KPI
    List of available keys are:
    - title (string) : mandatory, name of the KPI, ex: ‘City population’
    - select (string) : mandatory, API V2 select, containing the calculation to perform, ex: ‘sum(population)’ or ‘count(*)’
    - precision (string) : optional, decimal precision of the KPI, ex: 2
    - unit (string) : optional, KPI unit, ex: ‘citizens’
    - faicon (string) : optional, FontAwesome icon id, ex: ‘square-o’ (omit the fa- prefix) 

    Please see the documentation for more information regarding the select
    https://help.opendatasoft.com/apis/ods-explore-v2/#section/Opendatasoft-Query-Language-(ODSQL)

    Please see all available icons here
    https://fontawesome.com/v4/icons/

    ex:
    kpis = [
              {
                  'title': 'Nombre d\'établissements',
                  'select': 'count(*)',
                  'precision': 0,
                  'unit': '',
                  'faicon': 'square-o'
              },
              {
                  'title': 'Taille moyenne',
                  'select': 'avg(surface)',
                  'precision': 2,
                  'unit': 'm2',
                  'faicon': 'square-o'
              }
           ];
-->

    <!-- ### CHARTS SETTINGS ### -->
    <!-- 2 dispositions are available: pyramid (custom css chart) and classic (ods-chart).
         Each disposition has specific parameters-->
    <!-- Pyramid disposition.
     List of available parameters are :
     - disposition (pyramid or classic) ex:'pyramid'
     - title (title of the chart) ex: 'Répartition par mode de fixation des tarifs'
     - xAxis (id of the field for the X axis) ex: 'libmft'
     - label (label of the serie) ex:'Nombre d\'établissements'
     - select (function for the serie) ex:'COUNT(*)'

    disposition, title, xAxis, select are MANDATORY
    label is optionnal

    Available values for select are AVG, COUNT, MIN, MAX, STDDEV, SUM.
    Please see the documentation for more information
    https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsAnalysis

    ex:
    charts = [
                { 
                'disposition':'pyramid',
                'title':'Répartition par mode de fixation des tarifs',
                'xAxis':'libmft',
                'label':'Nombre d\'établissements',
                'select':'COUNT(*)'
                }
            ]
    -->
    <!-- Classic disposition.
 List of available parameters are :
 - disposition (pyramid or classic) ex:'classic'
 - title (title of the chart) ex: 'Date d\ouverture'
 - xAxis (id of the field for the X axis) ex: 'dateouv'
 - label (label of the serie) ex:'Nombre d\'établissements'
 - type (type of chart) ex: 'line'
 - function (function for the serie) ex:'SUM'
 - expression (field id that contains numerical values to use for the serie) ex: 'population'
 - sort (rule to sort the data, empty for default order or serie1-1 to order by serie) ex:'serie1-1'
 - maxPoints (max number of points to display on the X axis) ex:'20'
 - displayValues (can be true or false, if true: values are displayed on the serie): ex:'true'

disposition, title, xAxis, select are MANDATORY
label is optionnal

Available values for type are line, spline, area, areaspline, column, bar, pie, scatter, polar, spiderweb, funnel, arearange, areasplinerange, columnrange

Available values for function are COUNT, AVG, MIN, MAX, STDDEV, SUM, QUANTILES, CONSTANT

Please see the documentation for more information
https://help.opendatasoft.com/widgets/#/api/ods-widgets.directive:odsChartSerie

ex:
charts = [
            {
            'disposition':'classic',
            'title':'Participation au service public hospitalier',
            'xAxis':'libsph',
            'type':'bar',
            'function':'COUNT',
            'maxPoints':'20',
            'displayValues':'true',
            'label':'Nombre d\'établissements',
            'sort':'serie1-1',
            'expression':''
            }
        ]
-->

    <!-- DO NOT MODIFY -->
    <!-- Technical fields, do not modify please -->

    <ods-dataset-context context="ctxref,ctxcompare,ctx1,ctx2,context0,context1,context2,context3,contextcompare0,contextcompare1,contextcompare2,contextcompare3"
                         ctxref-dataset="{{datasetid}}"
                         ctxref-domain="{{domain}}"

                         ctxcompare-dataset="{{datasetid}}"
                         ctxcompare-domain="{{domain}}"

                         ctx1-dataset="{{datasetid}}"
                         ctx1-domain="{{domain}}"

                         ctx2-dataset="{{datasetid}}"
                         ctx2-domain="{{domain}}"

                         context0-dataset="{{datasetid}}"
                         context0-domain="{{domain}}"
                         context1-dataset="{{datasetid}}"
                         context1-domain="{{domain}}"
                         context2-dataset="{{datasetid}}"
                         context2-domain="{{domain}}"
                         context3-dataset="{{datasetid}}"
                         context3-domain="{{domain}}"

                         contextcompare0-dataset="{{datasetid}}"
                         contextcompare0-domain="{{domain}}"
                         contextcompare1-dataset="{{datasetid}}"
                         contextcompare1-domain="{{domain}}"
                         contextcompare2-dataset="{{datasetid}}"
                         contextcompare2-domain="{{domain}}"
                         contextcompare3-dataset="{{datasetid}}"
                         contextcompare3-domain="{{domain}}"
    >

        <span ng-if="refineField">
            {{ctxref.parameters['refine.' + refineField] = refineValue; 
            ctxcompare.parameters['refine.' + refineField] = refineValue; 
            ctx1.parameters['refine.' + refineField] = refineValue; 
            ctx2.parameters['refine.' + refineField] = refineValue;  ""}}
        </span>

        <div ods-results="results1" ods-results-context="ctx1" ods-results-max="10">
            <div ods-results="results2" ods-results-context="ctx2" ods-results-max="10">
                <h1 class="page-title">
                    {{ pageTitle }}
                </h1>
                <p class="page-subtitle">
                    {{ pageSubtitle }}
                </p>
                <section class="filterbloc">
    <h2 class="filterbloc-title">{{filterTitle}}</h2>
    <div class="filter-list" ng-if="compareType == 'multiFields'">
        <div class="filter-box select-left">
            <h4 class="filter-title">
                {{referenceFitlerTitle}}
            </h4>
            <div class="ods-selects">
                <div ng-repeat="(i, fieldname) in fields">
                    <div ods-adv-analysis="list1"
                         ods-adv-analysis-context="{{ 'context' + i }}"
                         ods-adv-analysis-select="count(*)"
                         ods-adv-analysis-group-by="{{fieldname.idField}},{{fieldname.labelField}}"
                         ods-adv-analysis-order-by="{{fieldname.labelField}}" ods-adv-analysis-limit="300">
                        <ods-select selected-values="selected1[fieldname.name]"
                                    placeholder="{{ fieldname.placeholder }}"
                                    label-modifier="{{fieldname.labelField}}"
                                    value-modifier="{'code':{{fieldname.idField}},'name':{{fieldname.labelField}}}"
                                    options="list1"
                                    multiple="false"
                                    is-loading="true"></ods-select>

                        <span ng-repeat="(j, fake) in fields">
                            <span ng-if="i != j">
                                {{
                                $parent.$parent.$parent.$parent['context' + j].parameters['refine.' + fieldname.idField] =
                                ctx1.parameters['refine.' +fieldname.idField] =
                                (selected1[fieldname.name] | toObject:'code' | keys);""
                                }}
                            </span>
                        </span>
                    </div>
                   
                </div>
                <div class="clear-filters" ng-if="selected1[fields[3].name].length > 0 || 
                    selected1[fields[2].name].length > 0 ||
                    selected1[fields[1].name].length > 0 ||
                    selected1[fields[0].name].length > 0">
                <button class="clear-filters-button"
                    ng-click="
                    selected1[fields[3].name].length = 0;
                    selected1[fields[2].name].length = 0;
                    selected1[fields[1].name].length = 0;
                    selected1[fields[0].name].length = 0;">
                        {{resetFiltersButtonLabel}}
                    </button>
                    <i class="fa fa-times-circle" aria-hidden="true"></i>

                </div>
            </div>
        </div>

        <div class="filter-box select-right">
            <h4 class="filter-title">
                {{compareFilterTitle}}
            </h4>
            <div class="ods-selects">
                            <div ng-repeat="(i, fieldname) in fields">
                    <div ods-adv-analysis="list2"
                         ods-adv-analysis-context="{{ 'contextcompare' + i }}"
                         ods-adv-analysis-select="count(*)"
                         ods-adv-analysis-group-by="{{fieldname.idField}},{{fieldname.labelField}}"
                         ods-adv-analysis-order-by="{{fieldname.labelField}}" ods-adv-analysis-limit="300">
                        <ods-select selected-values="selected2[fieldname.name]"
                                    placeholder="{{  fieldname.placeholder }}"
                                    label-modifier="{{fieldname.labelField}}"
                                    value-modifier="{'code':{{fieldname.idField}},'name':{{fieldname.labelField}}}"
                                    options="list2"
                                    multiple="false"
                                    is-loading="true"></ods-select>

                        <span ng-repeat="(j, fake) in fields">
                            <span ng-if="i != j">
                                {{
                                $parent.$parent.$parent.$parent['contextcompare' + j].parameters['refine.' + fieldname.idField] =
                                ctx2.parameters['refine.' +fieldname.idField] =
                                (selected2[fieldname.name] | toObject:'code' | keys );""
                                }}
                            </span>
                        </span>
                    </div>
                </div>
                <div class="clear-filters" ng-if="
                selected2[fields[3].name].length > 0 ||
                selected2[fields[2].name].length > 0 ||
                selected2[fields[1].name].length > 0 ||
                selected2[fields[0].name].length > 0">
                <button class="clear-filters-button" 
                ng-click="
                selected2[fields[3].name].length = 0;
                selected2[fields[2].name].length = 0;
                selected2[fields[1].name].length = 0;
                selected2[fields[0].name].length = 0;">
                {{resetFiltersButtonLabel}}
                </button>
                <i class="fa fa-times-circle" aria-hidden="true"></i>
            </div>
            </div>
        </div>
    </div>
    <div class="filter-list" ng-if="compareType == 'singleField'">
        <div class="filter-box">
            <h4 class="filter-title">
                {{referenceFitlerTitle}}
            </h4>
            <div ods-adv-analysis="reflist" ods-adv-analysis-context="ctxref"
                 ods-adv-analysis-select="count(*) as y_axis"
                 ods-adv-analysis-group-by="{{filterFieldId}} as x_axis_id, {{filterFieldLabel}} as x_axis_label"
                 ods-adv-analysis-order-by="y_axis">
                <span ng-if="!defaultValue">
                    <ods-select options="reflist" selected-values="selectionRefFinale" label-modifier="x_axis_label"
                                value-modifier="x_axis_id" placeholder="{{filterPlaceholder}}">
                    </ods-select>
                    {{ctx1.parameters['refine.' + filterFieldId] = selectionRefFinale ; ""}}
                </span>
                <span ng-if="defaultValue">
                    <ods-select options="reflist" selected-values="selectionRefFinale"
                                label-modifier="x_axis_label" value-modifier="x_axis_id"
                                placeholder="{{filterPlaceholder}}">
                    </ods-select>
                    {{selectionRefFinale == 0 ? selectionRefFinale = defaultValue : '' ; ""}}
                    {{ctx1.parameters['refine.' + filterFieldId] = selectionRefFinale ; ""}}
                </span>

            </div>
        </div>
        <div class="filter-box">
            <h4 class="filter-title">
                {{compareFilterTitle}}
            </h4>
            <div ods-adv-analysis="comparelist" ods-adv-analysis-context="ctxcompare"
                 ods-adv-analysis-select="count(*) as y_axis"
                 ods-adv-analysis-group-by="{{filterFieldId}} as x_axis_id, {{filterFieldLabel}} as x_axis_label"
                 ods-adv-analysis-order-by="y_axis">
                <span ng-if="!defaultValue">
                    <ods-select options="comparelist" selected-values="selectionCompareFinale"
                                label-modifier="x_axis_label" value-modifier="x_axis_id"
                                placeholder="{{filterPlaceholder}}">
                    </ods-select>
                    {{ctx2.parameters['refine.' + filterFieldId] = selectionCompareFinale ; ""}}
                </span>
                <span ng-if="defaultValue">
                    <ods-select options="comparelist" selected-values="selectionCompareFinale"
                                label-modifier="x_axis_label" value-modifier="x_axis_id"
                                placeholder="{{filterPlaceholder}}">
                    </ods-select>
                    {{selectionCompareFinale == 0 ? selectionCompareFinale = defaultValue : '' ; ""}}
                    {{ctx2.parameters['refine.' + filterFieldId] = selectionCompareFinale ; ""}}
                    {{ctx2.parameters}}
                </span>
            </div>
        </div>
    </div>
</section>

<!-- {{ctx1.parameters}} // {{ctx2.parameters}}  -->                <div ods-facet-results="items1" ods-facet-results-context="ctx1"
                     ods-facet-results-facet-name="{{filterFieldLabel}}">
                    <div ods-facet-results="items2" ods-facet-results-context="ctx2"
                         ods-facet-results-facet-name="{{filterFieldLabel}}">
                        <section class="box-container" ng-repeat="kpi in kpis">
  <div class="row row-equal-height" ods-adv-analysis="kpi1" ods-adv-analysis-context="ctx1" ods-adv-analysis-select="{{ kpi.select }} as x">
    <div class="col-md-4">
      <!-- KPI box component -->
      <div class="kpi-card">
        <i ng-if="kpi.faicon" class="kpi-icon fa fa-{{ kpi.faicon }}" aria-hidden="true"></i>
        <p class="kpi-title left">
          {{ (kpi1[0].x || 0) | number : (kpi.precision || 0) }}         
           <span ng-if="kpi.unit" class="kpi-unit left">{{ kpi.unit }}</span>
        </p>
        <p class="kpi-description">
          {{ kpi.title }}
        </p>
        <p class="kpi-subtitle"
          ng-if="compareType == 'multiFields'">
          {{ selected1[fields[3].name][0].name ||
            selected1[fields[2].name][0].name ||
            selected1[fields[1].name][0].name ||
            selected1[fields[0].name][0].name || defaultLevel }}</p>
        
        <p class="kpi-subtitle" ng-if="ctx1.parameters['refine.' + filterFieldId].length >0">
          {{results1[0].fields[filterFieldLabel]}}</p>
          <p class="kpi-subtitle" ng-if="ctx1.parameters['refine.' + filterFieldId].length ==0 && compareType=='singleField'">
            {{defaultLevel}}</p>
      </div>
    </div>
    <div class="col-md-4"  ods-adv-analysis="kpi2" ods-adv-analysis-context="ctx2" ods-adv-analysis-select="{{ kpi.select }} as x">
      <!-- KPI box component -->
      <div class="kpi-card">
        <i ng-if="kpi.faicon" class="kpi-icon fa fa-{{ kpi.faicon }}" aria-hidden="true"></i>
        <p class="kpi-title right">
          {{ (kpi2[0].x || 0) | number : (kpi.precision || 0) }}         
          <span ng-if="kpi.unit" class="kpi-unit right">{{ kpi.unit }}</span>
        </p>
        <p class="kpi-description">
          {{ kpi.title }}
        </p>
        <p class="kpi-subtitle"
          ng-if="compareType == 'multiFields'">
          {{ selected2[fields[3].name][0].name ||
            selected2[fields[2].name][0].name ||
            selected2[fields[1].name][0].name ||
            selected2[fields[0].name][0].name || defaultLevel }}</p>
        <p class="kpi-subtitle" ng-if="ctx2.parameters['refine.' + filterFieldId].length >0">
          {{results2[0].fields[filterFieldLabel]}}</p>
          <p class="kpi-subtitle" ng-if="ctx2.parameters['refine.' + filterFieldId].length ==0 && compareType=='singleField'">
            {{defaultLevel}}</p>

        <p class="kpi-compare right">
          {{ ((kpi2[0].x - kpi1[0].x )/kpi1[0].x )*100 > 0 ? '+' : '' }}{{ (((kpi2[0].x -kpi1[0].x )/kpi1[0].x )*100|| 0) | number : 2 }}%
        </p>
        <span style="font-style: italic;">par rapport à </span>
        <p class="kpi-compare-subtitle" ng-if="ctx1.parameters['refine.' + levelRefSelectedId].length >0"><span
            ng-repeat="item1 in items1"> {{item1.name}}{{$last ? '' : ' + '}} </span></p>
        <p class="kpi-compare-subtitle"
          ng-if="compareType == 'multiFields'">
          {{ selected1[fields[3].name][0].name ||
            selected1[fields[2].name][0].name ||
            selected1[fields[1].name][0].name ||
            selected1[fields[0].name][0].name || defaultLevel }}</p>
        <p class="kpi-compare-subtitle" ng-if="ctx1.parameters['refine.' + filterFieldId].length >0">
          {{results1[0].fields[filterFieldLabel]}}</p>
          <p class="kpi-compare-subtitle" ng-if="ctx1.parameters['refine.' + filterFieldId].length ==0 && compareType=='singleField'">
            {{defaultLevel}}</p>
      </div>
    </div>
  </div>
</section>                        <div style="text-align: right; width: 100%">
                            <a href="https://{{ domainid }}/explore/dataset/{{ datasetid }}/"
                               target="_blank">Accéder
                                aux données sources</a>
                        </div>
                        <span ng-repeat="chart in charts">
                                    <span ng-if="chart.disposition=='pyramid'">
                                        <section class="page-section" ng-init="pyramid = {'analysisref':undefined,
                            'analysiscompare':undefined,
                            'orderref':{},
                            'ordercompare':{},
                            'defaultorder':'orderref'}">

    <div class="box-container">
        <div class="chart-card">
            <h2>{{chart.title}}</h2>
            <span ods-adv-analysis="analysisref" ods-adv-analysis-context="ctx1"
                ods-adv-analysis-group-by="{{chart.xAxis}}" ods-adv-analysis-select="{{chart.select}} as counttotal"
                ods-adv-analysis-order-by="{{chart.select}} DESC">
                <div ods-subaggregation="analysisref" ods-subaggregation-serie-max="MAX(counttotal)">

                    {{ pyramid['maxref'] = results[0].max; '' }}
                </div>

                {{ pyramid.analysisref = analysisref ; '' }}
            </span>
            <span ods-adv-analysis="analysiscompare" ods-adv-analysis-context="ctx2"
                ods-adv-analysis-group-by="{{chart.xAxis}}" ods-adv-analysis-select="{{chart.select}} as counttotal"
                ods-adv-analysis-order-by="{{chart.select}} DESC">
                <div ods-subaggregation="analysiscompare" ods-subaggregation-serie-max="MAX(counttotal)">
                    {{ pyramid['maxcompare'] = results[0].max; '' }}
                </div>

                {{ pyramid.analysiscompare = analysiscompare ; '' }}
            </span>
            <span ng-if="pyramid['maxref'] && pyramid['maxcompare']">
                {{ pyramid['max'] =
                (pyramid['maxcompare']>pyramid['maxref']?pyramid['maxcompare']:pyramid['maxref']); '' }}
            </span>

            <p ng-if="pyramid.defaultorder == 'orderref'" ng-repeat="(i,item) in pyramid.analysisref">
                {{ pyramid.order[item[chart.xAxis]] = i+1; '' }}
            </p>
            <p ng-if="pyramid.defaultorder == 'ordercompare'" ng-repeat="(i,item) in pyramid.analysiscompare">
                {{ pyramid.order[item[chart.xAxis]] = i+1; '' }}
            </p>

            <!--Custom Left/Right Graph here
    ========================================================================== -->

            <div class="custom-graph">
                <div class="custom-graph-body">
                    <div class="custom-graph-block">
                        <div class="custom-graph-header header-left left">
                            <h3 class="custom-graph-title">
                                <span ng-if="compareType=='multiFields'"> {{ selected1[fields[3].name][0].name ||
                                    selected1[fields[2].name][0].name ||
                                    selected1[fields[1].name][0].name ||
                                    selected1[fields[0].name][0].name || defaultLevel }}
                                </span>
                                <span ng-if="ctx1.parameters['refine.' + filterFieldId].length >0">
                                    {{results1[0].fields[filterFieldLabel]}}</span>
                                <span
                                    ng-if="ctx1.parameters['refine.' + filterFieldId].length ==0 && compareType=='singleField'">
                                    {{defaultLevel}}</span>
                            </h3>
                            <h4>{{chart.label}}</h4>
                        </div>
                        <div class="custom-graph-content-left">
                            <div class="custom-graph-item" ng-repeat="itemleft in pyramid.analysisref"
                                ng-if="pyramid.order[itemleft[chart.xAxis]]<=10" style="grid-row: {{ pyramid.order[itemleft[chart.xAxis]] }} ;
                                    grid-column:1">
                                <h5 class="custom-graph-item-title">
                                    {{ itemleft[chart.xAxis] }}
                                </h5>
                                <div class="custom-graph-progress-container">
                                    <div class="custom-graph-progress background-left"
                                        style="width: {{ 100 * itemleft.counttotal / pyramid.max }}%">
                                        <span class="custom-graph-progress-value">
                                            {{ itemleft.counttotal | number }}
                                        </span>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>

                    <div class="custom-graph-separator"></div>
                    <div class="custom-graph-block">
                        <div class="custom-graph-header header-right right">
                            <h3 class="custom-graph-title">
                                <span ng-if="compareType=='multiFields'"> {{ selected2[fields[3].name][0].name ||
                                    selected2[fields[2].name][0].name ||
                                    selected2[fields[1].name][0].name ||
                                    selected2[fields[0].name][0].name || defaultLevel }}</span>
                                <span ng-if="ctx2.parameters['refine.' + filterFieldId].length >0">
                                    {{results2[0].fields[filterFieldLabel]}}</span>
                                <span
                                    ng-if="ctx2.parameters['refine.' + filterFieldId].length ==0 && compareType=='singleField'">
                                    {{defaultLevel}}</span>
                            </h3>
                            <h4>{{chart.label}}</h4>
                        </div>
                        <div class="custom-graph-content-right">
                            <div class="custom-graph-item" ng-repeat="itemright in pyramid.analysiscompare"
                                ng-if="pyramid.order[itemright[chart.xAxis]]<=10" style="grid-row: {{ pyramid.order[itemright[chart.xAxis]] }} ;
                                    grid-column:1">
                                <h5 class="custom-graph-item-title">
                                    {{ itemright[chart.xAxis] }}
                                </h5>
                                <div class="custom-graph-progress-container">
                                    <div class="custom-graph-progress background-right"
                                        style="width: {{ 100 * itemright.counttotal / pyramid.max }}%">
                                        <span class="custom-graph-progress-value">
                                            {{ itemright.counttotal | number }}
                                        </span>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</section>                                    </span>
                                    <span ng-if="chart.disposition=='classic'">
                                        <div class="box-container">
    <div class="chart-card">
        <h2>{{chart.title}}</h2>
        <ods-chart ng-if="compareType=='multiFields'" align-month="true" single-y-axis="true" labels-x-length="25">
            <ods-chart-query context="ctx1" field-x="{{chart.xAxis}}" maxpoints="{{chart.maxPoints}}"
                sort="{{chart.sort}}">
                <ods-chart-serie label-y="{{ chart.label + ' - ' + (selected1[fields[3].name][0].name ||
                selected1[fields[2].name][0].name ||
                selected1[fields[1].name][0].name ||
                selected1[fields[0].name][0].name ||defaultLevel ) }}" expression-y="{{chart.xAxis}}" chart-type="{{chart.type}}"
                    function-y="{{chart.function}}" color="#08A8AB" scientific-display="true"
                    display-values="{{chart.displayValues}}" logarithmic="true">
                </ods-chart-serie>
            </ods-chart-query>
            <ods-chart-query context="ctx2" field-x="{{chart.xAxis}}" maxpoints="{{chart.maxPoints}}" sort="{{chart.sort}}">
                <ods-chart-serie label-y="{{ chart.label + ' - ' + (selected2[fields[3].name][0].name ||
                selected2[fields[2].name][0].name ||
                selected2[fields[1].name][0].name ||
                selected2[fields[0].name][0].name || defaultLevel) }}" expression-y="{{chart.xAxis}}" chart-type="{{chart.type}}"
                    function-y="{{chart.function}}" color="#D5AC00" scientific-display="true"
                    display-values="{{chart.displayValues}}" logarithmic="true">
                </ods-chart-serie>
            </ods-chart-query>
        </ods-chart>
        <ods-chart ng-if="compareType=='singleField'" align-month="true" single-y-axis="true" labels-x-length="25">
            <ods-chart-query context="ctx1" field-x="{{chart.xAxis}}" maxpoints="{{chart.maxPoints}}"
                sort="{{chart.sort}}">
                <ods-chart-serie label-y="{{ chart.label + ' - ' + ((items1 | toObject : 'name' | keys).length == 1 ? (items1 | toObject : 'name' | keys) : defaultLevel) }}" expression-y="{{chart.xAxis}}" chart-type="{{chart.type}}"
                    function-y="{{chart.function}}" color="#08A8AB" scientific-display="true"
                    display-values="{{chart.displayValues}}" logarithmic="true">
                </ods-chart-serie>
            </ods-chart-query>
            <ods-chart-query context="ctx2" field-x="{{chart.xAxis}}" maxpoints="{{chart.maxPoints}}" sort="{{chart.sort}}">
                <ods-chart-serie label-y="{{ chart.label + ' - ' + ((items2 | toObject : 'name' | keys).length == 1 ? (items2 | toObject : 'name' | keys) : defaultLevel) }}" expression-y="{{chart.xAxis}}" chart-type="{{chart.type}}"
                    function-y="{{chart.function}}" color="#D5AC00" scientific-display="true"
                    display-values="{{chart.displayValues}}" logarithmic="true">
                </ods-chart-serie>
            </ods-chart-query>
        </ods-chart>
    </div>
</div>                                    </span>
                                </span>
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>