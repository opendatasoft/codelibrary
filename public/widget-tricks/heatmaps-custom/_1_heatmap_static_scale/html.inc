<div class="container">
    <ods-dataset-context context="datum"
                         datum-dataset="comptage-velo-donnees-compteurs"
                         datum-parameters="{'q':'totem'}">
        <div ng-init="variables = {};
                      xaxis = 'nom_compteur';
                      yaxis = 'year';
                      yLegendWidth = 1">
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

                <!-- the grid -->
                <div class="heatmap"
                     ng-class="{'display-values': variables.displayvalues}">

                    <!-- X axis : (bottom horizontal) list all values and set the correct position -->
                    <div class="x-axis-centered"
                         ng-repeat="(i,e) in variables.listcol"
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
                         ng-repeat="(i,e) in results"
                         ng-class="{'orange': e.count > 150, 'lightgreen': e.count > 100 && e.count <= 150,'darkgreen': e.count < 100}"
                         style="grid-column: {{variables.listcol.indexOf(e[xaxis]) + 1 + yLegendWidth}};
                                grid-row: {{variables.listrow.indexOf(e[yaxis]) + 1}};">
                        {{e.count | number : 0}}
                    </div>
                </div>

                <div class="heatmap-sub row">
                    <div class="col-sm-6">
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
                    <div class="col-sm-6">
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>

