<!-- This first context simulates the "ctx" the custom view will inherit from the catalog page-->
<ods-dataset-context context="ctx" ctx-dataset="transit-bus-routes-gtfs-static">
<!-- The component for the custom view starts here 👇 -->
<ods-dataset-context context="stops" stops-dataset="transit-bus-stops-gtfs-static">

    <div class="row">
        <div class="col-md-8 dashboard">

            <ods-map no-refit="true" display-control="false" search-box="false" toolbar-fullscreen="true" toolbar-geolocation="true" basemap="jawg.streets" location="12,44.229,-76.480" scroll-wheel-zoom="false">
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
                <input type="checkbox" ng-click="stations=!stations">
                <span class="slider round"></span>
            </label>
            <h2> Turn on Stops</h2>
        </div>
    </div>
</ods-dataset-context>
<!-- Component for custom view ends here 👆 -->
</ods-dataset-context>
