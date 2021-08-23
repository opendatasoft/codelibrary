<ods-dataset-context 
                     context="ctx" 
                     ctx-dataset="north-carolina-population-overview-2010" 
                     ctx-domain="userclub"
                     ctx-parameters="{'disjunctive.sex':true,'disjunctive.age':true}">
    <div ng-init="index = {}; max = {};view = 'novalue'">
        <div class="row">
            <div ods-analysis="analysis"
                 ods-analysis-context="ctx"
                 ods-analysis-max="0"
                 ods-analysis-x-age="age"
                 ods-analysis-x-gender="sex"
                 ods-analysis-serie-pyramidnumber="SUM(value)"
                 ods-analysis-sort="-x.age">

                <div ods-analysis="totalbygender"
                     ods-analysis-context="ctx"
                     ods-analysis-x="sex"
                     ods-analysis-serie-totalgender="SUM(value)"
                     ods-analysis-sort="alphanum">
                    {{ totalmenandwomen = (totalbygender.results | toObject : 'x') ; "" }}
                    <div ods-aggregation="total"
                         ods-aggregation-context="ctx"
                         ods-aggregation-expression="value"
                         ods-aggregation-function="SUM">
                        <div ods-subaggregation="analysis.results"
                             ods-subaggregation-serie-maxcount="MAX(pyramidnumber)">
                            {{ max['pyramidnumber'] = results[0].maxcount ; "" }}
                            <div ng-repeat="result in analysis.results">
                                <div ng-init="index[result.x.age] = index[result.x.age] || {}; 
                                              index[result.x.age][result.x.sex] = result.pyramidnumber">
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="pyramid-line">
                        <div class="pyramid-side pyramid-side-left">
                            Female (total : {{totalmenandwomen['Female'].totalgender | number }})
                        </div>
                        <div class="pyramid-middle-yob">
                            Age
                        </div>
                        <div class="pyramid-side pyramid-side-right">
                            Male (total : {{totalmenandwomen['Male'].totalgender | number }})
                        </div>
                    </div>
                    <div class="pyramid-line" ng-repeat="i in index|keys">
                        <div class="pyramid-value left"
                             ng-if="view == 'value'">
                            {{index[i]['Female'] | number}}
                        </div>
                        <div class="pyramid-side pyramid-side-left">

                            <div class="fond_bar" style="width : 100%" 
                                 ods-tooltip="{{index[i]['Female'] | number}}">

                                <div class="bar" style="width : {{ index[i]['Female']*100/max['pyramidnumber'] || 0 }}%">

                                </div>
                            </div>
                        </div>
                        <div class="pyramid-middle-yob">
                            {{ i }}
                        </div>

                        <div class="pyramid-side pyramid-side-right">
                            <div class="fond_bar" style="width : 100%" ods-tooltip="{{ index[i]['Male'] | number }}">

                                <div class="bar" style="width : {{ index[i]['Male']*100/max['pyramidnumber'] || 0 }}%">

                                </div>
                            </div>

                        </div>
                        <div class="pyramid-value right"
                             ng-if="view == 'value'">
                            {{index[i]['Male'] | number}}
                        </div>

                    </div>
                </div>
            </div>
        </div>
        <div class="row">
            <div class="col-sm-6">
                <div class="pyramid-switch">
                    <p>Display values: </p>
                    <label class="switch">
                        <input class="switch-input"
                               type="checkbox"
                               ng-model="view"
                           ng-true-value="'value'"
                           ng-false-value="'novalue'"
                           ng-checked="view == 'value'">
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
</ods-dataset-context>
