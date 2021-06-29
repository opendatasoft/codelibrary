<ods-dataset-context context="ushospitals,ushospitalswithoutgeo"
                     ushospitals-dataset="us-hospitals"
                     ushospitals-domain="userclub"
                     ushospitalswithoutgeo-dataset="us-hospitals"
                     ushospitalswithoutgeo-domain="userclub"
                     ushospitalswithoutgeo-parameters="{'q':'#null(beds)'}">

    <div class="row">
        <div class="col-sm-offset-4 col-sm-4">
            <ul ods-aggregation="with,without"
                ods-aggregation-with-context="ushospitals"
                ods-aggregation-with-function="COUNT"
                ods-aggregation-without-context="ushospitalswithoutgeo"
                ods-aggregation-without-function="COUNT">
                {{ rate = without / with * 100 ; '' }}
                <div class="row column">
                    <div class="card">
                        <h3>
                            {{ rate | number : 1 }} % with poor data quality
                        </h3>
                        <p>
                            {{ without | number }} records have no value in "beds" field
                        </p>
                        <span class="jauge-container">
                                <span class="jauge"
                                      style="background: linear-gradient(to top, red, red {{ rate | number : 0 }}%, white {{ rate | number : 0 }}%, white);"></span>
                            </span>
                    </div>
                </div>
            </ul>
        </div>
    </div>
</ods-dataset-context>
