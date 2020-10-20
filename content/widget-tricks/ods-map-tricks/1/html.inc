<div class="row ods-box">
    <ods-dataset-context context="regions,depts"
                         regions-dataset="regions-et-collectivites-doutre-mer-france"
                         regions-domain="userclub"
                         depts-dataset="departements-et-collectivites-doutre-mer-france"
                         depts-domain="userclub">
        <div class="col-md-8">
            <ods-map style="height:560px" scroll-wheel-zoom="false">
                <ods-map-layer context="regions"
                               refine-on-click-context="depts"
                               refine-on-click-depts-map-field="reg_code"
                               refine-on-click-depts-context-field="reg_code"
                               refine-on-click-depts-replace-refine="true"
                               color="#3D3D3D">
                </ods-map-layer>
            </ods-map>
        </div>
        <div class="col-md-4">
            <div ng-if="!depts.parameters['refine.reg_code']">
                <h3 style="font-weight:600; margin-top: 40px">
                    Selectionnez une région sur la carte
                </h3>
            </div>
            <div ng-if="depts.parameters['refine.reg_code']">
                  <span class="ods-button" ng-click="depts.parameters = {};">
                      Supprimer le filtre
                  </span>
                <h3>Filtre actif : code_reg = {{ depts.parameters['refine.reg_code'] }}
                </h3>
                <h2>
                    Liste des départements
                </h2>
                <h4 ng-repeat="item in items" ods-results="items" ods-results-context="depts">
                    {{ item.fields.dep_name }}
                </h4>
            </div>
        </div>
    </ods-dataset-context>
</div>
