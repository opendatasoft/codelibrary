<ods-dataset-context context="shanghai"
                     shanghai-dataset="shanghai-world-university-ranking"
                     shanghai-domain="public">
    <div class="row">
        <div class="col-md-6">
            <h3>
                Best Universities (regarding publication ranking)
            </h3>
            <ods-chart single-y-axis="true" align-month="true">
                <ods-chart-query context="shanghai"
                                 field-x="university_name" maxpoints="5" sort="serie1-1">
                    <ods-chart-serie expression-y="pub" chart-type="column" function-y="AVG"
                                     label-y="Average publication ranking" color="#142E7B" display-units="false"
                                     display-values="true" scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
            <h3>
                Worst Universities (regarding publication ranking)
            </h3>
            <ods-chart single-y-axis="true" align-month="true">
                <ods-chart-query context="shanghai"
                                 field-x="university_name" maxpoints="5" sort="-serie1-1">
                    <ods-chart-serie expression-y="pub" chart-type="column" function-y="AVG"
                                     label-y="Average publication ranking" color="#142E7B" display-units="false"
                                     display-values="true" scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>

        <div class="col-md-6">
            <ods-dataset-context context="shanghai"
                                 shanghai-dataset="shanghai-world-university-ranking"
                                 shanghai-domain="public">
                <div ods-analysis="analysisminmax"
                     ods-analysis-context="shanghai"
                     ods-analysis-max="0"
                     ods-analysis-x="university_name"
                     ods-analysis-serie-pubrank="AVG(pub)"
                     ods-analysis-sort="pubrank">
                    <h2>
                        First and last items of ods-analysis
                    </h2>
                    <h3>
                        Best University (regarding publication ranking)
                    </h3>
                    <p>
                        <b>{{ analysisminmax.results[0].x }}</b> with a score of <b>{{ analysisminmax.results[0].pubrank
                        }}</b>
                    </p>
                    <h3>
                        Worst University (regarding publication ranking)
                    </h3>
                    <p>
                        <b>{{ analysisminmax.results[analysisminmax.results.length-1].x }}</b> with a score of <b>{{
                        analysisminmax.results[analysisminmax.results.length-1].pubrank | number : 2 }}</b>
                    </p>
                    <br/><br/>
                    <div ods-subaggregation="analysisminmax.results"
                         ods-subaggregation-serie-bestrank="MAX(pubrank)"
                         ods-subaggregation-serie-worstrank="MIN(pubrank)">
                        <h2>
                            Max and min values of ods-analysis results
                        </h2>
                        <p>
                            Best ranking : <b>{{ results[0].bestrank | number }}</b>
                        </p>
                        <p>
                            Worst ranking : <b>{{ results[0].worstrank | number:2 }}</b>
                        </p>
                    </div>
                    <br/><br/>
                    <h2>
                        Length of ods-analysis.results
                    </h2>
                    <p>
                        Number of universities in this ranking : <b>{{ analysisminmax.results.length | number }}</b>
                    </p>
                </div>
            </ods-dataset-context>
        </div>
    </div>
</ods-dataset-context>
