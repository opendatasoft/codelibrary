<ods-dataset-context context="velib" 
                     velib-dataset="velib-disponibilite-en-temps-reel"
                     velib-domain="parisdata">
    <ods-simple-tabs class="tab-horizontal">
        <ods-simple-tab label="Velib" 
                        fontawesome-class="bicycle"
                        keep-content="true">
            <p>
                L’objectif du service Vélib’ Métropole est de faciliter le développement de nouvelles mobilités sur le territoire francilien, en complément de l’offre de transport existante.
            </p>
            <ods-table context="velib"></ods-table>
        </ods-simple-tab>
        <ods-simple-tab label="Stations">
            <ods-map no-refit="true" 
                     scroll-wheel-zoom="false" 
                     display-control="true" 
                     search-box="true" 
                     toolbar-fullscreen="true"
                     toolbar-geolocation="true" 
                     basemap="jawg.sunny" 
                     location="12,48.85593,2.35192">
                <ods-map-layer-group>
                    <ods-map-layer context="velib" 
                                   color="#C32D1C" 
                                   picto="ods-bicycle" 
                                   show-marker="true" 
                                   display="auto" 
                                   shape-opacity="0.5" 
                                   point-opacity="1" 
                                   border-color="#FFFFFF"
                                   border-opacity="1" 
                                   border-size="1" 
                                   border-pattern="solid" 
                                   caption="true" 
                                   title="Vélib - Vélos et bornes - Disponibilité temps réel" 
                                   description="Jeu de données présentant la disponibilité des bornettes, vélos
                                                mécaniques et électriques des stations Vélib’ Métropole." 
                                   size="4" 
                                   size-min="3" 
                                   size-max="5" 
                                   size-function="linear"></ods-map-layer>
                </ods-map-layer-group>
            </ods-map>
        </ods-simple-tab>
        <ods-simple-tab label="Top 10 disponibilité">
            <ods-chart single-y-axis="true" 
                       align-month="true">
                <ods-chart-query context="velib" 
                                 field-x="name" 
                                 maxpoints="10" 
                                 sort="serie1-1">
                    <ods-chart-serie expression-y="numbikesavailable" 
                                     chart-type="column" 
                                     function-y="SUM" 
                                     color="#142E7B" 
                                     scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </ods-simple-tab>
    </ods-simple-tabs>
</ods-dataset-context>
      