<ods-dataset-context context="ctx1"
                     ctx1-dataset="shanghai-world-university-ranking"
                     ctx1-domain="userclub">
    <div class="row">
        <div class="col-md-9">
            <div class="chart-box">
                <!-- ng-if directive to display this chart only if there is no refine on country (= no click on country column) thanks to the "!" prior to the expression
refine-on-click on the field country that is trigerring the second ods-chart  -->
                <div ng-if="!ctx1.parameters['refine.country']">
                    <h3># of rankings by country</h3>
                    <ods-chart align-month="true" labels-x-length="20">
                        <ods-chart-query context="ctx1" field-x="country" maxpoints="25" sort="serie1-1">
                            <ods-chart-serie expression-y="total_score" chart-type="pie" function-y="COUNT"
                                             color="YlGnBu"
                                             scientific-display="true"
                                             label-y="# of rankings"
                                             refine-on-click-context="ctx1"
                                             refine-on-click-ctx1-context-field="country">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <!-- ng-if directive to display this chart only if there is a refine on country
the context is still ctx1 but some parameters are different in the ods-chart-query (x axis) and the ods-chart-serie (function-y)-->
                <div ng-if="ctx1.parameters['refine.country']">
                    <h3>Best ranking by university</h3>
                    <ods-chart align-month="true" labels-x-length="20">
                        <ods-chart-query context="ctx1" field-x="university_name" maxpoints="20" sort="serie1-1">
                            <ods-chart-serie expression-y="total_score" chart-type="pie" function-y="MAX" color="YlGnBu"
                                             scientific-display="true"
                                             label-y="Best score">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </div>
        <!-- here we want to display the selected country as a reminder for the end user when he/she deeps dive into universities
with the directive ng-repeat, we enumerate each item in the array ([].concat(ctx1.parameters['refine.country']) to display the country
the concat method is used here to make sure the value is an array ie ["United States"] and not a string: United States -->
        <div class="col-md-3 filters">
            <p class="appliedfilter" ng-repeat="filter in ([].concat(ctx1.parameters['refine.country']))">
                {{filter}}
            </p>
            <!-- defining the reset button: it is only displayed if there is a refine on country with the ng-if condition
ng-click: when you click on it, it is removing the refine on ctx1 context -->
            <a href class="resetfilter"
               ng-if="ctx1.parameters['refine.country']"
               ng-click="ctx1.parameters['refine.country'] = undefined">Reset filter</a>
        </div>
    </div>
</ods-dataset-context>