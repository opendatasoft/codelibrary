<div class="row">
    <div class="col-sm-offset-2 col-sm-4">
        <ods-dataset-context context="ushospitals"
                             ushospitals-domain="userclub"
                             ushospitals-dataset="us-hospitals">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                <p class="kpi-title"
                   ods-aggregation="count"
                   ods-aggregation-context="ushospitals"
                   ods-aggregation-function="COUNT">
                    {{ count | number }}
                </p>
                <p class="kpi-description">
                    Number of hospitals
                </p>
            </div>
        </ods-dataset-context>
    </div>

    <div class="col-sm-4">
        <!-- KPI box component -->
        <ods-dataset-context context="observationsynop"
                             observationsynop-dataset="observation-synop"
                             observationsynop-domain="userclub">
            <div class="kpi-card">
                <i class="kpi-icon fa fa-tint" aria-hidden="true"></i>
                <p class="kpi-title"
                   ods-aggregation="avghumidity"
                   ods-aggregation-context="observationsynop"
                   ods-aggregation-function="AVG"
                   ods-aggregation-expression="u">
                    {{ avghumidity | number : 1}}
                </p>
                <p class="kpi-description">
                    Average humidity (%)
                </p>
            </div>
        </ods-dataset-context>
    </div>
</div>
