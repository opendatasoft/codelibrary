<div class="container">
  <ods-dataset-context
    context="ctx"
    ctx-dataset="population-par-age-et-par-sexe-2006-a-2016-donnees-insee"
    ctx-parameters="{'refine.annee':'2016'}"
    ctx-domain="issy-les-moulineaux"
  >
    <div
      ods-adv-analysis="myData"
      ods-adv-analysis-context="ctx"
      ods-adv-analysis-select="sum(nombre) as count"
      ods-adv-analysis-group-by="age, sexe"
    >
      <ods-vega-lite-chart
        spec="{
                                                 '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
                                                 'data': {
                                                 'name': 'data'
                                                 },
                                                 'config': {
                                                 'view': {'stroke': null},
                                                 'axis': {'grid': true}
                                                 },
                                                 'spacing': 0,
                                                 'hconcat': [{
                                                 'transform': [{
                                                 'filter': {'field': 'sexe', 'equal': 'Femmes'}
                                                 }],
                                                 'title': 'Femmes',
                                                 'mark': 'bar',
                                                 'width': 350,
                                                 'encoding': {
                                                 'y': {
                                                 'field': 'age',
                                                 'type': 'ordinal',
                                                 'axis': null,
                                                 'sort': 'descending'
                                                 },
                                                 'x': {
                                                 'aggregate': 'sum', 
                                                 'field': 'count',
                                                 'title': 'population',
                                                 'sort': 'descending',
                                                 },
                                                 'color': {
                                                 'field': 'sexe',
                                                 'type': 'ordinal',
                                                 'scale': {'range': ['#675193', '#ca8861']},
                                                 'legend': null
                                                 }
                                                 }
                                                 }, {
                                                 'view': {'stroke': null},
                                                 'width': 80,
                                                 'mark': {
                                                 'type': 'text',
                                                 'align': 'center'
                                                 },
                                                 'encoding': {
                                                 'y': {
                                                 'field': 'age', 
                                                 'type': 'ordinal', 
                                                 'axis': null,
                                                 'sort': 'descending'
                                                 },
                                                 'text': {
                                                 'field': 'age', 
                                                 'type': 'ordinal'
                                                 }
                                                 }
                                                 }, {
                                                 'transform': [{
                                                 'filter': {'field': 'sexe', 'equal': 'Hommes'}
                                                 }],
                                                 'title': 'Hommes',
                                                 'mark': 'bar',
                                                 'width': 350,
                                                 'encoding': {
                                                 'y': {
                                                 'field': 'age', 'title': null,
                                                 'type': 'ordinal',
                                                 'axis': null,
                                                 'sort': 'descending'
                                                 },
                                                 'x': {
                                                 'aggregate': 'sum', 
                                                 'field': 'count',
                                                 'title': 'population'
                                                 },
                                                 'color': {
                                                 'field': 'sexe',
                                                 'type': 'ordinal',
                                                 'legend': null
                                                 }
                                                 }
                                                 }],
                                                 }"
        values-data="myData"
      >
      </ods-vega-lite-chart>
    </div>
  </ods-dataset-context>
</div>
