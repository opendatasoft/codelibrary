<ods-dataset-context context="uraniumproduction,uraniumproductionfrance"
                     uraniumproduction-dataset="uranium-production"
                     uraniumproduction-domain="userclub"
                     uraniumproductionfrance-dataset="uranium-production"
                     uraniumproductionfrance-domain="userclub"
                     uraniumproductionfrance-parameters="{'refine.country':'Kazakhstan'}">
    <div ods-aggregation="sum,sumkazakhstan"
         ods-aggregation-sum-context="uraniumproduction"
         ods-aggregation-sum-function="SUM"
         ods-aggregation-sum-expression="tonnes_of_uranium"
         ods-aggregation-sumkazakhstan-context="uraniumproductionfrance"
         ods-aggregation-sumkazakhstan-function="SUM"
         ods-aggregation-sumkazakhstan-expression="tonnes_of_uranium">
        <div class="row row-equal-height">
            <div class="col-sm-offset-4 col-sm-4">
                <!-- KPI box component -->
                <div ng-if="true"
                     class="kpi-card kpi-animated"
                     ng-init="from = 0;
                              nbticks = 30;
                              delay = 100;
                              tick = 0;
                              reloadeverynbtick = 100;">
                    {{ to = sumkazakhstan ; ''}} {{ max = sum ; '' }}
                    <ods-timer stop-condition=""
                               delay="delay"
                               auto-start="true"
                               exec="(from < to ? from = ((((from + ((to || 0) / nbticks)) * 100) | math : 'round') / 100 | min : to) : undefined);
                                     (tick = tick + 1);
                                     (tick % reloadeverynbtick == 0 ? from = 0 : undefined); ">
                    </ods-timer>
                    <ods-gauge display-mode="circle" value="from" max="max"></ods-gauge>
                    <p class="kpi-description">
                        {{ from | number : 0 }} tons of Uranium produced in Kazakhstan (out of {{ max |
                        number }} in total)
                    </p>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
