<div class="container">
    <ods-dataset-context context="kreis,lander"
                         lander-dataset="georef-germany-land@public"
                         kreis-dataset="georef-germany-kreis@public">
        <div ods-results="landerlist"
             ods-results-context="lander"
             ods-results-max="500">
            <h3>
                Display the name, refine with the code
            </h3>
            <ods-select options="landerlist"
                        selected-values="kreis.parameters['refine.lan_code']"
                        label-modifier="fields.lan_name"
                        value-modifier="fields.lan_code"
                        placeholder="Select a Lander"></ods-select>
            <h4>
                Selected Lander code (used to refine the map context) : {{ kreis.parameters['refine.lan_code'] }}
            </h4>
            <ods-map no-refit="true" scroll-wheel-zoom="false" basemap="jawg.sunny" location="6,51.32924,10.45403">
                <ods-map-layer-group>
                    <ods-map-layer context="kreis" color="#0086D6" picto="ods-circle"
                                   show-marker="true" display="auto" shape-opacity="0.8" point-opacity="1"
                                   border-color="#FFFFFF" border-opacity="1" border-size="1.5"
                                   border-pattern="solid" size="4" size-min="3" size-max="5"
                                   size-function="linear"></ods-map-layer>
                </ods-map-layer-group>
            </ods-map>
            <ul>
                <li>
                    <a href="https://data.opendatasoft.com/explore/dataset/georef-germany-land%40public/"
                       target="_blank">Germany Lander dataset source</a>
                </li>
                <li>
                    <a href="https://data.opendatasoft.com/explore/dataset/georef-germany-kreis%40public/"
                       target="_blank">Germany Kreis dataset source</a>
                </li>
            </ul>
    </ods-dataset-context>
</div>