<ods-dataset-context
  context="uraniumproduction,uraniumproductionfrance"
  uraniumproduction-dataset="uranium-production"
  uraniumproduction-domain="userclub"
  uraniumproductionfrance-dataset="uranium-production"
  uraniumproductionfrance-domain="userclub"
  uraniumproductionfrance-parameters="{'refine.country':'Kazakhstan'}">
  <div ods-aggregation="sum,sumfrance"
    ods-aggregation-sum-context="uraniumproduction"
    ods-aggregation-sum-function="SUM"
    ods-aggregation-sum-expression="tonnes_of_uranium"
    ods-aggregation-sumfrance-context="uraniumproductionfrance"
    ods-aggregation-sumfrance-function="SUM"
    ods-aggregation-sumfrance-expression="tonnes_of_uranium">
    <div class="row">
      <div class="col-sm-offset-4 col-sm-4">
        <ods-gauge display-mode="circle" value="sumfrance" max="sum"></ods-gauge>
        <p class="kpi-description">
            % of Uranium production in Kazakhstan
        </p>
      </div>
    </div>
  </div>
</ods-dataset-context>
