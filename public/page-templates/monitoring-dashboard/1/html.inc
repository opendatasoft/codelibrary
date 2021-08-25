<div ods-datetime="now">
    <ods-dataset-context context="stats"
                         stats-dataset="ods-api-monitoring"
                         stats-source="monitoring"
                         stats-parameters="{'disjunctive.dataset_id':true}"
                         >
        <div class="container">
            <section>
                <h1 class="title">
                    Company Data Hub's Analytics
                </h1>
                <p>DISCLAIMER Lorem ipsum dolor sit amet, consectetur adipisicing elit. Commodi sint, sequi ratione esse, officiis, aliquam quaerat perferendis mollitia laborum cumque molestiae aspernatur.</p>
                <p >
                    These Analytics are based on usages made on <a href="/explore" target="_blank">Company's</a> data portal. Contact <a href=mailto:admin@mycompany.com class="link_color">Admin</a> for any additional questions.
                </p>

            </section>
            <nav class="row row-sticky">
                <div class="menu z-depth-2">
                    <div class="filter">
                        <div ods-facet-results="items"
                             ods-facet-results-context="stats"
                             ods-facet-results-facet-name="dataset_id"
                             ods-facet-results-sort="alphanum"
                             >
                            <ods-select placeholder="Dataset"
                                        selected-values="stats.parameters['refine.dataset_id']"
                                        multiple="false"
                                        options="items"
                                        label-modifier="name"
                                        value-modifier="name"
                                        >
                            </ods-select>
                        </div>
                    </div>
                    <div class="filter">
                        <ods-timerange context="stats"
                                       date-format="DD MMM YYYY"
                                       precision="day"
                                       default-from="{{ (now|momentadd:'months':-3)|moment:'YYYY-MM-DD' }}"
                                       default-to="{{ now|moment:'YYYY-MM-DD' }}"
                                       stats-time-field="timestamp"
                                       download-time-field="timestamp"
                                       searchnoresult-time-field="timestamp"
                                       queryresult-time-field="timestamp"
                                       users-time-field="timestamp"
                                       from="startDate"
                                       to="endDate"
                                       >
                        </ods-timerange>
                    </div>
                </div>
            </nav>
            <section class="row">
                <div class="col-md-6">
                    <div class="card z-depth-1">
                        <h2 class="title">
                            Portal's activity.
                        </h2>
                        <p class="subtitle">Count of daily API calls from {{ startDate|date:longDate }} to {{ endDate|date:longDate }}. See full <a href="/explore/dataset/ods-api-monitoring/?source=monitoring&disjunctive.dataset_id"> activity log.</a>
                        </p>

                        <ods-chart timescale="day" single-y-axis="true" align-month="true">
                            <ods-chart-query context="stats" field-x="timestamp" maxpoints="0" timescale="day">
                                <ods-chart-serie expression-y="size_res" chart-type="areaspline" function-y="COUNT" color="#26ADFF" label-y="Count API calls" scientific-display="true" display-values="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
                <div class="col-md-6">
                    <ods-dataset-context context="download"
                                         download-dataset="ods-api-monitoring"
                                         download-source="monitoring"
                                         download-parameters="{'refine.action': 'download'}"
                                         >
                        <div class="card z-depth-1">
                            <h2 class="title">
                                Number of exports
                            </h2>
                            <p class="subtitle">Daily number of full dataset download, in any format.</p>
                            <ods-chart timescale="day"
                              single-y-axis="true"
                              align-month="true"
                              label-x="Automated download?">
                                <ods-chart-query context="download"
                                                  field-x="timestamp"
                                                  maxpoints="0"
                                                  timescale="day"
                                                  stacked="normal"
                                                  series-breakdown="bot"
                                                  display-legend="true">
                                    <ods-chart-serie expression-y="size_res"
                                      chart-type="areaspline"
                                      function-y="COUNT"
                                      color="#26ADFF"
                                      label-y="Count exports"
                                      scientific-display="true"
                                      display-values="true"
                                      display-stack-values="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </ods-dataset-context>
                </div>
            </section>
            <section class="row">
                <div class="col-md-6">
                    <div class="card z-depth-1">
                        <h2 class="title">
                            Users ranked by API calls
                        </h2>
                        <p class="subtitle">Most active users by sum of all API calls, regardless of the nature of the call.</p>
                        <ods-chart>
                            <ods-chart-query context="stats" field-x="user_id" maxpoints="10" sort="serie1-1"  display-legend="true">
                                <ods-chart-serie chart-type="pie" function-y="COUNT" scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
                <div class="col-md-6">
                    <ods-dataset-context context="download"
                                         download-dataset="ods-api-monitoring"
                                         download-source="monitoring"
                                         download-parameters="{'refine.action': 'download'}"
                                         >
                        {{ download.parameters['q.timerange'] = stats.parameters['q.timerange'] ; '' }}
                        {{ download.parameters['refine.dataset_id'] = stats.parameters['refine.dataset_id'] ; '' }}
                        <div class="card z-depth-1">
                            <h2 class="title" >
                                Users ranked by download count
                            </h2>
                            <p class="subtitle">Most active users only on the download action.</p>
                            <ods-chart>
                                <ods-chart-query context="download" field-x="user_id" maxpoints="10" sort="serie1-1"  display-legend="true">
                                    <ods-chart-serie chart-type="pie" function-y="COUNT" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </ods-dataset-context>
                </div>
            </section>
            <section class="row">
                <div class="col-md-6">
                    <ods-dataset-context context="noresults"
                                         noresults-dataset="ods-api-monitoring"
                                         noresults-source="monitoring"
                                         noresults-parameters="{'q':'nhits=0'}"
                                         >
                        {{ noresults.parameters['q.timerange'] = stats.parameters['q.timerange'] ; '' }}
                        {{ noresults.parameters['refine.dataset_id'] = stats.parameters['refine.dataset_id'] ; '' }}
                        <div class="card z-depth-1">
                            <h2 class="title">
                                Text searches leading to no result
                            </h2>
                            <table class="data-table">
                                <thead>
                                    <tr>
                                        <th> Rank </th>
                                        <th>Request</th>
                                        <th>Occurrences</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr ods-facet-results="emptyqueriesopen"
                                        ods-facet-results-context="noresults"
                                        ods-facet-results-facet-name="query_text"
                                        ng-repeat="(i,emptyquery) in emptyqueriesopen.slice(0,9)"
                                        ng-show="emptyquery.count>5"
                                        >

                                        <td style="text-align:center;">{{ i+1 }}</td>
                                        <td style="width: 100%">{{ emptyquery.name }}</td>
                                        <td>{{ emptyquery.count }}</td>
                                    </tr>
                                </tbody>
                            </table>
                        </div>
                    </ods-dataset-context>
                </div>
                <div class="col-md-6">
                    <ods-dataset-context context="queries"
                                         queries-dataset="ods-api-monitoring"
                                         queries-source="monitoring"
                                         queries-parameters="{'q':'NOT #null(query_text)'}"
                                         >
                        {{ queries.parameters['q.timerange'] = stats.parameters['q.timerange'] ; '' }}
                        {{ queries.parameters['refine.dataset_id'] = stats.parameters['refine.dataset_id'] ; '' }}
                        <div class="card z-depth-1">
                            <h2 class="title">
                                Most frequent queries
                            </h2>
                            <table class="data-table">
                                <thead>
                                    <tr>
                                        <th> Rank </th>
                                        <th>Request</th>
                                        <th>Occurrences</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr ods-facet-results="frequentqueries"
                                        ods-facet-results-context="queries"
                                        ods-facet-results-facet-name="query_text"
                                        ng-repeat="(i,query) in frequentqueries.slice(0,10)"
                                        ng-show="query.count>5"
                                        >
                                        <td style="text-align:center;">{{ i+1 }}</td>
                                        <td style="width: 100%">{{ query.name }}</td>
                                        <td>{{ query.count }}</td>
                                    </tr>
                                </tbody>
                            </table>
                        </div>
                    </ods-dataset-context>
                </div>
            </section>
            <section class="row">
                <div class="col-md-6">
                    <div class="card z-depth-1">
                        <h2 class="title" >
                            Most active pages
                        </h2>
                        <p></p>
                        <ods-chart>
                            <ods-chart-query context="stats" field-x="attributes" maxpoints="7" sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#26ADFF" label-y="Sum of API calls" scientific-display="true"  display-values="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
                <div class="col-md-6">
                    <div class="card z-depth-1">
                        <h2 class="title">
                            Popular actions
                        </h2>
                        <ods-chart single-y-axis="true" align-month="true" labels-x-length="15">
                            <ods-chart-query context="stats" field-x="action" maxpoints="6" sort="serie1-1" >
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#26ADFF" label-y="Sum of API calls" scientific-display="true"  display-values="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
            </section>
            <section class="row">
                <div class="col-md-12">
                    <div class="card z-depth-1">
                        <h2 class="title" >
                            Origin of users on Company's Data Hub
                        </h2>
                        <ods-map scroll-wheel-zoom="false"
                                 location="5,47.27923,2.94434"
                                 basemap="jawg.light"
                                 toolbar-geolocation="false"
                                 toolbar-drawing="true"
                                 toolbar-fullscreen="true"
                                 search-box="false"
                                 display-control="false"
                                 display-control-single-layer="true"
                                 >
                            <ods-map-layer-group>
                                <ods-map-layer context="stats" color="#26ADFF" picto="ods-circle" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="false" caption-picto-color="#f2cb46" title="Company Data Hub" size="4" size-min="3" size-max="5" size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>
                    </div>
                </div>
            </section>
        </div>
    </ods-dataset-context>
</div>
