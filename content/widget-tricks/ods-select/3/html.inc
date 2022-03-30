<div class="container">
    <ods-dataset-context context="ctxanalysis,ctxrefine"
                         ctxanalysis-dataset="shanghai-world-university-ranking"
                         ctxanalysis-parameters="{'sort':'world_rank'}"
                         ctxrefine-dataset="shanghai-world-university-ranking"
                         ctxrefine-parameters="{'sort':'world_rank'}">
        <div ods-adv-analysis="rankings"
             ods-adv-analysis-context="ctxanalysis"
             ods-adv-analysis-group-by="university_name"
             ods-adv-analysis-select="MAX(world_rank_int) as maxscore, university_name"
             ods-adv-analysis-order-by="maxscore"
             ods-adv-analysis-limit="100">
            <h3>
                Select an university in this TOP 100 list (sorted by it's best ranking overall)
            </h3>
            <ods-select options="rankings"
                        selected-values="ctxrefine.parameters['refine.university_name']"
                        label-modifier="university_name + ', Best ranking: ' + maxscore"
                        value-modifier="university_name"
                        placeholder="Select an university"></ods-select>

            <div ng-if="!ctxrefine.parameters['refine.university_name'][0]">
                <h4>Select an university to see it's ranking details over years</h4>
            </div>

            <div ng-if="ctxrefine.parameters['refine.university_name'][0]">
                <h4>{{ ctxrefine.parameters['refine.university_name'][0] }} rankings details, over years</h4>
                <ods-chart single-y-axis="true" align-month="true">
                    <ods-chart-query context="ctxrefine" field-x="year" maxpoints="100"
                                     timescale="year">
                        <ods-chart-serie expression-y="pcp" chart-type="column" label-y="PCP score" function-y="AVG" color="#263891"
                                         scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="alumni" label-y="Alumni score" chart-type="column" function-y="AVG" color="#19630A"
                                         scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="award" label-y="Award score" chart-type="column" function-y="AVG" color="#F7B133"
                                         scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="pub" label-y="Pub score" chart-type="column" function-y="AVG" color="#BA0129"
                                         scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="ns" label-y="NS score" chart-type="column" function-y="AVG" color="#C0C5CC"
                                         scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="hici" label-y="HICI score" chart-type="column" function-y="AVG" color="#000000"
                                         scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>

            </div>

        </div>
    </ods-dataset-context>
</div>
