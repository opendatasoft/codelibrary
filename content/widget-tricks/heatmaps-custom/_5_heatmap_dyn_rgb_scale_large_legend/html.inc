<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="base-nationale-des-lieux-de-covoiturage-en-france">

        <div ng-init="variables = {'min':undefined, 'max':undefined};
                                  rgbstart = [0,55,237];
                                  rgbend = [180,197,241];
                                  xaxis = 'type';
                                  yaxis = 'region';
                                  yLegendWidth = 2">

            <h3># of car parks by region and by type</h3>
            <!--
                group-by month and day, then for each group by dimension, with toObject and keys filter we get the list of all values.
                it constructs the x and y axis by listing all different values for each axis.

                xaxis and yaxis variables are here to avoid using specific id at several places in the code.
                therefore, be sure to name your adv-analysis group-by accordingly.
            -->
            <div ods-adv-analysis="results"
                 ods-adv-analysis-context="datum"
                 ods-adv-analysis-select="sum(spot_size) as count"
                 ods-adv-analysis-group-by="reg_name as {{ yaxis }}, spot_type as {{ xaxis }}">
                {{
                variables.numrow = (results | toObject:yaxis | numKeys) ;
                variables.numcol = (results | toObject:xaxis | numKeys) ;
                variables.listrow = (results | toObject:yaxis | keys | orderBy) ;
                variables.listcol = (results | toObject:xaxis | keys | orderBy) ;
                ""
                }}

                <!--
                    To compute color ranges lateron, you need to get the min and max values from the analysis
                    this block list all values, and store the min and max in variables each time it finds a new one.
                -->
                <span ng-repeat="res in results">
                    {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                    {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                </span>

                <!-- The grid -->
                <div class="heatmap"
                     ng-class="{'display-values': variables.displayvalues}"
                     ng-if="variables.min && variables.max">

                    <!-- X axis : (bottom horizontal) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listcol"
                         class="x-axis-centered x-axis-rotate"
                         style="grid-column: {{ i + 1 + yLegendWidth }} ;
                                grid-row: {{variables.numrow + 1}};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Y axis : (left vertical) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listrow"
                         class="y-axis"
                         style="grid-column: 1 / span {{ yLegendWidth }};
                                grid-row: {{ i + 1 }};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Grid content -->
                    <div class="cell"
                         ng-repeat="e in results"
                         ng-init="val = ((e.count - variables.min) / (variables.max - variables.min))"
                         style="background-color: {{ 'rgb(' +
                                                    ((val * rgbstart[0] + (1 - val) * rgbend[0]) | math : 'floor') +
                                                    ',' +
                                                    ((val * rgbstart[1] + (1 - val) * rgbend[1]) | math : 'floor') +
                                                    ',' +
                                                    ((val * rgbstart[2] + (1 - val) * rgbend[2]) | math : 'floor') +
                                                    ')' }};
                                               grid-column: {{variables.listcol.indexOf(e[xaxis]) + 1 + yLegendWidth}};
                                               grid-row: {{variables.listrow.indexOf(e[yaxis]) + 1}};">
                        {{e.count | number}}
                    </div>
                </div>

                <div class="heatmap-sub row">
                    <div class="col-xs-6">
                        <div class="heatmap-switch">
                            <p>Display values: </p>
                            <label class="switch">
                                <input class="switch-input"
                                       ng-model="variables.displayvalues"
                                       type="checkbox">
                                <div class="switch-button">
                                    <span class="switch-button-left">OFF</span>
                                    <span class="switch-button-right">ON</span>
                                </div>
                            </label>
                        </div>
                    </div>
                    <div class="col-xs-6">
                        <div class="heatmap-legend">
                            <div class="heatmap-legend__min-value">{{ variables.min | number }}</div>
                            <div class="heatmap-legend__gradient"
                                 style="background: linear-gradient(270deg,
                                                                        {{ 'rgb('+rgbstart[0]+','+rgbstart[1]+','+rgbstart[2]+')' }},
                                                                        {{ 'rgb('+rgbend[0]+','+rgbend[1]+','+rgbend[2]+')' }}
                                     )"></div>
                            <div class="heatmap-legend__max-value">{{ variables.max | number }}</div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>

