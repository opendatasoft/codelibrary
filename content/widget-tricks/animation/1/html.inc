<ods-dataset-context
  context="uraniumproduction"
  uraniumproduction-dataset="uranium-production"
  uraniumproduction-domain="userclub">
  <div ods-aggregation="sum"
    ods-aggregation-sum-context="uraniumproduction"
    ods-aggregation-sum-function="SUM"
    ods-aggregation-sum-expression="tonnes_of_uranium">
      <div class="row">
        <div class="col-sm-offset-4 col-sm-4">
          <div
            ng-init="values = {'from':0,'nbticks':40,'delay':100}"
            class="kpi-card">
          <i class="kpi-icon fa fa-superpowers" aria-hidden="true"></i>
              <ods-timer
                stop-condition="values.from >= sum"
                delay="values.delay"
                auto-start="true"
                exec="values.from = (((values.from + ((sum || 0) / values.nbticks)) * 100) | math : 'round') / 100">
              </ods-timer>
              <h2 class="kpi-title">{{ values.from | number : 0 }}</h2>
            <p class="kpi-description">
              tonnes d'uranium produites depuis 2017
            </p>
          </div>
        </div>
      </div>
    </div>
</ods-dataset-context>
