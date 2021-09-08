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
         ods-color-gradient-nb-classes="5"
         ods-color-gradient-pow-exponent="0.3"
         ods-color-gradient-high="rgb(20, 33, 96)"
         ods-color-gradient-low="rgb(180, 197, 241)">

        <h2>Nb classes : 5, pow scale (exponent = 0.3)</h2>

        <!-- map-container has a relative position, mandatory for absolute positioned legend -->
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

            <!-- Absolute position, MUST be in the map-container -->
            <ods-legend class="legend-horizontal-absolute-pos"
                        title="width:fit, horizontal, position:absolute"
                        color-gradient="colorgradient"
                        display="steps"
                        no-value-color="lightgrey"
                        decimal-precision="0"></ods-legend>

            <!-- Absolute position, MUST be in the map-container -->
            <ods-legend class="legend-default-absolute-pos"
                        title="width:fit, position:absolute"
                        color-gradient="colorgradient"
                        display="steps"
                        no-value-color="lightgrey"
                        decimal-precision="0"></ods-legend>
        </div>

        <!-- Can be anywhere, no need to be inside the map-container -->
        <ods-legend class="legend-horizontal"
                    title="width:100%, horizontal"
                    color-gradient="colorgradient"
                    display="steps"
                    no-value-color="lightgrey"
                    decimal-precision="0"></ods-legend>
    </div>
</ods-dataset-context>
