<ods-dataset-context context="lines,stops"
                     lines-dataset="gtfs_ny_routes"
                     lines-parameters="{'disjunctive.filename':'true',
                                       'disjunctive.route_type':'true',
                                       'disjunctive.route_short_name':'true',
                                       'disjunctive.route_long_name':'true'}"
                     stops-dataset="gtfs_ny_stops"
                     stops-parameters="{'disjunctive.filename':'true',
                                       'disjunctive.route_type':'true',
                                       'disjunctive.route_short_name':'true',
                                       'disjunctive.route_long_name':'true'}">

    <div class="row">
        <div class="col-md-12">
            <h2>
                Routes and stations' visualisation from GTFS files
            </h2>
        </div>
        <div class="col-md-8 dashboard">

            <ods-map no-refit="true" display-control="false" search-box="false" toolbar-fullscreen="true" toolbar-geolocation="true" basemap="jawg.streets" location="10,40.70795,-73.97688" scroll-wheel-zoom="false">
                <ods-map-layer-group>
                    <ods-map-layer context="stops" color="#6A79B0" picto="ods-bus" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="false" title="Stations du réseau urbain" size="2" size-min="3" size-max="5" size-function="linear" show-if="stations"></ods-map-layer>
                </ods-map-layer-group>
                <ods-map-layer-group>
                    <ods-map-layer context="lines" color-by-field="route_color" picto="ods-circle" show-marker="true" display="categories" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="false" title="Lignes du réseau urbain" size="1"></ods-map-layer>
                </ods-map-layer-group>
            </ods-map>
        </div>
        <div class="col-md-4 dashboard filters">

            <label class="switch">
                <div class="switch-label">
                    Display GTFS stops
                </div>
                <input class="switch-input"
                       type="checkbox"
                       ng-click="stations=!stations">
                <span class="switch-button"></span>
            </label>

            <hr />

            <div class="clearfilters"
                 ng-class="{'active': lines.parameters['refine.filename'].length > 0 ||
                           lines.parameters['refine.route_type'].length > 0 ||
                           lines.parameters['refine.route_short_name'].length > 0 ||
                           lines.parameters['refine.route_long_name'].length > 0}"
                 ng-click="stops.parameters['refine.filename'] = undefined;
                           lines.parameters['refine.filename'] = undefined;
                           lines.parameters['refine.route_type'] = undefined;
                           lines.parameters['refine.route_short_name'] = undefined;
                           lines.parameters['refine.route_long_name'] = undefined;">
                Clear all filters
            </div>
            <ods-facets context="lines">
                <h3>
                    Operator
                </h3>
                <!--ods-facet name="filename" refine-also="stops" disjunctive="true"></ods-facet-->
                <div ods-facet-results="filenames"
                     ods-facet-results-context="lines"
                     ods-facet-results-facet-name="filename"
                     ods-facet-results-sort="alphanum">
                    <ods-select options="filenames"
                                selected-values="lines.parameters['refine.filename']"
                                placeholder="Select one or more operator"
                                label-modifier="name"
                                value-modifier="name"
                                multiple="true"></ods-select>
                    {{ stops.parameters['refine.filename'] = lines.parameters['refine.filename'] ; '' }}
                </div>
                <h3>
                    Route type <i>(filter routes only)</i>
                </h3>
                <!--ods-facet name="route_type" disjunctive="true"></ods-facet-->
                <div ods-facet-results="routetypes"
                     ods-facet-results-context="lines"
                     ods-facet-results-facet-name="route_type"
                     ods-facet-results-sort="alphanum">
                    <ods-select options="routetypes"
                                selected-values="lines.parameters['refine.route_type']"
                                placeholder="Select one or more route type"
                                label-modifier="name"
                                value-modifier="name"
                                multiple="true"></ods-select>
                </div>
                <h3>
                    Route number <i>(filter routes only)</i>
                </h3>
                <!--ods-facet name="route_short_name" disjunctive="true"></ods-facet-->
                <div ods-facet-results="routeshortnames"
                     ods-facet-results-context="lines"
                     ods-facet-results-facet-name="route_short_name"
                     ods-facet-results-sort="alphanum">
                    <ods-select options="routeshortnames"
                                selected-values="lines.parameters['refine.route_short_name']"
                                placeholder="Select one or more route number"
                                label-modifier="name"
                                value-modifier="name"
                                multiple="true"></ods-select>
                </div>
                <h3>
                    Route name <i>(filter routes only)</i>
                </h3>
                
                <!--ods-facet name="route_long_name" disjunctive="true"></ods-facet-->
                <div ods-facet-results="routelongnames"
                     ods-facet-results-context="lines"
                     ods-facet-results-facet-name="route_long_name"
                     ods-facet-results-sort="alphanum">
                    <ods-select options="routelongnames"
                                selected-values="lines.parameters['refine.route_long_name']"
                                placeholder="Select one or more route name"
                                label-modifier="name"
                                value-modifier="name"
                                multiple="true"></ods-select>
                </div>
            </ods-facets>
        </div>
    </div>
</ods-dataset-context>
