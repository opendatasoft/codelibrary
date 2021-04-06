<ods-dataset-context context="uraniumproduction"
                     uraniumproduction-dataset="uranium-production"
                     uraniumproduction-domain="userclub">
    <div ods-aggregation="aggregation"
         ods-aggregation-context="uraniumproduction"
         ods-aggregation-function="SUM"
         ods-aggregation-expression="tonnes_of_uranium">
        <div class="row">
            <div class="col-sm-offset-4 col-sm-4">
                <!-- KPI box component -->
                <div ng-if="true"
                     ng-init="from = 0;
                              nbticks = 30;
                              delay = 100;
                              tick = 0;"
                     class="kpi-card">
                    <i class="kpi-icon fa fa-superpowers" aria-hidden="true"></i>
                    <ods-timer
                            stop-condition="from >= aggregation"
                            delay="delay"
                            auto-start="true"
                            exec="from = from + ((aggregation || 0) / nbticks);">
                    </ods-timer>
                    <h2 class="kpi-title">{{ from | number:0 }}</h2>
                    <p class="kpi-description">tons of uranium produced since 2017</p>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
