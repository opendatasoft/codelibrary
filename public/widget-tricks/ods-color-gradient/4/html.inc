<ods-dataset-context context="dep,carpool"
                     dep-dataset="departements-et-collectivites-doutre-mer-france"
                     dep-domain="userclub"
                     carpool-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                     carpool-domain="userclub">
    <div class="row">
        <div class="col-sm-6">
            <div ods-color-gradient="colorgradientleft"
                 ods-color-gradient-context="carpool"
                 ods-color-gradient-x="dep_code"
                 ods-color-gradient-serie="COUNT()">

                <div class="map-container">
                    <h2>No class, linear scale</h2>
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

                    <ods-legend title="display=linear (default value)"
                                color-gradient="colorgradientleft"
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
                 ods-color-gradient-nb-classes="3">

                <div class="map-container">
                    <h2>3 classes, linear scale</h2>
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


                    <ods-legend title="display=steps"
                                color-gradient="colorgradientright"
                                display="steps"
                                no-value-color="lightgrey"
                                decimal-precision="0"></ods-legend>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
