<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="comptage-velo-donnees-compteurs">
        <div ng-init="variables = {'min':undefined, 'max':undefined};
                                  rgbstart = [0,55,237];
                                  rgbend = [180,197,241]">

            <h3># of cyclists, by month and day, with bubbles</h3>

            <div ods-adv-analysis="results"
                 ods-adv-analysis-context="datum"
                 ods-adv-analysis-select="sum(sum_counts) as count"
                 ods-adv-analysis-group-by="month(date) as month, day(date) as day"
                 ods-adv-analysis-limit="-1"
                 ods-adv-analysis-order-by="month asc, day asc">
                {{
                variables.numrow = (results | toObject:"month" | numKeys) ;
                variables.numcol = (results | toObject:"day" | numKeys) ;
                variables.listrow = (results | toObject:"month" | keys | orderBy) ;
                variables.listcol = (results | toObject:"day" | keys | orderBy) ; ""}}

                <!--
                    To compute color ranges lateron, you need to get the min and max values from the analysis
                    this block list all values, and store the min and max in variables each time it finds a new one.
                -->
                <span ng-repeat="res in results">
                    {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                    {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                </span>

                <!-- the grid -->
                <div class="bubblemap"
                     ng-class="{'display-values': variables.displayvalues}"
                     ng-if="variables.min && variables.max">

                    <!-- X axis : (bottom horizontal) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listcol"
                         style="grid-column: {{ i + 2 }};
                                grid-row: {{variables.numrow + 1}};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Y axis : (left vertical) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listrow"
                         style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Grid content -->
                    <div class="cell square"
                         ng-repeat="e in results"
                         ng-init="val = ((e.count - variables.min) / (variables.max - variables.min))"
                         style="grid-column: {{variables.listcol.indexOf(e.day) + 2}};
                                grid-row: {{variables.listrow.indexOf(e.month) + 1}};">
                        <div class="round"
                             style="width : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;
                                    height : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;
                                    background-color: {{ 'rgb(' +
                                                        ((val * rgbstart[0] + (1 - val) * rgbend[0]) | math : 'floor') +
                                                        ',' +
                                                        ((val * rgbstart[1] + (1 - val) * rgbend[1]) | math : 'floor') +
                                                        ',' +
                                                        ((val * rgbstart[2] + (1 - val) * rgbend[2]) | math : 'floor') +
                                                        ')' }};"
                             ods-tooltip="{{e.count | number}}">
                        </div>
                    </div>
                </div>

                <div class="bubblemap-sub row">
                    <div class="col-sm-6">

                    </div>
                    <div class="col-sm-6">
                        <div class="bubblemap-legend">
                            <div class="bubblemap-legend__min-value">{{ variables.min | number }}</div>
                            <div class="bubblemap-legend__gradient"
                                 style="background: linear-gradient(270deg,
                                                                {{ 'rgb('+rgbstart[0]+','+rgbstart[1]+','+rgbstart[2]+')' }},
                                                                {{ 'rgb('+rgbend[0]+','+rgbend[1]+','+rgbend[2]+')' }}
                                     )"></div>
                            <div class="bubblemap-legend__max-value">{{ variables.max | number }}</div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>

