<!-- "dep" context is the official geo-referential from Opendatasoft Data Network -->
<ods-dataset-context context="dep,carpool"
                     dep-dataset="georef-france-departement"
                     dep-parameters="{'q':'dep_code <= 95'}"
                     dep-domain="public"
                     carpool-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                     carpool-domain="userclub">

    <div ods-color-gradient="colorgradient"
         ods-color-gradient-context="carpool"
         ods-color-gradient-x="dep_code"
         ods-color-gradient-serie="COUNT()"
         ods-color-gradient-high="rgb(20, 33, 96)"
         ods-color-gradient-low="rgb(180, 197, 241)">

        <h2>Color departments by number of carpool location</h2>
        <div class="map-container">
            <ods-map>
                <ods-map-layer context="dep"
                               color-categories="colorgradient['colors']"
                               color-by-field="dep_code"
                               color-categories-other="lightgrey"
                               display="categories"
                               shape-opacity="0.95"
                               title="# of carpool parking">
                </ods-map-layer>
            </ods-map>

            <ods-legend title="# of carpool parking"
                        color-gradient="colorgradient"
                        display="linear"
                        no-value-color="lightgrey"
                        decimal-precision="0"></ods-legend>
            </div>
        </div>
    </div>
</ods-dataset-context>
