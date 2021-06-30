<ods-dataset-context
  context="sites, refinedsites"
  sites-dataset="sites-eco-compteur-tours-metropole"
  sites-domain="eco-compteur-odsapps"
  refinedsites-dataset="sites-eco-compteur-tours-metropole"
  refinedsites-domain="eco-compteur-odsapps"
>
  {{ refinedsites.parameters['refine.name'] = ctx.parameters['refine.name'];
  ''}}
  <div class="container" ng-init="mobileMap = false">
    <div id="map-and-legend">
      <button
        class="button is-hidden-desktop"
        id="map-button"
        ng-click="mobileMap = !mobileMap"
      >
        <span class="icon-text">
          <span>Carte</span>
          <span class="icon">
            <i ng-if="!mobileMap" class="fa fa-map"></i>
            <i ng-if="mobileMap" class="fa fa-map"></i>
          </span>
        </span>
      </button>
      <div
        id="map"
        ng-class="{'is-visible': mobileMap}"
        ods-color-gradient="countgradient"
        ods-color-gradient-context="ctx"
        ods-color-gradient-x="name"
        ods-color-gradient-serie="SUM(counts)"
        ods-color-gradient-high="#142E7B"
        ods-color-gradient-low="#00C7B1"
        ods-color-gradient-nb-classes="10"
        ods-color-gradient-pow-exponent="0.1"
      >
        <ods-map
          scroll-wheel-zoom="true"
          location="12,47.36755,0.64888"
          toolbar-drawing="false"
          toolbar-fullscreen="false"
          toolbar-geolocation="false"
          display-control="false"
          display-control-single-layer="false"
        >
          <ods-map-layer-group>
            <ods-map-layer
              context="sites"
              display="categories"
              expresion="name"
              color-categories="countgradient['colors']"
              color-categories-other="rgb(207, 207, 207)"
              color-by-field="name"
              picto="ods-circle"
              size="3"
              show-marker="false"
              refine-on-click-context="[ctx,refinedsites]"
              refine-on-click-ctx-map-field="name"
              refine-on-click-ctx-context-field="name"
              refine-on-click-ctx-replace-refine="true"
              refine-on-click-refinedsites-map-field="name"
              refine-on-click-refinedsites-context-field="name"
              refine-on-click-refinedsites-replace-refine="true"
            ></ods-map-layer>
          </ods-map-layer-group>
          <ods-map-layer
            context="refinedsites"
            show-if="ctx.parameters['refine.name']"
            color="#142E7B"
            tooltip-disabled="true"
          >
          </ods-map-layer>
        </ods-map>
        <div id="map-legend" ng-if="!ctx.parameters['refine.name']">
          <ods-legend
            title="Nombre de passages"
            color-gradient="countgradient"
            display="steps"
            decimal-precision="0"
          ></ods-legend>
        </div>
      </div>
      <div id="chart-header" class="level is-size-3">
        <span>Nombre total de passages comptés</span>
        <span class="text-icon" ng-if="ctx.parameters['refine.name']">
          <span>{{ ctx.parameters['refine.name'] }}</span>
          <button
            class="button icon-cta"
            ng-click="ctx.parameters['refine.name'] = undefined; refinedsites.parameters['refine.name'] = undefined"
          >
            <span class="icon"><i class="fa fa-times"></i></span>
          </button>
        </span>
      </div>
    </div>
    <div id="charts">
      <div id="ranking" ng-class="{'is-hidden': ctx.parameters['refine.name']}">
        <ods-chart
          class="hide-x-grid hide-y"
          style="height: {{ 40 * sites.dataset.metas.records_count }}px"
          labels-x-length="30"
          single-y-axis="true"
        >
          <ods-chart-query
            context="ctx"
            field-x="name"
            display-legend="false"
            sort="serie1-1"
          >
            <ods-chart-serie
              chart-type="bar"
              expression-y="counts"
              function-y="SUM"
              color="#142E7B"
              refine-on-click-context="ctx,refinedsites"
              refine-on-click-ctx-context-field="name"
              refine-on-click-refinedsites-context-field="name"
              display-values="true"
            ></ods-chart-serie>
          </ods-chart-query>
        </ods-chart>
      </div>
      <div
        id="details"
        ng-class="{'is-hidden': !ctx.parameters['refine.name'] || map}"
        ng-if="ctx.parameters['refine.name']"
      >
        <ods-chart
          timescale="day"
          single-y-axis="true"
          align-month="true"
          display-legend="false"
        >
          <ods-chart-query
            context="ctx"
            field-x="date"
            maxpoints="0"
            timescale="day"
          >
            <ods-chart-serie
              chart-type="spline"
              expression-y="counts"
              function-y="SUM"
              color="#142E7B"
            ></ods-chart-serie>
          </ods-chart-query>
        </ods-chart>
      </div>
    </div>
  </div>
</ods-dataset-context>
