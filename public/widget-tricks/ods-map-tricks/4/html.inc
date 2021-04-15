<div class="container">
    <ods-dataset-context context="map,ctxrefine"
                         map-dataset="us-hospitals"
                         map-domain="userclub"
                         map-parameters="{'refine.state':'HI'}"
                         ctxrefine-dataset="us-hospitals"
                         ctxrefine-domain="userclub">
        <div class="map">
            <ods-map basemap="streets" style="height:500px" no-refit="true">
                <ods-map-layer context="map"
                               refine-on-click-context="ctxrefine"
                               refine-on-click-context-replace-refine="true"></ods-map-layer>
            </ods-map>
            <div class="refine"
                 ng-if="ctxrefine.parameters['geofilter.distance']"
                 ods-results="items"
                 ods-results-context="ctxrefine"
                 ods-results-max="1"
                 ng-repeat="item in items">

                <div class="pop-in-card" ng-if="item">
                    <button class="pop-in-clear-button"
                            ng-click="ctxrefine.parameters['geofilter.distance'] = undefined"
                            aria-label="Close popup window">
                        <i class="fa fa-times" aria-hidden="true"></i>
                    </button>
                    <div class="pop-in-header row">
                        <div class="col-xs-4">
                            <div class="pop-in-photo-container">
                                <img class="pop-in-photo"
                                     src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Seal_of_the_State_of_Hawaii.svg/1200px-Seal_of_the_State_of_Hawaii.svg.png">
                            </div>
                        </div>
                        <div class="col-xs-8">
                            <h2 class="pop-in-title">
                                {{ item.fields.name }}
                            </h2>
                            <h3 class="pop-in-subtitle">
                                {{ item.fields.type }}
                            </h3>
                        </div>
                    </div>
                    <dl class="row pop-in-list">
                        <dt class="col-sm-4">ADDRESS</dt>
                        <dd class="col-sm-8">{{ item.fields.address }}</dd>
                        <dt class="col-sm-4">CITY</dt>
                        <dd class="col-sm-8">{{ item.fields.city }}</dd>
                        <dt class="col-sm-4">POPULATION</dt>
                        <dd class="col-sm-8">{{ item.fields.population }}</dd>
                        <dt class="col-sm-4">WEBSITE</dt>
                        <dd class="col-sm-8">
                            <a href="{{ item.fields.source }}" target="_blank">
                                Link <i class="fa fa-external-link" aria-hidden="true"></i>
                            </a>
                        </dd>
                    </dl>
                </div>
                <div class="backdrop"
                     ng-click="ctxrefine.parameters['geofilter.distance'] = undefined"></div>
            </div>
        </div>
    </ods-dataset-context>
</div>
