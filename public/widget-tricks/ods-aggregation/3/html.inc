<div class="row">
    <div class="col-sm-offset-4 col-sm-4">
        <ods-dataset-context context="ushospitals,ushospitalshelipad"
                             ushospitals-domain="userclub"
                             ushospitals-dataset="us-hospitals"
                             ushospitalshelipad-domain="userclub"
                             ushospitalshelipad-dataset="us-hospitals"
                             ushospitalshelipad-parameters="{'refine.helipad':'Y'}">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-h-square" aria-hidden="true"></i>
                <h2 class="kpi-title"
                    ods-aggregation="hospitals,hospitalshelipad"
                    ods-aggregation-hospitals-context="ushospitals"
                    ods-aggregation-hospitals-function="COUNT"
                    ods-aggregation-hospitalshelipad-context="ushospitalshelipad"
                    ods-aggregation-hospitalshelipad-function="COUNT">
                    {{ hospitalshelipad / hospitals * 100 | number : 0 }} %
                </h2>
                <p class="kpi-description">
                    of US hospitals are equipped with an helipad
                </p>
            </div>
        </ods-dataset-context>
    </div>
</div>
