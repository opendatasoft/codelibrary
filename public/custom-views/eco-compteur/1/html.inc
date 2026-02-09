<!------------------------------->
<!--- Eco-compteur custom view -->
<!------------------------------->

<!-- mainColor and secondaryColor must be modified according to your portal and page style -->

<ods-dataset-context context="all,sites,sitesselect"
                     all-dataset="eco-counter-data"
                     sites-dataset="eco-counter-sites"
                     sitesselect-dataset="eco-counter-sites"
                     ng-init="mainColor = '#142E7B';
                              secondaryColor = '#0086D6';
                              selection = undefined;
                              agregation = 'mo';
                              values = {
                              'chartprecision': ['year','month','day','hour'],
                              'activetab': ''
                              };">

    {{ ctx.parameters['refine.name'] =
    (ctx.parameters['refine.name'].join('')?
    ctx.parameters['refine.name'].join(''):
    ctx.parameters['refine.name']) ; '' }}

    {{ sitesselect.parameters['refine.name'] = ctx.parameters['refine.name'] ; '' }}

    {{ values.daterefinedepth = (ctx.parameters['refine.date'].length > 1 ?
    (ctx.parameters['refine.date'] | split:'/').length : (ctx.parameters['refine.date'][0] | split:'/').length) || 0 ; "" }}

    <span ods-facet-results="capteurs"
          ods-facet-results-context="sites"
          ods-facet-results-facet-name="name">
        {{ values.capteurs = capteurs ; '' }}
    </span>


    <!--------------------------->
    <!------- Sticky menu ------->
    <!--------------------------->
    <section class="subheader-wrapper"
             ng-init="zone_panel = false; period_panel = false">
        <div class="subheader">
            <div class="container">
                <div class="subheader-top">
                    <div>
                        <span class="subheader-text">
                            Capteur :
                        </span>
                        <span class="subheader-info">
                            {{ ctx.parameters['refine.name'] || 'Tous' }}
                        </span>
                        <br/>
                        <span class="subheader-text">
                            Période :
                        </span>
                        <span class="subheader-info">
                            <span ng-if="values.daterefinedepth == 0">Tout l'historique</span>
                            <span ng-if="values.daterefinedepth > 0"
                                  ods-adv-analysis="range"
                                  ods-adv-analysis-context="ctx"
                                  ods-adv-analysis-select="min(date) as mindate, max(date) as maxdate">
                                {{ range[0].mindate | date }} au {{ range[0].maxdate | date }}
                            </span>
                        </span>
                    </div>

                    <div>
                        <button ng-click="zone_panel = !zone_panel; period_panel = false"
                                class="subheader-button"
                                ng-class="{'subheader-button-active': zone_panel}">
                            Choix d'un capteur
                            <i class="fa fa-chevron-{{ zone_panel ? 'down' : 'up' }}" aria-hidden="true"></i>
                        </button>
                    </div>
                </div>
            </div>
        </div>

        <div class="subheader-panel" ng-if="zone_panel">
            <div class="container">
                <div class="subheader-panel-wrapper">
                    <div class="subheader-panel-item carte">
                        <div class="subheader-panel-flex">
                            <h3 class="subheader-title">
                                Sélection du capteur
                            </h3>
                            <div class="subheader-panel-flex-right">
                                <button ng-if="ctx.parameters['refine.name']"
                                        ng-click="ctx.parameters['refine.name'] = undefined"
                                        class="subheader-button subheader-button-secondary">
                                    Tous les capteurs
                                </button>
                                <select class="section-select subheader-select"
                                        ng-model="ctx.parameters['refine.name']"
                                        ng-options="item.path as item.name for item in values.capteurs"
                                        ng-selected="(ctx.parameters['refine.name'].join('') + ctx.parameters['refine.name']) == item.path">
                                    <option value="">Tous les capteurs</option>
                                </select>
                            </div>
                        </div>

                        <div>
                            <ods-map static-map="false"
                                     no-refit="true"
                                     toolbar-geolocation="false"
                                     toolbar-drawing="false"
                                     toolbar-fullscreen="false"
                                     scroll-wheel-zoom="true"
                                     display-control="false"
                                     display-control-single-layer="false"
                                     search-box="false"
                                     basemap="jawg.light">
                                <ods-map-layer context="sites"
                                               color="{{ mainColor }}" show-marker="false" display="auto"
                                               shape-opacity="0.5" point-opacity="1" border-color="#000"
                                               refine-on-click-context="[ctx,sitesselect]"
                                               refine-on-click-ctx-map-field="name"
                                               refine-on-click-ctx-context-field="name"
                                               refine-on-click-ctx-replace-refine="true"
                                               refine-on-click-sitesselect-map-field="name"
                                               refine-on-click-sitesselect-context-field="name"
                                               refine-on-click-sitesselect-replace-refine="true">
                                </ods-map-layer>
                                <ods-map-layer context="sitesselect"
                                               show-if="sitesselect.parameters['refine.name']"
                                               color="{{ secondaryColor }}" picto="dot" show-marker="false" display="auto"
                                               shape-opacity="0.5" point-opacity="1" border-color="#000"
                                               refine-on-click-context="[ctx,sitesselect]"
                                               refine-on-click-ctx-map-field="name"
                                               refine-on-click-ctx-context-field="name"
                                               refine-on-click-ctx-replace-refine="true"
                                               refine-on-click-sitesselect-map-field="name"
                                               refine-on-click-sitesselect-context-field="name"
                                               refine-on-click-sitesselect-replace-refine="true">
                                </ods-map-layer>
                            </ods-map>
                        </div>
                    </div>

                    <div class="subheader-separator"></div>

                    <div class="subheader-panel-item detail-capteur">
                        <h3 class="subheader-title">
                            Détail du capteur
                        </h3>
                        <div ng-if="sitesselect.parameters['refine.name']">
                            <div class="detail-capteur-content"
                                 ods-results="sitesresults"
                                 ods-results-max="1"
                                 ods-results-context="sitesselect">
                                <h4>{{ sitesresults[0].fields.name }}</h4>
                                <dl>
                                    <dt>User type</dt>
                                    <dd>{{ sitesresults[0].fields.user_type }}</dd>
                                    <dt>Sens</dt>
                                    <dd>{{ sitesresults[0].fields.sens }}</dd>
                                    <dt>Installation date</dt>
                                    <dd>{{ sitesresults[0].fields.installation_date | date }}</dd>
                                </dl>
                                <img class="" ng-src="{{ sitesresults[0].fields.photourl }}" width="100%" />
                            </div>
                        </div>
                        <div ng-if="!sitesselect.parameters['refine.name']">
                            <p>Pas de capteur sélectionné</p>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>


    <!--------------------------->
    <!--- KPI / First section---->
    <!--------------------------->
    <section class="page-section">
        <div class="container">
            <div class="row">
                <div class="col-lg-6"
                     ng-if="values.daterefinedepth <= 0"
                     ods-adv-analysis="byday"
                     ods-adv-analysis-context="ctx"
                     ods-adv-analysis-limit="8"
                     ods-adv-analysis-select="sum(counts) as total"
                     ods-adv-analysis-group-by="date_format(date, 'YYYY-MM-dd') as day"
                     ods-adv-analysis-order-by="day DESC">
                    <h2 class="indicateur">
                        {{ byday[1].total | number }}
                        <span class="label">passages comptabilisés le {{ byday[1].day | date  }}</span>
                    </h2>
                    {{ evol = (byday[1].total - byday[7].total)/byday[7].total*100 ; '' }}
                    <div class="sous-indicateur">
                        <h3>
                            <span ng-if="evol > 0">▲ +</span>
                            <span ng-if="evol < 0">▼ </span>
                            {{ evol | number: 1}}%
                        </h3>
                        <p>
                            comparé à {{ byday[7].day | moment:'dddd' }} dernier ({{ byday[7].total | number }} passages le {{ byday[7].day | date  }})
                        </p>
                    </div>
                </div>
                <div class="col-lg-6"
                     ng-if="values.daterefinedepth > 0"
                     ods-adv-analysis="global"
                     ods-adv-analysis-context="ctx"
                     ods-adv-analysis-select="sum(counts) as total">
                    <h2 class="indicateur">
                        {{ global[0].total | number }}
                        <span class="label">passages au total</span>
                    </h2>
                    <p class="mb-15">
                        ont été <b>comptabilisés sur la période séléctionnée</b>
                    </p>
                </div>
                <div class="col-lg-6">
                    <div class="indicateur-box">
                        <ods-chart class="trend" display-legend="false" single-y-axis="true" align-month="true">
                            <ods-chart-query context="ctx" field-x="date" maxpoints="0" timescale="{{ values.chartprecision[values.daterefinedepth] }}">
                                <ods-chart-serie expression-y="counts" chart-type="spline" function-y="SUM" display-values="true"
                                                 color="{{ mainColor }}" label-y="Passages">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
            </div>
        </div>
    </section>


    <!--------------------------->
    <!----- Top 5 section ------->
    <!--------------------------->
    <section class="page-section"
             ng-if="!(ctx.parameters['refine.name'] && values.daterefinedepth >= 3)">
        <div class="container">
            <div ng-if="!ctx.parameters['refine.name']">
                <div class="row">
                    <div class="col-lg-8">
                        <div class="indicateur-box">
                            <ods-chart
                                    class="top5-chart hide-y-legend hide-x-axisline-ticks hide-y-gridline black-x-values medium-x-values medium-data-values"
                                    single-y-axis="true"
                                    scientific-display="true"
                                    display-legend="false"
                                    labels-x-length="40">
                                <ods-chart-query context="ctx"
                                                 field-x="name"
                                                 maxpoints="5" sort="serie1-1">
                                    <ods-chart-serie expression-y="counts"
                                                     chart-type="bar"
                                                     function-y="SUM"
                                                     color="{{ mainColor }}"
                                                     display-values="true"
                                                     label-y="Passages">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </div>
                    <div class="col-lg-4">
                        <h2 class="indicateur">
                            Top 5
                        </h2>
                        <p>
                            <b>Sites</b> les plus fréquentés
                        </p>
                    </div>
                </div>
            </div>
            <div ng-if="ctx.parameters['refine.name']">
                <div class="row">
                    <div class="col-lg-8">
                        <div class="indicateur-box">
                            <ods-chart
                                    class="top5-chart hide-y-legend hide-x-axisline-ticks hide-y-gridline black-x-values medium-x-values medium-data-values"
                                    single-y-axis="true"
                                    scientific-display="true"
                                    display-legend="false"
                                    labels-x-length="40">
                                <ods-chart-query context="ctx"
                                                 field-x="date"
                                                 timescale="day"
                                                 maxpoints="5" sort="serie1-1">
                                    <ods-chart-serie expression-y="counts"
                                                     chart-type="bar"
                                                     function-y="SUM"
                                                     color="{{ mainColor }}"
                                                     display-values="true"
                                                     label-y="Passages">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </div>
                    <div class="col-lg-4">
                        <h2 class="indicateur">
                            Top 5
                        </h2>
                        <p>
                            <b>Jours</b> les plus fréquentés pour le site séléctionné
                        </p>
                    </div>
                </div>
            </div>
        </div>
    </section>


    <!--------------------------->
    <!----- Chart section ------->
    <!--------------------------->
    <section class="page-section bg-white">
        <div class="container">
            <h2 class="indicateur">Moyennes horaire</h2>
            {{
            tabs = ([
            values.daterefinedepth < 3 ? 'distribution' : undefined,
            values.daterefinedepth < 2 ? 'mois' : undefined,
            values.daterefinedepth < 3 ? 'jour' : undefined,
            values.daterefinedepth > 1 ? 'heure' : undefined
            ] | filter : '') ;
            histoscale = {
            'mois':'month',
            'jour':'day',
            'heure':'hour'
            }; ''
            }}
            <!-- To translate the app, in the few lines above, rename the time scales 'mois', 'jour', 'heure'.
                Pay attention to not modify the english keywords 'month', 'day', 'hour' as they are API parameters.
            -->
            <div class="tabs">
                <div class="tab"
                     ng-repeat="(i,e) in tabs"
                     ng-click="values.activetab = e"
                     ng-class="{'tab__active': values.activetab == e}">
                    {{ values.activetab = (i == 0 && !(tabs.indexOf(values.activetab) >= 0) ? e : values.activetab) ; '' }}
                    {{ e | capitalize }}
                </div>
            </div>
            <div class="tabs-content">
                <div class="tab-content"
                     ng-if="values.activetab == 'distribution'">
                    <ods-spinner class="heatmap"></ods-spinner>
                    <div ods-adv-analysis="weekdayHourRate"
                         ods-adv-analysis-context="ctx"
                         ods-adv-analysis-select="avg(counts) as count"
                         ods-adv-analysis-group-by="date_format(date, 'EEEE') as day, date_format(date, 'HH') as hour">
                        <ods-vega-lite-chart spec='{
                                               "$schema": "https://vega.github.io/schema/vega-lite/v2.json",
                                               "data": {
                                               "name": "data"
                                               },
                                               "mark": "rect",
                                               "encoding": {
                                               "y": {
                                               "title": "Jour",
                                               "field": "day",
                                               "type": "ordinal",
                                               "sort": ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday",
                                               "lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"],
                                               },
                                               "x": {
                                               "title": "Heure",
                                               "field": "hour",
                                               "type": "ordinal",
                                               },
                                               "color": {
                                               "title": "Moyenne horaire",
                                               "field": "count",
                                               "type": "quantitative",
                                               "scale": { "range": ["#FFFFFF", "#142E7B"] }
                                               }
                                               }
                                               }' values-data="weekdayHourRate"></ods-vega-lite-chart>
                    </div>
                </div>
                <div class="tab-content"
                     ng-if="(histoscale | keys).indexOf(values.activetab) >= 0">
                    <ods-chart class="no-bg medium-y-values medium-x-values hide-y-legend" display-legend="false">
                        <ods-chart-query context="ctx" field-x="date"
                                         timescale="{{ histoscale[values.activetab] }}">
                            <ods-chart-serie color="{{ mainColor }}" chart-type="spline" expression-y="counts"
                                             function-y="AVG" label-y="Passages par heure" scientific-display="true"
                                             display-values="false">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </div>
    </section>

</ods-dataset-context>