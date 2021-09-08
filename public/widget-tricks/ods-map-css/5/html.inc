<ods-dataset-context context="rapworldpublic,opendatasoftofficespublic,shanghaiworlduniversityrankingpublic"
                     rapworldpublic-dataset="rapworld"
                     rapworldpublic-domain="public"
                     rapworldpublic-parameters="{'q':'NOT #null(bio_deathdate)'}"
                     opendatasoftofficespublic-dataset="opendatasoft-offices"
                     opendatasoftofficespublic-domain="public"
                     shanghaiworlduniversityrankingpublic-dataset="shanghai-world-university-ranking"
                     shanghaiworlduniversityrankingpublic-domain="userclub">
    <div class="map-container">
      <div id="customcontroler"
           ng-init="drawer = {'status':false};
                    layerselection = {'rap':true, 'offices':true, 'shapes':true}">
          <ods-map no-refit="true"
                   scroll-wheel-zoom="true"
                   display-control="false"
                   toolbar-fullscreen="false"
                   toolbar-geolocation="true">
              <ods-map-layer-group>
                  <ods-map-layer show-if="layerselection.rap"
                                 context="rapworldpublic"
                                 color-categories="{'rapper':'#BA022A','singer':'#5A1887','producer':'#19630A'}"
                                 color-by-field="categories"
                                 picto="dot"
                                 caption="false"
                                 show-marker="false" display="categories" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Rap World Artists" description="Data Presented" size="4"></ods-map-layer>
              </ods-map-layer-group>
              <ods-map-layer-group>
                  <ods-map-layer show-if="layerselection.offices"
                                 caption="false"
                                 context="opendatasoftofficespublic" color="#336179" picto="ods-circle" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Opendatasoft Offices" description="This dataset contains the list of all Opendatasoft headquarters and local offices, worldwide." size="4" size-min="3" size-max="5" size-function="linear"></ods-map-layer>
              </ods-map-layer-group>
              <ods-map-layer-group>
                  <ods-map-layer show-if="layerselection.shapes" color="#336179"
                                 context="shanghaiworlduniversityrankingpublic"
                                 caption="false"
                                 shape-opacity="0.5">
                  </ods-map-layer>
              </ods-map-layer-group>
          </ods-map>
          <div class="map-control">
              <ul class="odswidget-map-display-control__groups" style="max-height: calc(464px);">
                  <li class="ng-scope odswidget-map-display-control__group"
                      ng-click="layerselection.rap = !layerselection.rap"
                      ng-class="{'odswidget-map-display-control__group--disabled': !layerselection.rap}"
                      style="border-left-color: rgb(229, 229, 229);">
                      <span class="odswidget-map-display-control__group-title">Rap artists</span>
                      <div class="map-control-icons">
                          <svg id="dot-icon" width="19px" height="19px" viewBox="0 0 19 19" version="1.1" xmlns="http://www.w3.org/2000/svg"
                               xmlns:xlink="http://www.w3.org/1999/xlink"
                               xmlns:sketch="http://www.bohemiancoding.com/sketch/ns"
                               style="fill: green; width: 35px; height: 35px;">
                              <path d="M13,9.50004202 C13,11.4330618 11.4329777,13.000084 9.49995798,13.000084 C7.56693813,13.000084 5.99991595,11.4330618 5.99991595,9.50004202 C5.99991595,7.56702218 7.56693813,6 9.49995798,6 C11.4329777,6 13,7.56702218 13,9.50004202 L13,9.50004202 Z"
                                    fill="#000000" style="fill: green;"></path>
                          </svg>
                          <svg id="dot-icon" width="19px" height="19px" viewBox="0 0 19 19" version="1.1" xmlns="http://www.w3.org/2000/svg"
                               xmlns:xlink="http://www.w3.org/1999/xlink"
                               xmlns:sketch="http://www.bohemiancoding.com/sketch/ns"
                               style="fill: red; width: 35px; height: 35px;">
                              <path d="M13,9.50004202 C13,11.4330618 11.4329777,13.000084 9.49995798,13.000084 C7.56693813,13.000084 5.99991595,11.4330618 5.99991595,9.50004202 C5.99991595,7.56702218 7.56693813,6 9.49995798,6 C11.4329777,6 13,7.56702218 13,9.50004202 L13,9.50004202 Z"
                                    fill="#000000" style="fill: red;"></path>
                          </svg>
                          <svg id="dot-icon" width="19px" height="19px" viewBox="0 0 19 19" version="1.1" xmlns="http://www.w3.org/2000/svg"
                               xmlns:xlink="http://www.w3.org/1999/xlink"
                               xmlns:sketch="http://www.bohemiancoding.com/sketch/ns"
                               style="fill: purple; width: 35px; height: 35px;">
                              <path d="M13,9.50004202 C13,11.4330618 11.4329777,13.000084 9.49995798,13.000084 C7.56693813,13.000084 5.99991595,11.4330618 5.99991595,9.50004202 C5.99991595,7.56702218 7.56693813,6 9.49995798,6 C11.4329777,6 13,7.56702218 13,9.50004202 L13,9.50004202 Z"
                                    fill="#000000" style="fill: purple;"></path>
                          </svg>
                      </div>
                  </li>
                  <li class="ng-scope odswidget-map-display-control__group"
                      ng-click="layerselection.offices = !layerselection.offices"
                      ng-class="{'odswidget-map-display-control__group--disabled': !layerselection.offices}"
                      style="border-left-color: rgb(229, 229, 229);">
                      <span class="odswidget-map-display-control__group-title">OpenDataSoft Officies</span>
                      <div class="leaflet-vectormarker" tabindex="0" style="width: 24px; height: 41px; position: relative;">
                          <svg id="svg-vectormarker-marker" xmlns:svg="http://www.w3.org/2000/svg" xmlns="http://www.w3.org/2000/svg" version="1.1" viewBox="0 0 32 56">
                              <g id="svg-vectormarker" fill-rule="nonzero" fill="none">
                                  <path fill="rgb(51,97,121)" fill-rule="evenodd" d="M16 0C7.222 0 0 7.217 0 16.157c0 4.86 1.03 8.446 2.66 12.027L16 56l13.34-27.816c1.63-3.58 2.66-7.167 2.66-12.027C32 7.217 24.778 0 16 0z"></path>
                                  <path stroke="rgb(157,202,229)" d="M16 54.844l12.886-26.868c1.79-3.933 2.614-7.42 2.614-11.82C31.5 7.52 24.527.5 16 .5 7.473.5.5 7.52.5 16.157c0 4.4.824 7.886 2.61 11.81L16 54.844z"></path>
                              </g>
                          </svg>
                          <div class="leaflet-vectormarker-iconoverlay" style="opacity: 1; top: 4px"><!--?xml version="1.0" encoding="UTF-8" standalone="no"?-->
                              <svg width="19px" height="19px" viewBox="0 0 19 19" version="1.1" xmlns="http://www.w3.org/2000/svg"
                                   xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns"
                                   style="fill: white; width: 14px; height: 14px;">
                                  <path d="M18,9.50004182 C18,14.1944851 14.1944015,18.0000836 9.49995818,18.0000836 C4.80551469,18.0000836 0.99991635,14.1944851 0.99991635,9.50004182 C0.99991635,4.80559834 4.80551469,1 9.49995818,1 C14.1944015,1 18,4.80559834 18,9.50004182 L18,9.50004182 Z"
                                        fill="#000000" style="fill: white;"></path>
                                  <rect style="opacity: 0; fill: white;" x="0" y="0" width="19" height="19"></rect>
                              </svg>
                          </div>
                      </div>
                  </li>
                  <li class="ng-scope odswidget-map-display-control__group"
                      ng-click="layerselection.shapes = !layerselection.shapes"
                      ng-class="{'odswidget-map-display-control__group--disabled': !layerselection.shapes}"
                      style="border-left-color: rgb(229, 229, 229);">
                      <span class="odswidget-map-display-control__group-title">Shanghai ranking countries</span>
                  </li>
              </ul>
          </div>
          <div class="map-legend" ng-show="layerselection.rap">
              <!-- would be good to turn off when the diffusion tube layer is deselected -->
              <div class="map-legend-item">
                  <i class="fa fa-circle red" aria-hidden="true"> </i>
                  <strong>Rapper</strong>
              </div>
              <div class="map-legend-item">
                  <i class="fa fa-circle purple" aria-hidden="true"> </i>
                  <strong>Singer</strong>
              </div>
              <div class="map-legend-item">
                  <i class="fa fa-circle green" aria-hidden="true"></i>
                  <strong>Producer</strong>
              </div>
              <div class="map-legend-item">
                  <i class="fa fa-circle black" aria-hidden="true"></i>
                  <strong>Other</strong>
              </div>
          </div>
      </div>
  </div>
</ods-dataset-context>
