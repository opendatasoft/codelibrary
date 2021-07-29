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
                    CSS classes: no-bg, hide-x-legend, medium-x-axisline, medium-x-axisline-ticks, black-x-axisline, black-x-axisline-ticks, normal-y-values, large-x-values
                </h4>
                <ods-chart class="no-bg hide-x-legend medium-x-axisline medium-chart-series medium-x-axisline-ticks black-x-axisline black-x-axisline-ticks normal-y-values large-x-values"
                           single-y-axis="true">
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
                    CSS classes : no-bg, hide-x-legend, hide-y-values, large-data-values, large-data-values, large-y-legend, hide-y-gridline, small-y-gridline, medium-x-values
                </h4>
                <ods-chart class="no-bg hide-x-legend hide-y-values large-data-values large-data-values large-y-legend hide-y-gridline small-y-gridline medium-x-values"
                           labels-x-length="20"
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
                    CSS classes : no-bg, hide-x-legend, normal-x-values, extralarge-chart-legend-dash
                </h4>
                <ods-chart class="no-bg hide-x-legend normal-x-values extralarge-chart-legend-dash">
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

<style>
    body {
        background-color: white;
    }
    .row {
        display: -webkit-box;
        display: -ms-flexbox;
        display: flex;
        -ms-flex-wrap: wrap;
        flex-wrap: wrap;
    }
    .row > * {
        flex-grow: 1;
        margin-bottom: 20px;
    }
    /* Fix for early content wrapping in Safari*/
    .row:before,
    .row:after {
        content: normal;
    }
    .ods-box {
        height: 100%;
        background-color: var(--boxes-background);
    }
</style>