<div class="row ods-box">
    <ods-dataset-context context="regions,depts,comm"
                         regions-domain="userclub"
                         regions-dataset="regions-et-collectivites-doutre-mer-france"
                         depts-domain="userclub"
                         depts-dataset="departements-et-collectivites-doutre-mer-france"
                         comm-domain="userclub"
                         comm-dataset="communes-et-arrondissements-municipaux-france">
        <div class="col-md-8">
            <ods-map style="height:560px" scroll-wheel-zoom="false">
                <ods-map-layer context="regions"
                               refine-on-click-context="[regions,depts]"
                               refine-on-click-regions-map-field="reg_code"
                               refine-on-click-regions-context-field="reg_code"
                               refine-on-click-depts-map-field="reg_code"
                               refine-on-click-depts-context-field="reg_code"
                               color="#3D3D3D"
                               show-if="!regions.parameters['refine.reg_code']">
                </ods-map-layer>
                <ods-map-layer context="depts"
                               refine-on-click-context="[depts,comm]"
                               refine-on-click-depts-map-field="dep_code"
                               refine-on-click-depts-context-field="dep_code"
                               refine-on-click-comm-map-field="dep_code"
                               refine-on-click-comm-context-field="dep_code"
                               color="#3D3D3D"
                               show-if="depts.parameters['refine.reg_code'] && !comm.parameters['refine.dep_code']">
                </ods-map-layer>
                <ods-map-layer context="comm"
                               show-if="comm.parameters['refine.dep_code']">
                </ods-map-layer>
            </ods-map>
        </div>
        <div class="col-md-4">
              <span class="ods-button" ng-click="comm.parameters = {}; depts.parameters = {}; regions.parameters = {};">
                  Supprimer tous les filtres
              </span>
            <h2>
                Jeu de données région
            </h2>
            <h4>
                <span ng-if="!regions.parameters['refine.reg_code']">Aucun filtre actif</span>
                <span ng-if="regions.parameters['refine.reg_code']">Filtre actif : reg_code = {{ regions.parameters['refine.reg_code'] }}</span>
            </h4>
            <h2>
                Jeu de données département
            </h2>
            <h4>
                <span ng-if="!(depts.parameters['refine.dep_code'] || depts.parameters['refine.reg_code'])">Aucun filtre actif</span>
                <span ng-if="depts.parameters['refine.reg_code']">Filtre actif : reg_code = {{ depts.parameters['refine.reg_code'] }}</span>
                <span ng-if="depts.parameters['refine.dep_code']"><br/>Filtre actif: dep_code = {{ depts.parameters['refine.dep_code'] }}</span>
            </h4>
            <h2>
                Jeu de données commune
            </h2>
            <h4>
                <span ng-if="!comm.parameters['refine.dep_code']">Aucun filtre actif</span>
                <span ng-if="comm.parameters['refine.dep_code']">Filtre actif : dep_code = {{ comm.parameters['refine.dep_code'] }}</span>
            </h4>
        </div>
    </ods-dataset-context>
</div>
