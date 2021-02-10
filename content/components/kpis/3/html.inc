<div class="row">
    <div class="col-sm-offset-4 col-sm-4">
        <ods-dataset-context context="ushospitals"
                             ushospitals-domain="userclub"
                             ushospitals-dataset="us-hospitals">
            <!-- KPI box component -->
            <div class="card-flip"
              class="card-flip"
              ng-class="{'is-flipped': isFlipped}"
              ng-init="isFlipped = false"
              ng-click="isFlipped = !isFlipped"
              ods-aggregation="count"
              ods-aggregation-context="ushospitals"
              ods-aggregation-function="COUNT"
            >
            <div class="kpi-card card-face">
              <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
              <h2 class="kpi-title">
                {{ count | number }}
              </h2>
              <p class="kpi-description">
                Number of hospitals
              </p>
              <p class="hint">"How is it computed? 👉"</p>
            </div>
            <div class="kpi-card card-face card-face-back">
              <p>
                <strong>{{ count | number }}</strong> is the count of all records found in the dataset: 
              </p>
              <a
                href="{ushospitals.domainUrl}}/explore/dataset/{ushospitals.dataset.datasetid}}/information/"
              >
                {{ushospitals.dataset.metas.title}}
            </div>
          </div>
        </ods-dataset-context>
    </div>
</div>
