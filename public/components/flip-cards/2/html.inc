<div class="grid-layout">
  <div class="demo-tile">
    FIXED
  </div>
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
      ods-aggregation-expression="distance"
      ods-aggregation-function="MAX"
    >
      <div class="card-face card-face-front">
        FLIP
      </div>
      <div class="card-face card-face-back">
        FLIPPED
      </div>
    </div>
  </div>
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
      ods-aggregation-expression="distance"
      ods-aggregation-function="MAX"
    >
      <div class="card-face card-face-front">
        FLIP
      </div>
      <div class="card-face card-face-back">
        FLIPPED
      </div>
    </div>
  </div>
  <div class="demo-tile is-dark">
    FIXED
  </div>
</div>
