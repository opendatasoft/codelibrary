<ods-dataset-context context="ctx2"
                     ctx2-dataset="shanghai-world-university-ranking"
                     ctx2-domain="userclub">
    <div class="row">
        <div class="col-md-9">
            <div class="chart-box">
                <!-- ng-if directive to display this chart only if there is no refine on country (= no click on country column) and no refine on the university thanks to the "!" prior each expression
refine-on-click on the field country that is trigerring the second ods-chart  -->
                <div ng-if="!ctx2.parameters['refine.country'] && !ctx2.parameters['refine.university_name']">
                    <h3># of rankings by country</h3>
                    <ods-chart align-month="true" labels-x-length="20">
                        <ods-chart-query context="ctx2" field-x="country" maxpoints="50" sort="serie1-1">
                            <ods-chart-serie expression-y="total_score" chart-type="column" function-y="COUNT"
                                             color="#2c7fb8" scientific-display="true"
                                             label-y="# of rankings"
                                             refine-on-click-context="ctx2"
                                             refine-on-click-ctx2-context-field="country">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <!-- ng-if directive to display this chart only if there is a refine on country and no refine on university
the context is still ctx2 but some parameters are different in the ods-chart-query (x axis) and the ods-chart-serie (function-y)
refine-on-click on the field university_name that is trigerring the third ods-chart -->
                <div ng-if="ctx2.parameters['refine.country'] && !ctx2.parameters['refine.university_name']">
                    <h3>Best ranking by university</h3>
                    <ods-chart align-month="true" labels-x-length="20">
                        <ods-chart-query context="ctx2" field-x="university_name" maxpoints="50" sort="serie1-1">
                            <ods-chart-serie expression-y="total_score" chart-type="column" function-y="MAX"
                                             color="#7fcdbb"
                                             scientific-display="true"
                                             label-y="Best score"
                                             refine-on-click-context="ctx2"
                                             refine-on-click-ctx2-context-field="university_name">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
                <!-- ng-if directive to display this chart only if there is a refine on country and a refine on university_name  -->
                <div ng-if="ctx2.parameters['refine.country'] && ctx2.parameters['refine.university_name']">
                    <h3>Score evolution by year</h3>
                    <ods-chart align-month="true" labels-x-length="20">
                        <ods-chart-query context="ctx2" field-x="year" maxpoints="50">
                            <ods-chart-serie expression-y="total_score" chart-type="column" function-y="MAX"
                                             color="#253494"
                                             scientific-display="true"
                                             label-y="Score">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </div>
        <!-- here we want to display the selected countries and universities as a reminder for the end user when he/she deeps dive into universities and scores
we want to make sure the value displayed is a string for the end user
when the country only has been refined, it is already the case for ctx2.parameters['refine.country']
however when country and university_name have been selected, the ctx2.parameters will be displayed as an array e.g. ["United Kingdom","University of Oxford"] and the join method will help us transform it as United Kingdom,University of Oxford -->
        <div class="col-md-3 filters">
            <p class="appliedfilter">
                {{ (ctx2.parameters | values).join(", ") || ctx2.parameters['refine.country'] }}
            </p>
            <!-- defining the reset button: Back to countries is only displayed if refine on country and the click cancels the refine country in the context parameters
Back to universities is only displayed if refine on universitie_name and the click cancels the refine on university_name in the context parameters -->
            <div class="resetfilters">
                <a href class="resetfilter"
                   ng-if="ctx2.parameters['refine.country'] && !ctx2.parameters['refine.university_name']"
                   ng-click="ctx2.parameters['refine.country'] = undefined">Back to countries</a>
                <a href class="resetfilter"
                   ng-if="ctx2.parameters['refine.university_name']"
                   ng-click="ctx2.parameters['refine.university_name'] = undefined">Back to universities</a>
            </div>
        </div>
    </div>
</ods-dataset-context>