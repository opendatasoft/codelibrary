<ods-dataset-context context="ushospitals,ushospitalswithoutgeo"
                     ushospitals-dataset="us-hospitals"
                     ushospitals-domain="userclub"
                     ushospitalswithoutgeo-dataset="us-hospitals"
                     ushospitalswithoutgeo-domain="userclub"
                     ushospitalswithoutgeo-parameters="{'q':'#null(geo_point)'}">

    <div class="row">
        <div class="col-sm-offset-3 col-sm-6">
            <ul ods-aggregation="with,without"
                ods-aggregation-with-context="ushospitals"
                ods-aggregation-with-function="COUNT"
                ods-aggregation-without-context="ushospitalswithoutgeo"
                ods-aggregation-without-function="COUNT">
                {{ rate = (with - without) / with * 100 ; '' }}
                <div class="row bar">
                    <div class="card">
                        <h3>
                            Data quality check
                        </h3>
                        <p>
                            {{ rate | number : 1 }} % of hospitals has geo-coordinates
                        </p>
                        <span class="jauge-container">
                            <span class="jauge"
                                  style="width: {{ rate }}%;
                                         background-color: #142e7b;"></span>
                        </span>
                    </div>
                </div>
            </ul>
        </div>
    </div>
</ods-dataset-context>
