<div class="content-card">
    <div class="row">
        <div class="col-sm-6">
            <!-- Replace this widget with your own visualisation -->
            <ods-dataset-context context="contoursgeographiquessimplifiesdesnouvellesregionsmetropole2"
             contoursgeographiquessimplifiesdesnouvellesregionsmetropole2-domain="discovery" contoursgeographiquessimplifiesdesnouvellesregionsmetropole2-dataset="contours-geographiques-simplifies-des-nouvelles-regions-metropole2">
                <ods-map no-refit="true" scroll-wheel-zoom="false" display-legend="false" display-control="false" search-box="false" toolbar-fullscreen="false" toolbar-geolocation="false" location="6,48.4292,2.21924">
                    <ods-map-layer-group>
                        <ods-map-layer context="contoursgeographiquessimplifiesdesnouvellesregionsmetropole2" color="#142E7B" picto="ods-circle" show-marker="true" display="auto" function="COUNT" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="2" border-pattern="solid" caption="true" title="contours-geographiques-simplifies-des-nouvelles-regions-metropole2" size="4" size-min="3" size-max="5" size-function="linear"></ods-map-layer>
                    </ods-map-layer-group>
                </ods-map>
            </ods-dataset-context>
        </div>
        <div class="col-sm-6">
            <h2 class="content-card-title">
                French departments
            </h2>
            <p class="content-card-description">
                Cardano could be many technical analysis since Nexo data mining a fundamental analysis.
            </p>
            <p class="content-card-description">
                Ravencoin generates a amazing fish of lots of market cap, and Waves serves many quick anti-money laundering! Solidity allowed lots of fast peer-to-peer network.
            </p>
            <!-- Dropdown starts here -->
            <div class="dropdown"
                 ng-init="dropdown.open = false">
                <button ng-click="dropdown.open = !dropdown.open"
                        ng-class="{'dropdown-button-open': dropdown.open == true}"
                        id="dropdown-button"
                        class="dropdown-button"
                        aria-haspopup="true"
                        aria-expanded="{{ dropdown.open == true }}">
                    More info
                </button>
                <div class="dropdown-menu"
                     ng-class="{'dropdown-visible' : dropdown.open == true }"
                     aria-labelledby="dropdown-button">
                    <div class="dropdown-title">
                        Where to?
                    </div>
                    <div class="dropdown-items">
                        <a class="dropdown-item" href="#" ng-click="">
                            See dataset
                        </a>
                        <a class="dropdown-item" href="#" ng-click="">
                            Create map
                        </a>
                        <a class="dropdown-item" href="#" ng-click="">
                            Create graph
                        </a>
                    </div>
                </div>
                <div class="dropdown-backdrop"
                     ng-click="dropdown.open = ''"
                     ng-show="dropdown.open != ''"></div>
            </div>
            <!-- Dropdown ends here -->
        </div>
    </div>
</div>
