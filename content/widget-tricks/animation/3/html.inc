<ods-dataset-context
  context="uraniumproduction,uraniumproductionfrance"
  uraniumproduction-dataset="uranium-production"
  uraniumproduction-domain="userclub"
  uraniumproductionfrance-dataset="uranium-production"
  uraniumproductionfrance-domain="userclub"
  uraniumproductionfrance-parameters="{'refine.country':'Kazakhstan'}">
  <div
    ods-aggregation="sum,sumkazakhstan"
    ods-aggregation-sum-context="uraniumproduction"
    ods-aggregation-sum-function="SUM"
    ods-aggregation-sum-expression="tonnes_of_uranium"
    ods-aggregation-sumkazakhstan-context="uraniumproductionfrance"
    ods-aggregation-sumkazakhstan-function="SUM"
    ods-aggregation-sumkazakhstan-expression="tonnes_of_uranium">
    <div class="row row-equal-height">
      <div class="col-sm-offset-4 col-sm-4">
        <!-- KPI box component -->
        <div class="kpi-card kpi-animated">
          <ods-gauge display-mode="circle" value="sumkazakhstan" max="sum">
          </ods-gauge>
          <p class="kpi-description">% of Uranium production in Kazakhstan</p>
        </div>
      </div>
    </div>
  </div>
</ods-dataset-context>
