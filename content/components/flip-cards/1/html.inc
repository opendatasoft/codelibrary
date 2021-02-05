<div
  class="scene"
  ods-dataset-context
  context="ctx"
  ctx-dataset="emission-co2-tgv@datasncf"
  ctx-domain="data"
  style="width: 280px; height: 280px; margin: 55px;"
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
      <p class="kpi-legend">kg.éq.CO2 par passage</p>
      <div class="separator"></div>
      <p class="hint">"D'où vient ce chiffre ? 👉"</p>
    </div>
    <div class="card-face card-face-back">
      <strong>{{kpi | number:params.decimals}} {{params.unit}}</strong> est la
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
