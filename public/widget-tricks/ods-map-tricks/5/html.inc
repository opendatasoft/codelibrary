<div class="container">
    <ods-dataset-context context="map,ctxrefine"
                         map-dataset="us-hospitals"
                         map-domain="userclub"
                         map-parameters="{'refine.state':'HI'}"
                         ctxrefine-dataset="us-hospitals"
                         ctxrefine-domain="userclub">
        <div class="row">
            <div class="col-md-7">
                <ods-map basemap="streets" style="height:500px" no-refit="true">
                    <ods-map-layer context="map"
                                   refine-on-click-context="ctxrefine"
                                   refine-on-click-context-replace-refine="true"></ods-map-layer>
                </ods-map>
            </div>
            <div class="col-md-5">
                <!-- WHEN NO POINT SELECTED, DISPLAY THIS -->
                <div class="unrefined"
                     ng-if="!ctxrefine.parameters['geofilter.distance']">
                    <div class="header">
                        <h2 class="title">
                            HAWAII Hospitals
                        </h2>
                        <h3 class="subtitle">
                            click on the map to see details
                        </h3>
                    </div>
                </div>

                <!-- WHEN A POINT IS SELECTED, DISPLAY THIS -->
                <div class="refined"
                     ng-if="ctxrefine.parameters['geofilter.distance']"
                     ods-results="items"
                     ods-results-context="ctxrefine"
                     ods-results-max="1"
                     ng-repeat="item in items">
                    <button class="button-go-back"
                            ng-click="ctxrefine.parameters['geofilter.distance'] = undefined"
                            aria-label="Close detail side">
                        <i class="fa fa-long-arrow-left button-go-back-icon"
                           aria-hidden="true"></i>
                        <span>back</span>
                    </button>

                    <!-- DETAILS SIDE, AS AN EXAMPLE: YOU SHOULD REMOVE THIS BLOCK AND DO YOUR OWN -->
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
                    <!-- END OF DETAIL SIDE -->
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>
