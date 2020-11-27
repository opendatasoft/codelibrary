<div class="content-card"
     ng-init="view = 'map'">
    <div class="row">
        <div class="col-sm-3">
            <h2 class="content-card-title">
                France departments
            </h2>
            <p class="content-card-description">
                Cardano could be many technical analysis since Nexo data mining a fundamental analysis.
            </p>
            <p class="content-card-description">
                Ravencoin generates a amazing fish of lots of market cap, and Waves serves many quick anti-money laundering! Solidity allowed lots of fast peer-to-peer network.
            </p>
            <div class="switch-container">
                <strong>View : </strong>
                <label class="switch">
                    <input ng-model="view"
                            ng-true-value="'map'" 
                            ng-false-value="'table'" 
                            ng-checked="view == 'map'"
                            class="switch-input"
                            type="checkbox">
                    <div class="switch-button">
                        <span class="switch-button-left">TABLE</span> 
                        <span class="switch-button-right">MAP</span>
                    </div>
                </label>
            </div>
        </div>
        <div class="col-sm-9">
            <ods-dataset-context context="countoursgeographiques"
                                 countoursgeographiques-dataset="contours-geographiques-simplifies-des-nouvelles-regions-metropole"
                                 countoursgeographiques-domain="public"
                                 countoursgeographiques-parameters="{}">
                <div ng-if="view == 'map'">
                    <ods-map context="countoursgeographiques"
                            scroll-wheel-zoom="false"
                            location="6,47.13742,3.69141"
                            basemap="jawg.streets"></ods-map>
                </div>
                <div ng-if="view == 'table'">
                    <ods-table context="countoursgeographiques"></ods-table>
                </div>
            </ods-dataset-context>
        </div>
    </div>
</div>
