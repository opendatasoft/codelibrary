<ods-dataset-context context="stats"
                     stats-dataset="ods-api-monitoring"
                     stats-source="monitoring"
                     stats-parameters="{'disjunctive.dataset_id':true}">
    <div class="container">
        <section class="row">
            <div class="col-md-6">
                <div class="card z-depth-1">
                    <div class="card-head">
                        <h2 class="title">
                            Most active pages
                        </h2>
                        <p class="subtitle">Ranked by number of API calls</p>
                    </div>
                    <ods-chart class="mini-card hide-x-grid hide-y" single-y-axis="true" align-month="true"
                               labels-x-length="15">
                        <ods-chart-query context="stats" field-x="attributes" maxpoints="7" sort="serie1-1">
                            <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Sum of API calls"
                                             scientific-display="true" display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
            <div class="col-md-6">
                <div class="card z-depth-1">
                    <div class="card-head">
                        <h2 class="title">
                            Users ranked by API calls
                        </h2>
                        <p class="subtitle">Most active users by sum of all API calls, regardless of the nature of the
                            call.</p>
                    </div>
                    <ods-chart class="mini-card">
                        <ods-chart-query context="stats" field-x="user_id" maxpoints="10" sort="serie1-1"
                                         display-legend="true">
                            <ods-chart-serie chart-type="pie" innersize="60%" labelsposition="outside"
                                             function-y="COUNT" scientific-display="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </section>
    </div>
</ods-dataset-context>
