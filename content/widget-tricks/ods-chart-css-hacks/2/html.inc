<ods-dataset-context context="communesetarrondissementsmunicipauxfrance" communesetarrondissementsmunicipauxfrance-dataset="communes-et-arrondissements-municipaux-france" communesetarrondissementsmunicipauxfrance-parameters="{'disjunctive.reg_code':true,'disjunctive.reg_name':true,'disjunctive.dep_code':true,'disjunctive.dep_name':true,'disjunctive.arrdep_name':true,'disjunctive.ze2010_name':true,'disjunctive.bv2012_name':true,'disjunctive.epci_code':true,'disjunctive.epci_name':true,'disjunctive.ept_name':true,'disjunctive.com_name':true,'disjunctive.com_arm_code':true,'disjunctive.com_arm_name':true}">

    <div class="row">
        <div class="col-sm-6">
            <div class="ods-box">
                <h2>
                    Default
                </h2>
                <ods-chart single-y-axis="true" single-y-axis-label="Number of cities" labels-x-length="25" align-month="true">
                    <ods-chart-query context="communesetarrondissementsmunicipauxfrance" field-x="dep_name" maxpoints="0">
                        <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Number of cities by department" color="#00C7B1" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
        <div class="col-sm-6">
            <div class="ods-box">
                <h2>
                    Lighter version
                </h2>
                <ods-chart class="lighter-y-legend"
                           single-y-axis="true" single-y-axis-label="Number of cities" labels-x-length="25" align-month="true">
                    <ods-chart-query context="communesetarrondissementsmunicipauxfrance" field-x="dep_name" maxpoints="0">
                        <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Number of cities by department" color="#00C7B1" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
        </div>
    </div>
</ods-dataset-context>