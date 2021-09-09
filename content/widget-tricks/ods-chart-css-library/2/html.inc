<ods-dataset-context context="worldheritagelist"
                     worldheritagelist-domain="userclub"
                     worldheritagelist-dataset="world-heritage-list">

    <div class="row">
        <div class="col-sm-8">
            <div class="ods-box">
                <h2>
                    Area spline - x = date (year)
                </h2>
                <h4>
                    Options: color, label-y
                </h4>
                <ods-chart single-y-axis="true">
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="areaspline"
                                         function-y="COUNT"
                                         color="#344980"
                                         label-y="Number of sites by Year">
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
                <h4>
                    Options: labels-x-length, single-y-axis, single-y-axis-label, display-values, color
                </h4>
                <ods-chart labels-x-length="20"
                           single-y-axis="true"
                           single-y-axis-label="Number of sites"
                           display-legend="false">
                    <ods-chart-query context="worldheritagelist" field-x="region" maxpoints="0">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="column"
                                         display-values="true"
                                         function-y="COUNT"
                                         display-values="true"
                                         scientific-display="true"
                                         color="#344980">
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
                <h4>
                    Options: category-colors, label-y
                </h4>
                <ods-chart>
                    <ods-chart-query context="worldheritagelist"
                                     field-x="date_inscribed"
                                     maxpoints="0"
                                     timescale="year"
                                     series-breakdown="region"
                                     category-colors="{
                                         'Europe and North America':'#1979a9',
                                         'Asia and the Pacific':'#e07b39',
                                         'Latin America and the Caribbean':'#80391e',
                                         'Africa':'#042f66',
                                         'Arab States':'#44bcd8'
                                         }">
                        <ods-chart-serie expression-y="extension"
                                         chart-type="spline"
                                         function-y="COUNT"
                                         scientific-display="true"
                                         label-y="Number of sites by Region">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
    </div>
</ods-dataset-context>