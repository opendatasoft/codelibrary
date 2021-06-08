
    <ods-dataset-context context="recordstores" recordstores-dataset="record-stores0" recordstores-domain="public">
        <div class="row chart-space chart-bottom-line">
            <div class="col-md-offset-3 col-md-6 title">
                <h2>
                    Interesting title
                </h2>
            </div>
            <div class="col-md-offset-2 col-md-8 title">
                <p>
                    Quam ob rem ut ii qui superiores sunt submittere se debent in amicitia, sic quodam modo inferiores extollere.
                    <span class="brand">Opendatasoft</span>.
                </p>
            </div>
        </div>
        <div class="row chart-space">
            <div class="col-md-6 chart-block">
                <div class="chart-inner-block">
                    <ods-chart>
                        <ods-chart-query context="recordstores" field-x="city" maxpoints="20" sort="serie1-1">
                            <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Top 20 cities" color="#2C3F56" scientific-display="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
            <div class="col-md-6 chart-text">
                <h2>
                    A block subtitle
                </h2>
                <p>
                    Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt.
                </p>
                <a class="access" href="#">ambo venenorum artibus</a>
            </div>
        </div>
        <div class="row chart-space">
            <div class="col-md-7 chart-text">
                <h2>
                    A block subtitle
                </h2>
                <p>
                    Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt.
                    <br/><span class="code">code style</span>
                    <br/><a target="_blanck" href="#">link style</a>
                </p>
                <a class="access" href="#">ambo venenorum artibus</a>
            </div>
            <div class="col-md-5 chart-block">
                <div class="chart-inner-block">
                    <ods-chart>
                        <ods-chart-query context="recordstores" field-x="city" maxpoints="10" sort="serie1-1">
                            <ods-chart-serie chart-type="pie" function-y="COUNT" color="range-Paired" scientific-display="true">
                            </ods-chart-serie>
                        </ods-chart-query>
                    </ods-chart>
                </div>
            </div>
        </div>
        <div class="row chart-space chart-bottom-line">
            <div class="col-md-4 chart-text">
                <h2>
                    A block subtitle
                </h2>
                <p>
                    Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt.
                </p>
                <div class="chart-inner-block chart-inner-block__kpi">
                    <div ods-aggregation="cnt"
                         ods-aggregation-context="recordstores"
                         ods-aggregation-function="COUNT">
                        {{ cnt | number }}
                    </div>
                    <div class="chart-inner-block__kpi-legend">
                        Aggregation
                    </div>
                </div>
                <a class="access" href="#">ambo venenorum artibus</a>
            </div>
            <div class="col-md-8 chart-block">
                <div id="table1" class="chart-inner-block">
                    <ods-table context="recordstores"></ods-table>
                </div>
            </div>
        </div>
        <div class="row chart-space">
            <div class="col-md-offset-2 col-md-8 chart-text chart-text__announcement">
                <h2>
                    A block subtitle
                </h2>
                <p>
                    Non ergo erunt homines deliciis diffluentes audiendi, si quando de amicitia, quam nec usu nec ratione habent cognitam, disputabunt. <span class="brand">your PROJECT</span> or <span class="brand">your APP</span>.
                </p>
                <a target="_blanck" href="#"><i class="fa fa-hand-o-right" aria-hidden="true"></i>ambo venenorum artibus</a>
            </div>
        </div>
    </ods-dataset-context>
