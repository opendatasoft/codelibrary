<!-- "dep" context is the official geo-referential from Opendatasoft Data Network -->
<ods-dataset-context context="dep,carpool"
                     dep-dataset="georef-france-departement"
                     dep-parameters="{'q':'dep_code <= 95'}"
                     dep-domain="public"
                     carpool-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                     carpool-domain="userclub">
    <div class="row">
        <div class="col-sm-6">
            <div ods-color-gradient="colorgradientleft"
                 ods-color-gradient-context="carpool"
                 ods-color-gradient-x="dep_code"
                 ods-color-gradient-serie="COUNT()"
                 ods-color-gradient-nb-classes="2">

                <div class="map-container">
                    <h2>Nb classes = 2</h2>
                    <h3>Split values into 2 groups, and therefore 2 colors</h3>
                    <ods-map>
                        <ods-map-layer context="dep"
                                       color-categories="colorgradientleft['colors']"
                                       color-by-field="dep_code"
                                       color-categories-other="lightgrey"
                                       display="categories"
                                       shape-opacity="0.95"
                                       title="# of carpool parking">
                        </ods-map-layer>
                    </ods-map>

                    <ods-legend title="# of carpool parking"
                                color-gradient="colorgradientleft"
                                display="steps"
                                no-value-color="lightgrey"
                                decimal-precision="0"></ods-legend>
                    
                </div>
            </div>
        </div>
        <div class="col-sm-6">
            <div ods-color-gradient="colorgradientright"
                 ods-color-gradient-context="carpool"
                 ods-color-gradient-x="dep_code"
                 ods-color-gradient-serie="COUNT()"
                 ods-color-gradient-nb-classes="8">

                <div class="map-container">
                    <h2>Nb classes = 8</h2>
                    <h3>Split values into 8 groups, and therefore 8 colors</h3>
                    <ods-map>
                        <ods-map-layer context="dep"
                                       color-categories="colorgradientright['colors']"
                                       color-by-field="dep_code"
                                       color-categories-other="lightgrey"
                                       display="categories"
                                       shape-opacity="0.95"
                                       title="# of carpool parking">
                        </ods-map-layer>
                    </ods-map>


                    <ods-legend title="# of carpool parking"
                                color-gradient="colorgradientright"
                                display="steps"
                                no-value-color="lightgrey"
                                decimal-precision="0"></ods-legend>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
