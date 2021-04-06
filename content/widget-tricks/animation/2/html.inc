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
                              nbticks = 15;
                              delay = 100;
                              tick = 0;
                              reloadeverynbtick = 100;"
                     class="kpi-card">
                    {{ to = aggregation ; ''}}
                    <i class="kpi-icon fa fa-superpowers" aria-hidden="true"></i>
                    <ods-timer stop-condition=""
                               delay="delay"
                               auto-start="true"
                               exec="(from < to ? from = (((from + ((to || 0) / nbticks)) * 100) | math : 'round') / 100 : undefined);
                                     (tick = tick + 1);
                                     (tick % reloadeverynbtick == 0 ? from = 0 : undefined); ">
                    </ods-timer>
                    <h2 class="kpi-title">{{ from | number : 0 }}</h2>
                    <p class="kpi-description">tons of uranium produced since 2017</p>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
