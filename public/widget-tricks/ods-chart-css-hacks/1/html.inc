<ods-dataset-context context="worldheritagelist"
                     worldheritagelist-domain="userclub"
                     worldheritagelist-dataset="world-heritage-list">

    <div class="row">
        <div class="col-sm-6">
            <div class="ods-box">
                <h2>
                    First and last values
                </h2>
                <ods-chart class="first-last-values">
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year">
                        <ods-chart-serie display-values="true"
                                         expression-y="extension"
                                         chart-type="areaspline"
                                         function-y="COUNT"
                                         label-y="Number of sites by Year">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
        <div class="col-sm-6">
            <div class="ods-box">
                <h2>
                    1 out of 3
                </h2>
                <ods-chart class="cherry-pick-values">
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year"
                                     display-legend="false">
                        <ods-chart-serie display-values="true"
                                         expression-y="extension"
                                         chart-type="areaspline"
                                         function-y="COUNT"
                                         label-y="Number of sites by Year">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
    </div>
</ods-dataset-context>