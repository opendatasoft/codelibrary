<!-- IE 11 requires height style on the container, and height:100% on all children -->
<div style="width: 600px; margin: auto">

    <ods-dataset-context style="height: 100%"
                         context="ctx"
                         ctx-dataset="liste-des-departements-metropole-dom"
                         ctx-parameters="{'q':'code > 3'}"
                         ctx-domain="discovery">

        <!-- To Test default color when values are missing, add :
  ctx-parameters="{'q':'code <= 70 OR code > 972 OR code:95 OR code:78'}"
  -->

        <div style="height: 100%" ods-color-gradient="analysis"
             ods-color-gradient-context="ctx"
             ods-color-gradient-x="code_texte"
             ods-color-gradient-serie="MAX(code)"
             ods-color-gradient-logarithmic-scale-factor="1"

             ng-init="shapeColor = 'white'">

            <div id="map" class="svgmap-france">

                <div class="svgmap-drom">
                    <div class="svgmap-martinique">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_mtq_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-reunion">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_reu_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-guyane">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_guf_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-guadeloupe">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_glp_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-mayotte">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_myt_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                </div>
                <div class="svgmap-com">
                    <div class="svgmap-maf_blm">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/com_maf_blm_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-ncl">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/com_ncl_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                    <div class="svgmap-spm">
                        <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/com_spm_text.svg'"
                                   color="shapeColor"
                                   color-by-attribute="analysis.colors"></ods-picto>
                    </div>
                </div>
                <div class="svgmap-idf">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_idf_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-francemetro">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_fxx_text.svg'"
                               color="shapeColor"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
            </div>

        </div>
    </ods-dataset-context>

</div>