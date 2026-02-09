<ods-dataset-context
  context="uraniumproduction,uraniumproductionkazakhstan"
  uraniumproduction-dataset="uranium-production"
  uraniumproduction-domain="userclub"
  uraniumproductionkazakhstan-dataset="uranium-production"
  uraniumproductionkazakhstan-domain="userclub"
  uraniumproductionkazakhstan-parameters="{'refine.country':'Kazakhstan'}">
  <div
    ods-aggregation="sum,sumkazakhstan"
    ods-aggregation-sum-context="uraniumproduction"
    ods-aggregation-sum-function="SUM"
    ods-aggregation-sum-expression="tonnes_of_uranium"
    ods-aggregation-sumkazakhstan-context="uraniumproductionkazakhstan"
    ods-aggregation-sumkazakhstan-function="SUM"
    ods-aggregation-sumkazakhstan-expression="tonnes_of_uranium">
    <div class="row row-equal-height">
      <div class="col-sm-offset-4 col-sm-4">
        <!-- KPI box component -->
        <div
          ng-if="true"
          class="kpi-card kpi-animated"
          ng-init="from = 0; 
                   nbticks = 30;
                   delay = 100;
                   tick = 0;
                   reloadeverynbtick = 100;">
          <ods-timer
            stop-condition=""
            delay="delay"
            auto-start="true"
            exec="(tick = tick + 1);
                  (tick % reloadeverynbtick == 0 ? tick = 0 : undefined);">
          </ods-timer>
          {{value = ((sumkazakhstan || 0) / nbticks) * (tick >= nbticks ? nbticks : tick) ; "" }}
          <ods-gauge display-mode="circle" value="value" max="sum"></ods-gauge>
          <p class="kpi-description">
            {{value | number:0 }} tons of Uranium produced in Kazakhstan (out of {{ sum | number }} in total)
          </p>
        </div>
      </div>
    </div>
  </div>
</ods-dataset-context>
