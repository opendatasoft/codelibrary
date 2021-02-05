<!-- <div class="row">
  <div class="col-sm-offset-4 col-sm-4">
    <div
      class="scene"
      ods-dataset-context
      context="ctx"
      ctx-dataset="emission-co2-tgv@datasncf"
      ctx-domain="data"
    >
      <div
        class="card-flip"
        ng-class="{'is-flipped': isFlipped}"
        ng-init="isFlipped = false"
        ng-click="isFlipped = !isFlipped"
        ods-aggregation="kpi"
        ods-aggregation-context="ctx"
        ods-aggregation-expression="tgv_empreinte_co2e_kgco2e_voyageur"
        ods-aggregation-function="AVG"
      >
        <div class="card-face card-face-front">
          <p class="kpi-legend">Moyenne d'un voyage Paris/Province en TGV</p>
          <h1 class="kpi">{{kpi | number:4}}</h1>
          <p class="kpi-legend">kg.éq.CO2 par passager</p>
          <div class="separator"></div>
          <p class="hint">"D'où vient ce chiffre ? 👉"</p>
        </div>
        <div class="card-face card-face-back">
          <strong>{{kpi | number:4}} kg.éq.CO2 par passage</strong> est la
          moyenne de la colonne <strong>Empreinte CO2e (kgCO2e/voyageur)</strong> du
          jeu de données
          <a
            href="{{ctx.domainUrl}}/explore/dataset/{{ctx.dataset.datasetid}}/information/"
          >
            {{ctx.dataset.metas.title}}
          </a>
        </div>
      </div>
    </div>
  </div>
</div> -->

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
