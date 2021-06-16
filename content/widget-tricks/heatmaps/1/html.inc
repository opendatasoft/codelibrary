<ods-dataset-context context="datum,sites"
                     datum-dataset="donnees-eco-compteur-tours-metropole"
                     datum-domain="eco-compteur-odsapps"
                     datum-parameters="{'q':'date >= 2021'}"
                     sites-dataset="sites-eco-compteur-tours-metropole"
                     sites-domain="eco-compteur-odsapps">
    <div class="container">
        <p>Default font & size</p>
        <ods-simple-tabs>
            <ods-simple-tab label="heatmap vegalite">
                <div class="row">
                    <div class="col-md-6">
                        <h1>Nombre de passage vélo, journée type, par mois</h1>
                        <div ods-adv-analysis="myData"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="date"
                             ng-init="jsondef={
                              '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
                              'data': {'name': 'adva'},
                              'height': 220,
                              'config': {
                                  'view': {
                                      'strokeWidth': 0,
                                      'step': 13
                                  },
                                  'axis': {
                                      'grid': true,
                                      'tickBand': 'extent',
                                      'domain': false,
                                      'labelFontSize':14,
                                      'labelFont':'Roboto, Helvetica, Arial, sans-serif'
                                  }
                              },
                              'mark': {
                                'type':'rect',
                                'height':200,
                                'width':200
                              },
                              'encoding': {
                                  'x': {
                                      'field': 'date',
                                      'timeUnit': 'hours',
                                      'type': 'ordinal',
                                      'title': 'Heures'
                                  },
                                  'y': {
                                      'field': 'date',
                                      'timeUnit': 'month',
                                      'type': 'ordinal',
                                      'title': 'Mois'
                                  },
                                  'color': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative',
                                      'title': 'Nombre de passages',
                                      'scale' : {
                                          'scheme': 'Oranges',
                                          'type': 'pow',
                                          'exponent': 0.5
                                      },
                                      'legend': {
                                          'title': null
                                      }
                                  }
                              }
                              }">
                            <ods-vega-lite-chart spec="jsondef" values-adva="myData"></ods-vega-lite-chart>
                        </div>
                    </div>
                    <div class="col-md-6">
                        <h1>Nombre de passage vélo, mois type</h1>
                        <div ods-adv-analysis="myData"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="date"
                             ng-init="jsondef={
                              '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
                              'data': {'name': 'adva'},
                              'height': 220,
                              'config': {
                                  'view': {
                                      'strokeWidth': 0,
                                      'step': 13
                                  },
                                  'axis': {
                                      'grid': true,
                                      'tickBand': 'extent',
                                      'domain': false,
                                      'labelFontSize':14,
                                      'labelFont':'Roboto, Helvetica, Arial, sans-serif'
                                  }
                              },
                              'mark': {
                                'type':'rect'
                              },
                              'encoding': {
                                  'x': {
                                      'field': 'date',
                                      'timeUnit': 'days',
                                      'type': 'ordinal',
                                      'title': 'Jour'
                                  },
                                  'y': {
                                      'field': 'date',
                                      'timeUnit': 'month',
                                      'type': 'ordinal',
                                      'title': 'Mois'
                                  },
                                  'color': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative',
                                      'title': 'Nombre de passages',
                                      'scale' : {
                                          'scheme': 'Oranges',
                                          'type': 'pow',
                                          'exponent': 0.5
                                      },
                                      'legend': {
                                          'title': null
                                      }
                                  }
                              }
                              }">
                            <ods-vega-lite-chart spec="jsondef" values-adva="myData"></ods-vega-lite-chart>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-6">
                        <h1>Month X Day : nombre de passage vélo</h1>
                        <div ods-adv-analysis="myData"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="date"
                             ng-init="jsondef={
                              '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
                              'data': {'name': 'adva'},
                              'config': {
                                  'view': {
                                      'strokeWidth': 0,
                                      'step': 13
                                  },
                                  'axis': {
                                      'domain': false
                                  }
                              },
                              'mark': {
                                  'type': 'circle',
                                  'opacity': 0.8,
                                  'stroke': 'black',
                                  'strokeWidth': 1
                              },
                              'encoding': {
                                  'x': {
                                      'field': 'date',
                                      'timeUnit': 'date',
                                      'type': 'ordinal',
                                      'title': 'Jour',
                                      'axis': {
                                          'labelAngle': 0,
                                          'format': '%e'
                                      }
                                  },
                                  'y': {
                                      'field': 'date',
                                      'timeUnit': 'month',
                                      'type': 'ordinal',
                                      'title': 'Mois'
                                  },
                                  'color': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative',
                                      'scale' : {'scheme': 'yellowgreenblue'},
                                      'legend': {
                                          'title': null
                                      }
                                  },
                                  'size': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative',
                                      'scale': {
                                          'type':'quantile'
                                      }
                                  }

                              }
                              }">
                            <ods-vega-lite-chart spec="jsondef" values-adva="myData"></ods-vega-lite-chart>
                        </div>
                    </div>
                    <div class="col-md-6">
                        <h1>Month X Day : nombre de passage vélo</h1>
                        <div ods-adv-analysis="myData"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="date"
                             ng-init="jsondef={
                              '$schema': 'https://vega.github.io/schema/vega-lite/v2.json',
                              'data': {'name': 'adva'},
                              'config': {
                                  'view': {
                                      'strokeWidth': 0
                                  },
                                  'axis': {
                                      'domain': false
                                  }
                              },
                              'mark': {
                                  'type': 'circle',
                                  'opacity': 0.8,
                                  'stroke': 'black',
                                  'strokeWidth': 1
                              },
                              'encoding': {
                                  'x': {
                                      'field': 'date',
                                      'timeUnit': 'day',
                                      'sort': ['mon', 'tue', 'wed', 'thu', 'fri', 'sat', 'sun'],
                                      'type': 'ordinal',
                                      'title': 'Jour',
                                      'axis': {
                                          'labelAngle': 315
                                      }
                                  },
                                  'y': {
                                      'field': 'date',
                                      'timeUnit': 'month',
                                      'type': 'ordinal',
                                      'title': 'Mois'
                                  },
                                  'color': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative',
                                      'scale' : {
                                        'scheme': 'yellowgreenblue'
                                      },
                                      'legend': {
                                          'title': null
                                      }
                                  },
                                  'size': {
                                      'field': 'count',
                                      'aggregate': 'sum',
                                      'type': 'quantitative'
                                  }
                              }
                              }">
                            <ods-vega-lite-chart spec="jsondef" values-adva="myData"></ods-vega-lite-chart>
                        </div>
                    </div>
                </div>
            </ods-simple-tab>
            <ods-simple-tab label="heatmap">
                <div class="row">
                    <div class="col-md-12"
                         ng-if="true"
                         ng-init="variables = {'min':undefined, 'max':undefined};
                                  colors = {};
                                  rgbstart = [0,55,237];
                                  rgbend = [180,197,241]">
                        <h1>Month X Day : nombre de passage vélo</h1>
                        <div ods-adv-analysis="results"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="month(date) as month, day(date) as day"
                             ods-adv-analysis-limit="-1"
                             ods-adv-analysis-order-by="month asc, day asc">
                            {{
                            variables.numrow = (results | toObject:"month" | numKeys) ;
                            variables.numcol = (results | toObject:"day" | numKeys) ;
                            variables.listrow = (results | toObject:"month" | keys | orderBy) ;
                            variables.listcol = (results | toObject:"day" | keys | orderBy) ; ""}}

                            <span ng-repeat="res in results">
                                {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                                {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                            </span>

                            <div class="grid"
                                 ng-class="{'display-values': variables.displayvalues}"
                                 ng-if="variables.min && variables.max">
                                <!-- Bottom horizontal -->
                                <div ng-repeat="(i,e) in variables.listcol"
                                     style="grid-column: {{ i + 2 }};
                                    grid-row: {{variables.numrow + 1}};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Left vertical -->
                                <div ng-repeat="(i,e) in variables.listrow"
                                     style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Grid content -->
                                <div class="cell square"
                                     ng-repeat="e in results"
                                     ng-init="val = ((e.count - variables.min) / (variables.max - variables.min))"
                                     style="grid-column: {{variables.listcol.indexOf(e.day) + 2}};
                                            grid-row: {{variables.listrow.indexOf(e.month) + 1}};">
                                    <div class="round"
                                         style="width : {{ ((val | math : 'sqrt')/(variables.max|math:'sqrt'))*10000 }}%;
                                                height : {{ ((val | math : 'sqrt')/(variables.max|math:'sqrt'))*10000 }}%;
                                                background-color: {{ 'rgb(' +
                                                                    ((val * rgbstart[0] + (1 - val) * rgbend[0]) | math : 'floor') +
                                                                    ',' +
                                                                    ((val * rgbstart[1] + (1 - val) * rgbend[1]) | math : 'floor') +
                                                                    ',' +
                                                                    ((val * rgbstart[2] + (1 - val) * rgbend[2]) | math : 'floor') +
                                                                    ')' }};"
                                         ods-tooltip="{{e.count | number}}">
                                    </div>
                                </div>
                            </div>

                            <div class="grid-sub row">
                                <div class="col-sm-6">

                                </div>
                                <div class="col-sm-6">
                                    <div class="grid-legend">
                                        <div class="grid-legend__min-value">{{ variables.min | number }}</div>
                                        <div class="grid-legend__gradient"
                                             style="background: linear-gradient(270deg,
                                                                        {{ 'rgb('+rgbstart[0]+','+rgbstart[1]+','+rgbstart[2]+')' }},
                                                                        {{ 'rgb('+rgbend[0]+','+rgbend[1]+','+rgbend[2]+')' }}
                                     )"></div>
                                        <div class="grid-legend__max-value">{{ variables.max | number }}</div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12"
                         ng-if="true"
                         ng-init="variables = {'min':undefined, 'max':undefined};
                                  colors = {};
                                  rgbstart = [0,55,237];
                                  rgbend = [180,197,241]">
                        <h1>Month X Day : nombre de passage vélo</h1>
                        <div ods-adv-analysis="results"
                             ods-adv-analysis-context="datum"
                             ods-adv-analysis-select="sum(counts) as count"
                             ods-adv-analysis-group-by="month(date) as month, day(date) as day"
                             ods-adv-analysis-limit="-1"
                             ods-adv-analysis-order-by="month asc, day asc">
                            {{
                            variables.numrow = (results | toObject:"month" | numKeys) ;
                            variables.numcol = (results | toObject:"day" | numKeys) ;
                            variables.listrow = (results | toObject:"month" | keys | orderBy) ;
                            variables.listcol = (results | toObject:"day" | keys | orderBy) ; ""}}

                            <span ng-repeat="res in results">
                                {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                                {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                            </span>

                            <div class="grid"
                                 ng-class="{'display-values': variables.displayvalues}"
                                 ng-if="variables.min && variables.max">
                                <!-- Bottom horizontal -->
                                <div ng-repeat="(i,e) in variables.listcol"
                                     style="grid-column: {{ i + 2 }};
                                    grid-row: {{variables.numrow + 1}};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Left vertical -->
                                <div ng-repeat="(i,e) in variables.listrow"
                                     style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Grid content -->
                                <div class="cell square"
                                     ng-repeat="e in results"
                                     ng-init="val = ((e.count - variables.min) / (variables.max - variables.min))"
                                     style="background-color: {{ 'rgb(' +
                                                                    ((val * rgbstart[0] + (1 - val) * rgbend[0]) | math : 'floor') +
                                                                    ',' +
                                                                    ((val * rgbstart[1] + (1 - val) * rgbend[1]) | math : 'floor') +
                                                                    ',' +
                                                                    ((val * rgbstart[2] + (1 - val) * rgbend[2]) | math : 'floor') +
                                                                    ')' }};
                                               grid-column: {{variables.listcol.indexOf(e.day) + 2}};
                                               grid-row: {{variables.listrow.indexOf(e.month) + 1}};">
                                    {{e.count | number}}
                                </div>
                            </div>

                            <div class="grid-sub row">
                                <div class="col-sm-6">
                                    <div class="grid-switch">
                                        <p>Display values: </p>
                                        <label class="switch">
                                            <input class="switch-input"
                                                   ng-model="variables.displayvalues"
                                                   type="checkbox">
                                            <div class="switch-button">
                                                <span class="switch-button-left">OFF</span>
                                                <span class="switch-button-right">ON</span>
                                            </div>
                                        </label>
                                    </div>
                                </div>
                                <div class="col-sm-6">
                                    <div class="grid-legend">
                                        <div class="grid-legend__min-value">{{ variables.min | number }}</div>
                                        <div class="grid-legend__gradient"
                                             style="background: linear-gradient(270deg,
                                                                        {{ 'rgb('+rgbstart[0]+','+rgbstart[1]+','+rgbstart[2]+')' }},
                                                                        {{ 'rgb('+rgbend[0]+','+rgbend[1]+','+rgbend[2]+')' }}
                                     )"></div>
                                        <div class="grid-legend__max-value">{{ variables.max | number }}</div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12"
                         ng-if="true"
                         ng-init="variables = {}">
                        <h1>Departement X Communes : nombre de sites</h1>
                        <div ods-adv-analysis="results"
                             ods-adv-analysis-context="sites"
                             ods-adv-analysis-select="count(*) as count"
                             ods-adv-analysis-group-by="departement, commune"
                             ods-adv-analysis-limit="-1"
                             ods-adv-analysis-order-by="commune asc">
                            {{
                            variables.numrow = (results | toObject:"departement" | numKeys) ;
                            variables.numcol = (results | toObject:"commune" | numKeys) ;
                            variables.listrow = (results | toObject:"departement" | keys | orderBy) ;
                            variables.listcol = (results | toObject:"commune" | keys | orderBy) ; ""}}

                            <span ng-repeat="res in results">
                                {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                                {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                            </span>

                            <div class="grid"
                                 ng-class="{'display-values': variables.displayvalues}">
                                <!-- Bottom horizontal -->
                                <div ng-repeat="(i,e) in variables.listcol"
                                     style="grid-column: {{ i + 2 }};
                                    grid-row: {{variables.numrow + 1}};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Left vertical -->
                                <div ng-repeat="(i,e) in variables.listrow"
                                     style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Grid content -->
                                <div class="cell"
                                     ng-repeat="(i,e) in results"
                                     ng-class="{'orange': e.count <= 1, 'lightgreen': e.count > 1 && e.count <= 2,'darkgreen': e.count > 2}"
                                     style="grid-column: {{variables.listcol.indexOf(e.commune) + 2}};
                                    grid-row: {{variables.listrow.indexOf(e.departement) + 1}};">
                                    {{e.count | number : 0}}
                                </div>
                            </div>

                            <div class="grid-sub row">
                                <div class="col-sm-6">
                                    <div class="grid-switch">
                                        <p>Display values: </p>
                                        <label class="switch">
                                            <input class="switch-input"
                                                   ng-model="variables.displayvalues"
                                                   type="checkbox">
                                            <div class="switch-button">
                                                <span class="switch-button-left">OFF</span>
                                                <span class="switch-button-right">ON</span>
                                            </div>
                                        </label>
                                    </div>
                                </div>
                                <div class="col-sm-6">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12"
                         ng-if="true"
                         ng-init="variables = {}">
                        <h1>Departement X Communes : nombre de sites</h1>
                        <div ods-adv-analysis="results"
                             ods-adv-analysis-context="sites"
                             ods-adv-analysis-select="count(*) as count"
                             ods-adv-analysis-group-by="departement, commune"
                             ods-adv-analysis-limit="-1"
                             ods-adv-analysis-order-by="commune asc">
                            {{
                            variables.numrow = (results | toObject:"departement" | numKeys) ;
                            variables.numcol = (results | toObject:"commune" | numKeys) ;
                            variables.listrow = (results | toObject:"departement" | keys | orderBy) ;
                            variables.listcol = (results | toObject:"commune" | keys | orderBy) ; ""}}

                            <span ng-repeat="res in results">
                                {{ variables.min = (!variables.min || res.count < variables.min ? res.count : variables.min); '' }}
                                {{ variables.max = (!variables.max || res.count > variables.max ? res.count : variables.max); '' }}
                            </span>

                            <div class="grid"
                                 ng-class="{'display-values': variables.displayvalues}">
                                <!-- Bottom horizontal -->
                                <div ng-repeat="(i,e) in variables.listcol"
                                     style="grid-column: {{ i + 2 }};
                                    grid-row: {{variables.numrow + 1}};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Left vertical -->
                                <div ng-repeat="(i,e) in variables.listrow"
                                     style="grid-column: 1;
                                    grid-row: {{ i + 1 }};">
                                    <strong>{{e}}</strong>
                                </div>

                                <!-- Grid content -->
                                <div class="cell square"
                                     ng-repeat="e in results"
                                     style="grid-column: {{variables.listcol.indexOf(e.commune) + 2}};
                                            grid-row: {{variables.listrow.indexOf(e.departement) + 1}};">
                                    <div class="round"
                                         ng-class="{'orange': e.count <= 1, 'lightgreen': e.count > 1 && e.count <= 2,'darkgreen': e.count > 2}"
                                         style="width : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;
                                                height : {{ ((e.count | math : 'sqrt')/(variables.max|math:'sqrt'))*100 }}%;"
                                         ods-tooltip="{{e.count | number}}">
                                    </div>
                                </div>
                            </div>

                        </div>
                    </div>
                </div>
            </ods-simple-tab>
        </ods-simple-tabs>
    </div>
</ods-dataset-context>
