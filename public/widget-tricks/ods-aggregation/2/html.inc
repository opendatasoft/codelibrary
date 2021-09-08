<ods-dataset-context context="observationsynop"
                     observationsynop-dataset="observation-synop"
                     observationsynop-domain="userclub">

    <div class="row">
        <div class="col-sm-offset-2 col-sm-4">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-thermometer-empty" aria-hidden="true"></i>
                <p class="kpi-title"
                   ods-aggregation="maxtemp"
                   ods-aggregation-context="observationsynop"
                   ods-aggregation-function="MAX"
                   ods-aggregation-expression="tc">
                    {{ maxtemp | number : 1 }}
                </p>
                <p class="kpi-description">
                    Max temperature (°C)
                </p>
            </div>
        </div>
        <div class="col-sm-4">
            <!-- KPI box component -->
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
        </div>
    </div>

</ods-dataset-context>