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
                    linear gradient top to bottom + small-chart-series, small-chart-legend-circle
                </h4>
                <ods-chart class="no-bg hide-x-legend medium-x-axisline small-chart-series small-chart-legend-circle medium-x-axisline-ticks black-x-axisline black-x-axisline-ticks normal-y-values large-x-values"
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
                    linear gradient left to center to right
                </h4>
                <ods-chart class="no-bg hide-x-legend hide-y-values large-data-values large-data-values large-y-legend hide-y-gridline small-y-gridline medium-x-values small-chart-series darkgrey-chart-series"
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
</ods-dataset-context>


<!-- Areas and item background -->
<svg style="width:0;height:0;position:absolute;" aria-hidden="true" focusable="false">
    <linearGradient id="svg-gradient" x1="1" x2="0" y1="0" y2="0">
        <stop offset="0%" stop-color="rgba(78,110,191,0.5)"></stop>
        <stop offset="20%" stop-color="rgba(78,110,191,0.1)"></stop>
        <stop offset="50%" stop-color="rgba(78,110,191,0)"></stop>
        <stop offset="80%" stop-color="rgba(78,110,191,0.1)"></stop>
        <stop offset="100%" stop-color="rgba(78,110,191,0.5)"></stop>
    </linearGradient>
</svg>

<!-- Areas and item background -->
<svg style="width:0;height:0;position:absolute;" aria-hidden="true" focusable="false">
    <linearGradient id="gradient-top-bottom" x1="0" x2="0" y1="0" y2="1">
        <stop offset="0%" stop-color="rgba(78,110,191,0.3)"></stop>
        <stop offset="80%" stop-color="rgba(78,110,191,0.1)"></stop>
        <stop offset="100%" stop-color="rgba(78,110,191,0.00)"></stop>
    </linearGradient>
</svg>