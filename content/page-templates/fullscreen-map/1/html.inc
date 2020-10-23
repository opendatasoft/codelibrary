<ods-dataset-context context="ctx"
                     ctx-dataset="openaq"
                     ctx-domain="public"
                     ctx-parameters="{'q.forcefilter':'measurements_value < 1000'}"
                     ng-init="activemaplayer = 'measurements';
                              search = {'query' : ''};">
    {{
    nb_active_filters =
    (ctx.parameters["refine.location"].length>=0?1:0) +
    (ctx.parameters["refine.measurements_sourcename"].length>=0?1:0) +
    (ctx.parameters["refine.measurements_parameter"].length>=0?1:0) ; ""
    }}
    <div class="left"
         ng-init="leftmodal = false">
        <div href="#"
             class="filter-btn"
             ng-class="{'filter-btn--active': leftmodal}"
             ng-click="leftmodal = !leftmodal">
            Filters
            <span class="filtered" ng-if="nb_active_filters > 0">
                ({{ nb_active_filters }})
            </span>
        </div>
        <div class="modal" ng-class="{'modal-active':leftmodal}">
            <div class="modal__header">
                <div href="#"
                     class="closebtn"
                     ng-click="leftmodal = false">
                    <span>&lt;</span> Close
                </div>
            </div>
            <div class="modal__content">
                <div class="ods-filters-placeholder" ods-sticky-scrollable="">
                    <div class="">
                        <h1 class="ods-filters__count">
                            <span class="ods-filters__count-number ng-binding">{{ctx.nhits | number}}</span>
                            <span class="ods-filters__count-units">Air measurements</span>
                        </h1>
                        <ods-filter-summary context="ctx" exclude="refine.measurements_parameter,q.forcefilter"></ods-filter-summary>
                        <h1 class="ods-filters__filters">
                            Filters
                        </h1>
                        <ods-facets context="ctx">
                            <h3>
                                Polluant
                            </h3>
                            <ods-facet name="measurements_parameter"
                                       ng-click="activemaplayer = 'measurements'"></ods-facet>
                            <h3>
                                Location
                            </h3>
                            <ods-facet name="location"></ods-facet>
                        </ods-facets>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="right"
         ng-init="rightmodal">
        <div href="#"
             class="filter-btn"
             ng-class="{'filter-btn--active': rightmodal}"
             ng-click="rightmodal = !rightmodal">
            Analytics
            <!--span class="filtered" ng-if="nb_active_filters > 0">
                ({{ nb_active_filters }})
            </span-->
        </div>
        <div class="modal" ng-class="{'modal-active':rightmodal}">
            <div class="modal__header">
                <div href="#"
                     class="closebtn"
                     ng-click="rightmodal = false">
                    Close <span>&gt;</span>
                </div>
            </div>
            <div class="modal__content">
                <h3>
                    Average {{ activemaplayer }} evolution over months
                </h3>
                <ods-chart timescale="year" display-legend="false" align-month="true">
                    <ods-chart-query context="ctx" field-x="measurements_lastupdated" maxpoints="5" timescale="month">
                        <ods-chart-serie expression-y="measurements_value" chart-type="spline" function-y="AVG" label-y="Average value evolution over time" color="#CF4626" display-values="true" display-stack-values="false" logarithmic="false" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
                <h3>
                    Most measured pollutant
                </h3>
                <ods-chart display-legend="false" align-month="true">
                    <ods-chart-query context="ctx" field-x="measurements_parameter" maxpoints="5" sort="serie1-1"
                                     category-colors="{'NO2':'#F4F2ED','O3':'#6a83ab','PM10':'#CF4626','SO2':'#45423E','PM2.5':'#CF4626','CO':'#6B83AB','BC':'#45423E'}">
                        <ods-chart-serie expression-y="measurements_value" chart-type="pie" function-y="COUNT" label-y="Most measured pollutant"
                                         color="range-Paired" display-values="false" display-stack-values="false" logarithmic="false" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
                <h3>
                    Most active source
                </h3>
                <ods-chart display-legend="false" align-month="true">
                    <ods-chart-query context="ctx" field-x="measurements_sourcename" maxpoints="5" sort="serie1-1">
                        <ods-chart-serie expression-y="measurements_value" chart-type="column" function-y="COUNT" label-y="Most active source" color="#CF4626" display-values="true" display-stack-values="false" logarithmic="false" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
                <h3>
                    Most active location
                </h3>
                <ods-chart display-legend="false" align-month="true">
                    <ods-chart-query context="ctx" field-x="location" maxpoints="5" sort="serie1-1">
                        <ods-chart-serie expression-y="measurements_value" chart-type="pie" function-y="COUNT" label-y="Most active source" display-values="false" display-stack-values="false" logarithmic="false" scientific-display="true" color="#cf4526">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
            <!--div class="modal__footer">
            Recherchez, cliquez pour sélectionner et filtrer, puis revenez pour voir votre rapport mis à jour
        </div-->
        </div>
    </div>
    <div class="search-module">
        <div class="input-holder">
            <div class="zoom-before-input"><i class="fa fa-search" aria-hidden="true"></i></div>
            <input type="text"
                   name="xzxzzxzxzxzxzxzxzxxzxzzxx"
                   autocomplete="off"
                   placeholder="Search..."
                   ng-model="search['query']"
                   ng-model-options="{ updateOn: 'keyup',
                                     debounce: { 'default': 500, 'blur': 0 }}"
                   ng-change="ctx.parameters['q'] = search['query'];" />
            <div class="clear-button"
                 ng-if="search['query']"
                 ng-click="search.query = undefined;
                           ctx.parameters['q'] = null">
                <i class="fa fa-ban" aria-hidden="true"></i>
            </div>
        </div>
        <div class="input-holder dark"
             ods-tooltip="<span style='font-size:1.4em; font-weight: 200;'>Measurements</strong>"
             ng-click="activemaplayer = 'measurements';
                       ctx.parameters['refine.measurements_parameter'] = undefined;">
            <i class="fa fa-map-marker" aria-hidden="true"></i>
        </div>
        <div class="input-holder red"
             ods-tooltip="<span style='font-size:1.4em; font-weight: 200;'>PM10 Heatmap</strong>"
             ng-click="activemaplayer = 'PM10';
                       ctx.parameters['refine.measurements_parameter'] = 'PM10';">
            <ods-picto url="'https://public.opendatasoft.com/static/pictos/img/set-v3/pictos/fire.svg'" color="'#f4f2ec'"></ods-picto>
        </div>
        <div class="input-holder blue"
             ods-tooltip="<span style='font-size:1.4em; font-weight: 200;'>Ozone Heatmap</strong>"
             ng-click="activemaplayer = 'O3';
                       ctx.parameters['refine.measurements_parameter'] = 'O3';">
            <ods-picto url="'https://public.opendatasoft.com/static/pictos/img/set-v3/pictos/fire.svg'" color="'#f4f2ec'"></ods-picto>
        </div>
    </div>
    <div class="kpi-module"
         ng-if="ctx.parameters['refine.measurements_parameter']"
         ods-aggregation="min,max,avg"
         ods-aggregation-min-context="ctx"
         ods-aggregation-min-function="MIN"
         ods-aggregation-min-expression="measurements_value"
         ods-aggregation-max-context="ctx"
         ods-aggregation-max-function="MAX"
         ods-aggregation-max-expression="measurements_value"
         ods-aggregation-avg-context="ctx"
         ods-aggregation-avg-function="AVG"
         ods-aggregation-avg-expression="measurements_value">
        <div class="kpi" ng-if="activemaplayer != 'measurements'"
             ng-class="{
                       'blue':activemaplayer=='O3',
                       'red':activemaplayer=='PM10'
                       }">
            <div class="kpi-title">Min {{ activemaplayer }}</div>
            <div class="kpi-title--unit">Minimum value measurement</div>
            <div class="kpi-value">{{ min | number : 1 }}</div>
        </div>
        <div class="kpi" ng-if="activemaplayer != 'measurements'"
             ng-class="{
                       'blue':activemaplayer=='O3',
                       'red':activemaplayer=='PM10'
                       }">
            <div class="kpi-title">Avg {{ activemaplayer }}</div>
            <div class="kpi-title--unit">Average value measurement</div>
            <div class="kpi-value">{{ avg | number : 1 }}</div>
        </div>
        <div class="kpi" ng-if="activemaplayer != 'measurements'"
             ng-class="{
                       'blue':activemaplayer=='O3',
                       'red':activemaplayer=='PM10'
                       }">
            <div class="kpi-title">Max {{ activemaplayer }}</div>
            <div class="kpi-title--unit">Maximum value measurement</div>
            <div class="kpi-value">{{ max | number : 1 }}</div>
        </div>
    </div>
    <ods-map no-refit="true" scroll-wheel-zoom="true" display-control="false"
             display-control-single-layer="false"
             toolbar-fullscreen="false"
             basemap="mapbox.light">
        <ods-map-layer context="ctx"
                       show-if="activemaplayer == 'measurements'"
                       color="#45423E" picto="ods-connected_temp" show-marker="false" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                       caption="false" caption-picto-color="#E5E5E5" title="Air Quality measurements" size="5" size-min="2" size-max="6" size-function="linear">
            <ul style="display: block; list-style-type: none; padding:0; margin:0;">
                <li><strong style="font-size:17px;">{{ record.fields.location }}</strong></li>
                <li>{{ record.fields.measurements_lastupdated | date:'medium'}}</li>
                <li><strong><i class="fa fa-leaf"></i> {{ record.fields.measurements_parameter }}: {{ record.fields.measurements_value }} {{ record.fields.measurements_unit }}</strong></li>
                <li>(source: {{ record.fields.measurements_sourcename }})</li>
            </ul>
        </ods-map-layer>
        <ods-map-layer context="ctx"
                       show-if="activemaplayer == 'PM10'"
                       color-gradient="{'1':'#FFFFFF','0.3':'#FF0000','0.6':'#FFFF00'}" picto="ods-connected_temp" show-marker="false" display="heatmap"radius="1" function="AVG" expression="measurements_value" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                       caption="false" caption-picto-color="#E5E5E5" title="PM10 Heatmap" size-function="log"></ods-map-layer>
        <ods-map-layer context="ctx"
                       show-if="activemaplayer == 'O3'"
                       color-gradient="{'1':'#00FAFA','0.2':'#000000','0.4':'#183567','0.6':'#2E649E','0.8':'#17ADCB'}" picto="ods-connected_temp" show-marker="false" display="heatmap"radius="1" function="AVG" expression="measurements_value" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                       caption="false" caption-picto-color="#E5E5E5" title="O3 Heatmap" size-function="log"></ods-map-layer>
    </ods-map>
</ods-dataset-context>
