<ods-dataset-context context="stats"
                     stats-dataset="ods-api-monitoring"
                     stats-source="monitoring"
                     stats-parameters="{'disjunctive.dataset_id':true}">
    <div class="container"
         ods-datetime="now">
        <section class="row">
            <div class="col-md-6">
                <div class="card z-depth-1">
                    <div class="card-head">
                        <h2 class="title">
                            Simple line
                        </h2>
                        <p class="subtitle">
                            Since there is no x-axis, don't forget to put date range in this description!
                            From: {{ (now | momentadd: "month": -2) | date: "longDate" }} to {{ now | date: "longDate" }}.</p>
                    </div>
                    <ods-chart class="mini-card hide-x hide-y y-values" timescale="day" single-y-axis="true"
                               align-month="true">
                        <ods-chart-query context="stats" field-x="timestamp" maxpoints="0" timescale="day">
                            <ods-chart-serie expression-y="size_res" chart-type="areaspline" function-y="COUNT"
                                             scientific-display="false" display-values="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
            <div class="col-md-6">
                <div class="card z-depth-1">
                    <div class="card-head">
                        <h2 class="title">
                            With Y-axis
                        </h2>
                        <p class="subtitle">Count of daily API calls.
                            From: {{ (now | momentadd: "month": -2) | date: "longDate" }} to {{ now | date: "longDate"
                            }}.</p>
                    </div>
                    <ods-chart class="mini-card hide-x" timescale="day" single-y-axis="true" align-month="true">
                        <ods-chart-query context="stats" field-x="timestamp" maxpoints="0" timescale="day">
                            <ods-chart-serie expression-y="size_res" chart-type="areaspline" function-y="COUNT"
                                             scientific-display="false">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </section>
    </div>
</ods-dataset-context>
