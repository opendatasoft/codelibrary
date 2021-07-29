<ods-dataset-context context="worldheritagelist"
                     worldheritagelist-domain="userclub"
                     worldheritagelist-dataset="world-heritage-list">

    <div class="row">
        <div class="col-sm-8">
            <div class="ods-box">
                <h2>
                    Area spline - x = date (year)
                </h2>
                <ods-chart>
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="areaspline"
                                         function-y="COUNT">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
        <div class="col-sm-4">
            <div class="ods-box">
                <h2>
                    Column chart - x = region
                </h2>
                <ods-chart labels-x-length="20">
                    <ods-chart-query context="worldheritagelist" field-x="region" maxpoints="0">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="column"
                                         function-y="COUNT"
                                         display-values="true"
                                         scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
    </div>
    <div class="row">
        <div class="col-sm-12">
            <div class="ods-box">
                <h2>
                    Spline - x = date (year), series-breakdown by region
                </h2>
                <ods-chart align-month="true">
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year"
                                     series-breakdown="region">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="spline"
                                         function-y="COUNT"
                                         scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
    </div>
</ods-dataset-context>