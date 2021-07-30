<ods-dataset-context context="dep,carpool"
                     dep-dataset="departements-et-collectivites-doutre-mer-france"
                     dep-domain="userclub"
                     carpool-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                     carpool-domain="userclub">
    <div class="row">
        <div class="col-sm-6">
            <div ods-color-gradient="colorgradientsoften"
                 ods-color-gradient-context="carpool"
                 ods-color-gradient-x="dep_code"
                 ods-color-gradient-serie="COUNT()"
                 ods-color-gradient-pow-exponent="0.3">

                <div class="map-container">
                    <h2>Power exponent at 0.3 : soften higher values</h2>
                    <h3>Equivalent to log scale</h3>
                    <ods-map>
                        <ods-map-layer context="dep"
                                       color-categories="colorgradientsoften['colors']"
                                       color-by-field="dep_code"
                                       color-categories-other="lightgrey"
                                       display="categories"
                                       shape-opacity="0.95"
                                       title="# of carpool parking">
                        </ods-map-layer>
                    </ods-map>
                </div>
            </div>
        </div>
        <div class="col-sm-6">
            <div ods-color-gradient="colorgradientemphasize"
                 ods-color-gradient-context="carpool"
                 ods-color-gradient-x="dep_code"
                 ods-color-gradient-serie="COUNT()"
                 ods-color-gradient-pow-exponent="2">

                <div class="map-container">
                    <h2>Power exponent at 2 : emphasize higher values</h2>
                    <h3>Equivalent to square scale</h3>
                    <ods-map>
                        <ods-map-layer context="dep"
                                       color-categories="colorgradientemphasize['colors']"
                                       color-by-field="dep_code"
                                       color-categories-other="lightgrey"
                                       display="categories"
                                       shape-opacity="0.95"
                                       title="# of carpool parking">
                        </ods-map-layer>
                    </ods-map>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
