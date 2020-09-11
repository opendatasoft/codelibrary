<ods-dataset-context context="ctx"
                     ctx-dataset="liste-des-departements-metropole-dom"
                     ctx-domain="discovery">
    <div ods-color-gradient="analysis"
         ods-color-gradient-context="ctx"
         ods-color-gradient-x="code_texte"
         ods-color-gradient-serie="MAX(code)"
         ods-color-gradient-logarithmic-scale-factor="1"
         ng-init="shapeColor = 'white'">
        <div id="map" class="svgmap-france-region svgmap-with-text">
            <div class="svgmap-drom-region">
                <div class="svgmap-region-martinique">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_mtq_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-region-reunion">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_reu_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-region-guyane">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_guf_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-region-guadeloupe">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_glp_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-region-mayotte">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_myt_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
            </div>
            <div class="svgmap-francemetro-region">
                <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/reg_fxx_text.svg'"
                           color="shapeColor"
                           color-by-attribute="analysis.colors"></ods-picto>
            </div>
        </div>
    </div>
</ods-dataset-context>
