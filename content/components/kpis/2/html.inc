<div class="row">
    <div class="col-sm-offset-4 col-sm-4">
        <ods-dataset-context context="ushospitals"
                             ushospitals-domain="userclub"
                             ushospitals-dataset="us-hospitals">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                <h2 class="kpi-title"
                    ods-aggregation="count"
                    ods-aggregation-context="ushospitals"
                    ods-aggregation-function="COUNT">
                    {{ count | number }}
                </h2>
                <p class="kpi-description">
                    Number of hospitals
                </p>
            </div>
        </ods-dataset-context>
    </div>
</div>
