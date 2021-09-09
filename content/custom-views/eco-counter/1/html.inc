<div class="container-fluid">
    {{ dateLength = ctx.parameters['refine.date'].length > 1 ? (ctx.parameters['refine.date'] | split:'/').length : (ctx.parameters['refine.date'][0] | split:'/').length ; "" }}
    <section class="row">
        <div class="col-md-4">
            <div class="card"
                 ng-if="!ctx.parameters['refine.date']"
                 ods-adv-analysis="daytotal"
                 ods-adv-analysis-context="ctx"
                 ods-adv-analysis-select="sum(counts) as total"
                 ods-adv-analysis-where="date >= now(days=-7)"
                 ods-adv-analysis-group-by="date_format(date, 'YYYY-MM-dd') as x"
                 >
                <div class="card-head"></div>
                <div class="card-body has-text-center">
                    <p class="title is-1 has-text-primary">
                        {{ daytotal[5].total | number:0  }}
                    </p>
                    <p class="subtitle is-2">
                        vélos comptés hier
                    </p>
                </div>
                <div
                     class="card-footer"
                     >
                    <p class="has-text-center">
                        <span class="is-success has-text-bold" ng-if="(daytotal[0].total - daytotal[6].total)/daytotal[0].total >= 0">
                            ▲ {{ (daytotal[6].total - daytotal[0].total)/daytotal[6].total | number:1 }} %
                        </span>
                        <span class="is-danger has-text-bold" ng-if="(daytotal[0].total - daytotal[6].total)/daytotal[0].total < 0">
                            ▼ {{ (daytotal[6].total - daytotal[0].total)/daytotal[6].total | number:1 }} %
                        </span>
                        comparé à {{ daytotal[6].x | moment:'dddd' }} dernier
                    </p>
                </div>
            </div>
            <div class="card"
                 ng-if="ctx.parameters['refine.date']"
                 ods-adv-analysis="daytotal"
                 ods-adv-analysis-context="ctx"
                 ods-adv-analysis-select="sum(counts) as total"
                 >
                <div class="card-head"></div>
                <div class="card-body has-text-center">
                    <p class="title is-1 has-text-primary">
                        {{ daytotal[0].total | number:0  }}
                    </p>
                    <p class="subtitle is-2">
                        vélo comptés au total
                    </p>
                </div>
                <div class="card-footer">
                    <p>
                        entre le
                        <span ods-adv-analysis="mindate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="min(date) as mindate">
                            {{ mindate[0].mindate | moment:'L' }}
                        </span>
                        et le
                        <span ods-adv-analysis="maxdate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="max(date) as maxdate">
                            {{ maxdate[0].maxdate | moment:'L' }}
                        </span>
                    </p>
                </div>
            </div>
        </div>
        <div class="col-md-4">
            <div class="card mini-chart"
                 ng-if="dateLength <= 1 || !ctx.parameters['refine.date']"
                 >
                <div class="card-head">
                </div>
                <div class="card-body">
                    <ods-chart class="mini-card hide-x hide-y y-values" single-y-axis="true"
                               align-month="true">
                        <ods-chart-query context="ctx" field-x="date" maxpoints="0" timescale="month">
                            <ods-chart-serie
                                             expression-y="counts"
                                             chart-type="areaspline"
                                             function-y="SUM"
                                             scientific-display="false"
                                             display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="card-footer">
                    <p class="has-text-center">
                        Tendance mensuelles du total de vélos comptés entre le
                        <span ods-adv-analysis="mindate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="min(date) as mindate">
                            {{ mindate[0].mindate | moment:'L' }}
                        </span>
                        et le
                        <span ods-adv-analysis="maxdate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="max(date) as maxdate">
                            {{ maxdate[0].maxdate | moment:'L' }}
                        </span>
                    </p>
                </div>
            </div>
            <div class="card mini-chart"
                 ng-if="dateLength === 2">
                <div class="card-head">
                </div>
                <div class="card-body">
                    <ods-chart class="mini-card hide-x hide-y y-values" single-y-axis="true"
                               align-month="true">
                        <ods-chart-query context="ctx" field-x="date" maxpoints="0" timescale="day">
                            <ods-chart-serie
                                             expression-y="counts"
                                             chart-type="areaspline"
                                             function-y="SUM"
                                             scientific-display="false"
                                             display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="card-footer">
                    <p class="has-text-center">Tendance journalière du total de vélo compté entre le
                        <span ods-adv-analysis="mindate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="min(date) as mindate">
                            {{ mindate[0].mindate | moment:'L' }}
                        </span>
                        et le
                        <span ods-adv-analysis="maxdate"
                              ods-adv-analysis-context="ctx"
                              ods-adv-analysis-select="max(date) as maxdate">
                            {{ maxdate[0].maxdate | moment:'L' }}
                        </span>
                    </p>
                </div>
            </div>
            <div class="card mini-chart"
                 ng-if="dateLength === 3">
                <div class="card-head">
                </div>
                <div class="card-body">
                    <ods-chart class="mini-card hide-x hide-y y-values"
                               single-y-axis="true"
                               align-month="true">
                        <ods-chart-query context="ctx" field-x="date" maxpoints="0" timescale="hour">
                            <ods-chart-serie
                                             expression-y="counts"
                                             chart-type="areaspline"
                                             function-y="SUM"
                                             scientific-display="false"
                                             display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="card-footer">
                    <p class="has-text-center">Tendance horaire du total de vélos comptés le {{ ctx.parameters['refine.date'] | moment:'LL' }}</p>
                </div>
            </div>
        </div>
        <div class="col-md-4">
            <div class="card"
                 ng-if="!ctx.parameters['refine.name']">
                <div class="card-head"></div>
                <div class="card-body">
                    <ods-chart
                               class="mini-card hide-x-grid hide-y"
                               single-y-axis="true"
                               align-month="true"
                               labels-x-length="15"
                               >
                        <ods-chart-query context="ctx" field-x="name" maxpoints="5" sort="serie1-1">
                            <ods-chart-serie
                                             chart-type="bar"
                                             function-y="SUM"
                                             expression-y="counts"
                                             label-y="Total counts"
                                             scientific-display="true"
                                             display-values="true"
                                             >
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="card-footer">
                    <p class="has-text-center">Top 5 des sites avec la moyenne horaire la plus élevée</p>
                </div>
            </div>
            <div class="card"
                 ng-if="ctx.parameters['refine.name']">
                <div class="card-head"></div>
                <div class="card-body">
                    <ods-chart
                               class="mini-card hide-x-grid hide-y"
                               single-y-axis="true"
                               align-month="true"
                               labels-x-length="15"
                               display-legend="false"
                               >
                        <ods-chart-query context="ctx"
                                         field-x="date"
                                         timescale="day"
                                         maxpoints="5"
                                         sort="serie1-1">
                            <ods-chart-serie
                                             chart-type="bar"
                                             function-y="AVG"
                                             expression-y="counts"
                                             label-y="Total counts"
                                             scientific-display="true"
                                             display-values="true"
                                             >
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <div class="card-footer">
                    <p class="has-text-center">Top 5 des jours les plus fréquentés pour {{ ctx.parameters['refine.name'] }}</p>
                </div>
            </div>
        </div>
    </section>
    <section class="row" ng-if="dateLength < 3 || !ctx.parameters['refine.date']">
        <div class="col-md-12">
            <h2 class="title is-2">Distribution selon l'heure de la semaine</h2>
            <div class="chart-container"
                 ods-adv-analysis="weekdayHourRate"
                 ods-adv-analysis-context="ctx"
                 ods-adv-analysis-select="avg(counts) as count"
                 ods-adv-analysis-group-by="date_format(date, 'e') as daynum, date_format(date, 'HH') as hour">
                <ods-vega-lite-chart spec='{
                                           "$schema": "https://vega.github.io/schema/vega-lite/v2.json",
                                           "data": {
                                           "name": "data"
                                           },
                                           "transform": [{
                                           "lookup": "daynum",
                                           "from": {
                                           "data": {
                                           "values": [
                                           {"daynum": "1", "dayname": "Lundi"},
                                           {"daynum": "2", "dayname": "Mardi"},
                                           {"daynum": "3", "dayname": "Mercredi"},
                                           {"daynum": "4", "dayname": "Jeudi"},
                                           {"daynum": "5", "dayname": "Vendredi"},
                                           {"daynum": "6", "dayname": "Samedi"},
                                           {"daynum": "7", "dayname": "Dimanche"}
                                           ]
                                           },
                                           "key": "daynum",
                                           "fields": ["dayname"]
                                           },
                                           }],
                                           "mark": "rect",
                                           "encoding": {
                                           "y": {
                                           "title": "Jour",
                                           "field": "dayname",
                                           "type": "ordinal",
                                           "sort": ["Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"],
                                           },
                                           "x": {
                                           "title": "Heure",
                                           "field": "hour",
                                           "type": "ordinal",
                                           },
                                           "color": {
                                           "title": "Moyenne horaire du nombre de passages",
                                           "field": "count",
                                           "type": "quantitative",
                                           "scale": { "range": ["#F5FBFA", "#E7F8F5", "#D0F0EB", "#81DBCD", "#00C7B1"] }
                                           }
                                           }
                                           }'
                                     values-data="weekdayHourRate"></ods-vega-lite-chart>
            </div>
        </div>
    </section>
    <section class="row">
        <div class="col-md-12">
            <h2 class="title is-2">Taux horaires moyens</h2>
            <ods-simple-tabs class="tab-pills">
                <ods-simple-tab label="Mensuels"
                                keep-content="true">
                    <div class="chart-container">
                        <ods-chart display-legend="false">
                            <ods-chart-query context="ctx" field-x="date" timescale="month">
                                <ods-chart-serie
                                                 color="#00C7B1"
                                                 chart-type="spline"
                                                 expression-y="counts"
                                                 function-y="AVG"
                                                 label-y="Total monthly counts"
                                                 scientific-display="true"
                                                 display-values="false"
                                                 >
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </ods-simple-tab>
                <ods-simple-tab label="Journaliers">
                    <div class="chart-container">
                        <ods-chart display-legend="false">
                            <ods-chart-query context="ctx" field-x="date" timescale="day">
                                <ods-chart-serie
                                                 color="#23ADAD"
                                                 chart-type="spline"
                                                 expression-y="counts"
                                                 function-y="AVG"
                                                 label-y="Total daily counts"
                                                 scientific-display="true"
                                                 >
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </ods-simple-tab>
                <ods-simple-tab label="Horaire">
                    <div class="chart-container">
                        <ods-chart display-legend="false">
                            <ods-chart-query context="ctx" field-x="date" timescale="hour">
                                <ods-chart-serie
                                                 color="#45ADAD"
                                                 chart-type="spline"
                                                 expression-y="counts"
                                                 function-y="SUM"
                                                 label-y="Total hourly counts"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </ods-simple-tab>
            </ods-simple-tabs>
        </div>
    </section>
    <section class="row">
        <div
             class="col-md-12"
             >
            <h2 class="title is-2">Détail des capteurs</h2>
            <ods-map
                     scroll-wheel-zoom="false"
                     basemap="jawg.dark"
                     >
                <ods-map-layer
                               context="ctx"
                               display="aggregation"
                               hover-field="name"
                               expression="counts"
                               function="avg"
                               color-scale="BuGn"
                               size="5"
                               opacity="1.0"
                               >
                    <h3 class="title is-3">{{ record.fields.name }}</h3>
                    <ods-dataset-context
                                         context="sites"
                                         sites-dataset="eco-counter-sites"
                                         sites-parameters="{'refine.name': record.fields.name}"
                                         >
                        <div class="is-size-4"
                             ods-adv-analysis="rate"
                             ods-adv-analysis-context="ctx"
                             ods-adv-analysis-select="avg(counts) as rate"
                             ods-adv-analysis-where="id like '{{ record.fields.id}}'"

                             ods-results="site"
                             ods-results-context="sites"
                             ods-results-max="1"
                             >
                            <span ng-if="!rate"><ods-spinner /></span>
                            <p ng-if="rate">Installé le <strong>{{ site[0].fields.installation_date | date:longdate }}</strong></p>
                            <p ng-if="rate"><strong>{{ (rate[0].rate * 60)/site[0].fields.interval | number:2 }}</strong> vélos par heure en moyenne</p>
                            <div class="pictures">
                                <figure class="image"
                                        ng-if="site[0].fields.urlphoto1">
                                    <img src="{{ site[0].fields.urlphoto1 }}" width="200">
                                </figure>
                                <figure class="image"
                                        ng-if="site[0].fields.urlphoto2">
                                    <img src="{{ site[0].fields.urlphoto2 }}" width="200">
                                </figure>
                                <figure class="image"
                                        ng-if="site[0].fields.urlphoto3">
                                    <img src="{{ site[0].fields.urlphoto3 }}" width="200">
                                </figure>
                            </div>
                        </div>
                    </ods-dataset-context>
                </ods-map-layer>
            </ods-map>
        </div>
    </section>
</div>