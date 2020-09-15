<ods-dataset-context context="shanghaiworlduniversityranking"
                     shanghaiworlduniversityranking-dataset="shanghai-world-university-ranking"
                     shanghaiworlduniversityranking-domain="public"
                     shanghaiworlduniversityranking-parameters="{'sort':'world_rank'}">
    <div class="row">
        <div class="col-md-7">
            <ods-chart single-y-axis="true"
                       min="0" max="110" step="10"
                       labels-x-length="43"
                       label-x="University name">
                <ods-chart-query context="shanghaiworlduniversityranking"
                                 field-x="university_name"
                                 maxpoints="10" sort="serie1-3">
                    <ods-chart-serie expression-y="pub"
                                     chart-type="column"
                                     function-y="MAX"
                                     label-y="Best Publication score" color="#FF515A"
                                     display-values="true">
                    </ods-chart-serie>
                    <ods-chart-serie expression-y="alumni"
                                     chart-type="column"
                                     function-y="MAX"
                                     label-y="Best Alumni score" color="#1B6698"
                                     display-values="true">
                    </ods-chart-serie>
                    <ods-chart-serie expression-y="award"
                                     chart-type="column"
                                     function-y="MAX"
                                     label-y="Best Award score" color="#FCD23B"
                                     display-values="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
        <div class="col-md-5">
            <div ods-analysis="analysisshanghai"
                 ods-analysis-context="shanghaiworlduniversityranking"
                 ods-analysis-max="10"
                 ods-analysis-x="university_name"
                 ods-analysis-serie-bestpubscore="MAX(pub)"
                 ods-analysis-serie-bestalumniscore="MAX(alumni)"
                 ods-analysis-serie-bestawardscore="MAX(award)"
                 ods-analysis-sort="bestawardscore">
                <pre ng-bind="analysisshanghai|json"></pre>
            </div>
        </div>
    </div>
</ods-dataset-context>