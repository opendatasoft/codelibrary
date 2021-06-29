<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="comptage-velo-donnees-compteurs"
                         datum-parameters="{'q':'totem'}">
        <div ng-init="variables = {};
                      xaxis = 'nom_compteur';
                      yaxis = 'year';">
            <h3>Average number of cyclists by counting totem</h3>

            <div ods-adv-analysis="results"
                 ods-adv-analysis-context="datum"
                 ods-adv-analysis-select="avg(sum_counts) as count"
                 ods-adv-analysis-group-by="year(date) as {{ yaxis }}, {{ xaxis }}">
                {{
                variables.numrow = (results | toObject:yaxis | numKeys) ;
                variables.numcol = (results | toObject:xaxis | numKeys) ;
                variables.listrow = (results | toObject:yaxis | keys | orderBy) ;
                variables.listcol = (results | toObject:xaxis | keys | orderBy) ; ""}}

                <!--
                                    To compute color ranges and bubble size lateron, you need to get the min and max values from the analysis
                                    this block list all values, and store the min and max in variables each time it finds a new one.
                                -->
                <span ng-repeat="res in results">
                    {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                    {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                </span>

                <!-- the grid -->
                <div class="bubblemap"
                     ng-class="{'display-values': variables.displayvalues}">

                    <!-- X axis : (bottom horizontal) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listcol"
                         class="x-axis"
                         style="grid-column: {{ i + 2 }};
                                    grid-row: {{variables.numrow + 1}};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Y axis : (left vertical) list all values and set the correct position -->
                    <div ng-repeat="(i,e) in variables.listrow"
                         class="y-axis"
                         style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                        <strong>{{e}}</strong>
                    </div>

                    <!-- Grid content -->
                    <div class="cell square"
                         ng-repeat="e in results"
                         style="grid-column: {{variables.listcol.indexOf(e[xaxis]) + 2}};
                                grid-row: {{variables.listrow.indexOf(e[yaxis]) + 1}};">
                        <div class="round"
                             ng-class="{'orange': e.count > 150, 'lightgreen': e.count > 100 && e.count <= 150,'darkgreen': e.count < 100}"
                             style="width : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;
                                    height : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;
                             ods-tooltip=" {{e.count | number}}
                        ">
                        {{e.count | number : 0}}
                    </div>
                </div>
            </div>

        </div>
</div>
</ods-dataset-context>
</div>

