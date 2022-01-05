<div class="container">
    <ods-dataset-context context="ctx"
                         ctx-domain="opendata.hauts-de-seine.fr"
                         ctx-dataset="archives-de-la-planete-paris"
                         ctx-parameters="{'disjunctive.themes':'true','disjunctive.operateur':'true','disjunctive.lieu_retraite':'true'}">
      <div class="page-header" style="background-image: url(https://opendata.hauts-de-seine.fr/explore/dataset/archives-de-la-planete/files/ef4d61b0016cb909b5081622a0abecfe/download/)">
        <h1 class="page-title">
         Archives de la Planète - Paris
        </h1>
      </div>

      <!-- Page subtitle -->
      <h2 class="page-subtitle">Extraction des images de Paris de la collection des Archives de la Planète, un ensemble d'images fixes et animées, réalisé au début du XXe siècle, consacré à la diversité des peuples et des cultures et conservé par le musée départemental Albert-Kahn.</h2>

      <!-- KPIs -->
      <section class="kpis-container row row-equal-height">
        <div class="col-md-4 margin-bottom-20">
          <!-- KPI box component -->
          <div class="kpi-card"
               ods-aggregation="agg"
               ods-aggregation-context="ctx"
               ods-aggregation-function="COUNT">
            <i class="kpi-icon fa fa-camera-retro" aria-hidden="true"></i>
            <p class="kpi-title">
          {{  agg | number :  0 }}
              <span class="kpi-unit"></span>
            </p>
            <p class="kpi-description">
            Nombre d'oeuvres référencées
            </p>
          </div>
        </div>
      </section>

      <!-- Section 1 -->
      <section class="page-section">
        <h2 class="section-title">
            Autochromes dans la capitale, par les opérateurs d'Albert Kahn
        </h2>

        <div class="content-card">
          <p class="content-card-description">
            Utilisez les filtres ci-dessus pour affiner votre recherche.
          </p>

          <!-- SEARCH -->
          <div class="search-module">
            <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
            <input placeholder="Rechercher"
                   ng-model="ctx.parameters['q']"
                   ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
                   class="search-module-input"
                   type="text"/>
            <button class="search-module-clear"
                    ng-if="ctx.parameters['q']"
                    ng-click="ctx.parameters['q'] = undefined">
              <i class="fa fa-times-circle" aria-hidden="true"></i>
            </button>
          </div>

          <!-- FILTERS -->
          <div class="filter-list"
               ng-init="dropdown.open = ''">
              <div ods-facet-results="operateur"
                   ods-facet-results-facet-name="operateur"
                   ods-facet-results-context="ctx"
                   ods-facet-results-sort="alphanum">
                <ods-select selected-values="ctx.parameters['refine.operateur']"
                            multiple="true"
                            options="operateur"
                            label-modifier="name"
                            value-modifier="name"
                            placeholder="Sélectionnez un opérateur"></ods-select>
            </div>
            <div ods-facet-results="themes"
                   ods-facet-results-facet-name="themes"
                   ods-facet-results-context="ctx"
                   ods-facet-results-sort="alphanum">
                <ods-select selected-values="ctx.parameters['refine.themes']"
                            multiple="true"
                            options="themes"
                            label-modifier="name"
                            value-modifier="name"
                            placeholder="Sélectionnez un thème"></ods-select>
            </div>
            <div ods-facet-results="lieu"
                   ods-facet-results-facet-name="lieu_retraite"
                   ods-facet-results-context="ctx"
                   ods-facet-results-sort="alphanum">
                <ods-select selected-values="ctx.parameters['refine.lieu_retraite']"
                            multiple="true"
                            options="lieu"
                            label-modifier="name"
                            value-modifier="name"
                            placeholder="Sélectionnez un lieu"></ods-select>
            </div>
            <div class="clear-filters"
                 ng-show="ctx.parameters['refine.lieu_retraite'].length >0 || ctx.parameters['refine.themes'].length >0 || ctx.parameters['refine.operateur'].length >0">
              <div class="clear-filters-button"
                   role="button"
                   ng-click="ctx.parameters['refine.lieu_retraite'] = undefined; 
                   ctx.parameters['refine.themes'] = undefined; 
                   ctx.parameters['refine.operateur'] = undefined">
               Supprimer tous les filtres
                <i class="fa fa-times-circle" aria-hidden="true"></i>
              </div>
            </div>
          </div>

          <div class="row">
            <div class="col-md-5 col-xs-12">
              <ul class="result-list">
                <li class="result"
                    ng-repeat="item in items"
                    ods-results="items"
                    ods-results-context="ctx"
                    ods-results-max="1000"
                    ng-click="ctx.parameters['refine.legende_revisee'] = (ctx.parameters['refine.legende_revisee']?undefined:item.fields.legende_revisee)"
                    ng-class="{'result-img-horizontal': imagePosition === 'left' }">
                  <div class="result-img"
                       ng-if="item.fields.photo"
                       style="{{ 'background-image: url(https://opendata.hauts-de-seine.fr/explore/dataset/archives-de-la-planete-paris/files/' + item.fields.photo.id + '/300/);' }}">
                  </div>
                  <div class="result-content">
                    <h2 class="result-title">
                      {{ item.fields.legende_revisee }}
                    </h2>
                    <dl class="result-info">
                      <dt>    Sujets                  </dt>
                      <dd> {{item.fields.sujets}}</dd>
                      <dt>    Procédé technique                  </dt>
                      <dd> {{item.fields.procede_technique}}</dd>
                      <dt>   Date de prise de vue                  </dt>
                      <dd> {{item.fields.date_de_prise_de_vue}}</dd>
                    </dl>
                      <a href="{{ 'https://opendata.hauts-de-seine.fr/explore/dataset/archives-de-la-planete-paris/files/' + item.fields.photo.id + '/300/' }}"
                         target="_blank"
                         class="content-card-button"
                         ng-if="item.fields.photo">
                        Télécharger la photo
                      </a>
                  </div>
                </li>
              </ul>
            </div>

            <div class="col-md-7 col-xs-12">
              <ods-map no-refit="false"
                       scroll-wheel-zoom="false">
                <ods-map-layer-group>
                  <ods-map-layer context="ctx"
                                 color="EC643C"
                                 picto="ods-photo"
                                 show-marker="true"
                                 display="auto"
                                 shape-opacity="0.5"
                                 point-opacity="1"
                                 border-color="#FFFFFF"
                                 border-opacity="1"
                                 border-size="1"
                                 border-pattern="solid"
                                 size="4"
                                 size-min="3"
                                 size-max="5"
                                 size-function="linear"></ods-map-layer>
                </ods-map-layer-group>
              </ods-map>
            </div>
          </div>
        </div>
        <a href="https://opendata.hauts-de-seine.fr/explore/dataset/archives-de-la-planete-paris/" target="_blank">Accéder aux données source</a>
      </section>
    </ods-dataset-context>
  </div>
