<ods-dataset-context
  context="uraniumproduction"
  uraniumproduction-dataset="uranium-production"
  uraniumproduction-domain="userclub">
  <div ods-aggregation="aggregation"
       ods-aggregation-context="uraniumproduction"
       ods-aggregation-function="SUM"
       ods-aggregation-expression="tonnes_of_uranium">
    <div class="row">
      <div class="col-sm-offset-4 col-sm-4">
        <!-- KPI box component -->
        <div class="kpi-card"
             ng-if="true"
             ng-init="nbticks = 25;
                      delay = 100;
                      tick = 0;
                      reloadeverynbtick = 50;">
          <i class="kpi-icon fa fa-superpowers" aria-hidden="true"></i>
          <ods-timer
            stop-condition=""
            delay="delay"
            auto-start="true"
            exec="(tick = tick + 1);
                  (tick % reloadeverynbtick == 0 ? tick = 0 : undefined);">
          </ods-timer>
          <p class="kpi-title">
            {{ ((aggregation || 0) / nbticks) * (tick >= nbticks ? nbticks : tick) | number:0 }}
          </p>
          <p class="kpi-description">tons of uranium produced since 2017</p>
        </div>
      </div>
    </div>
  </div>
</ods-dataset-context>
