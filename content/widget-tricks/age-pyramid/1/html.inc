<div ng-init="variables = {'index' : {}, 'max' : {}, 'displayvalues' : false};
              agefield = 'age';
              genderfield = 'sex';
              valuefield = 'value'">
    <ods-dataset-context context="ctx" 
                         ctx-dataset="north-carolina-population-overview-2010"
                         ctx-domain="userclub">

        <div class="row">
        <h3>Age pyramid for the state of North Carolina, USA</h3>
            <div ods-adv-analysis="analysis"
                 ods-adv-analysis-context="ctx"
                 ods-adv-analysis-select="sum(value) as pyramidnumber"
                 ods-adv-analysis-group-by="sex, age"
                 ods-adv-analysis-order-by="age">
                <div ods-adv-analysis="totalbygender"
                     ods-adv-analysis-context="ctx"
                     ods-adv-analysis-group-by="sex"
                     ods-adv-analysis-select="SUM(value) as totalgender"
                     ods-adv-analysis-order-by="sex">
                    {{ totalmenandwomen = (totalbygender | toObject : genderfield) ; "" }}
                    <div ods-aggregation="total"
                         ods-aggregation-context="ctx"
                         ods-aggregation-expression="value"
                         ods-aggregation-function="SUM">
                        <div ods-subaggregation="analysis"
                             ods-subaggregation-serie-maxcount="MAX(pyramidnumber)">
                            {{ variables.max['pyramidnumber'] = results[0].maxcount ; "" }}
                            <div ng-repeat="result in analysis">
                                <div ng-init="variables.index[result.age] = variables.index[result.age] || {}; 
                                              variables.index[result.age][result.sex] = result.pyramidnumber">
                                </div>
                            </div>
                        </div>
                    </div>
                    <!--- the pyramid --->
                    <div class="pyramid-line">
                        <!--- left side : title and total --->
                        <div class="pyramid-side pyramid-side-left">
                            Female (total : {{totalmenandwomen['Female'].totalgender | number }})
                        </div>
                        <!-- middle : title --->
                        <div class="pyramid-middle">
                            Age
                        </div>
                        <!--- right side : title and total --->
                        <div class="pyramid-side pyramid-side-right">
                            Male (total : {{totalmenandwomen['Male'].totalgender | number }})
                        </div>
                    </div>
                    <div class="pyramid-line" ng-repeat="i in variables.index|keys">
                        <!--- left values to be displayed when the switch button is on --->
                        <div class="pyramid-value left">
                            <span ng-if="variables.displayvalues == true">{{variables.index[i]['Female'] | number}}</span>
                        </div>
                        <!--- left side : bars --->
                        <div class="pyramid-side pyramid-side-left">
                            <div class="fond_bar" style="width : 100%">
                                <div class="bar" style="width : {{ variables.index[i]['Female']*100/variables.max['pyramidnumber'] || 0 }}%">
                                </div>
                            </div>
                        </div>
                        <!--- middle : the different age classes titles --->
                        <div class="pyramid-middle">
                            {{ i }}
                        </div>
                        <!--- right side : bars --->
                        <div class="pyramid-side pyramid-side-right">
                            <div class="fond_bar" style="width : 100%">
                                <div class="bar" style="width : {{ variables.index[i]['Male']*100/variables.max['pyramidnumber'] || 0 }}%">
                                </div>
                            </div>
                        </div>
                        <!--- right values to be displayed when the switch button is on --->
                        <div class="pyramid-value right">
                            <span ng-if="variables.displayvalues == true"> {{variables.index[i]['Male'] | number}}</span>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <!--- switch button to display values --->
        <div class="row">
            <div class="col-sm-6">
                <div class="pyramid-switch">
                    <p>Display values: </p>
                    <label class="switch">
                        <input class="switch-input"
                               type="checkbox"
                               ng-model="variables.displayvalues"
                               ng-true-value="true"
                               ng-false-value="false"
                               ng-checked="variables.view == true">
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
    </ods-dataset-context>
</div>

