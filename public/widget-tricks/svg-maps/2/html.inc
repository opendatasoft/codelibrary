<ods-dataset-context context="ctx"
                     ctx-dataset="liste-des-departements-metropole-dom"
                     ctx-domain="discovery">
    <div ods-color-gradient="analysis"
         ods-color-gradient-context="ctx"
         ods-color-gradient-x="code_texte"
         ods-color-gradient-serie="MAX(code)"
         ods-color-gradient-logarithmic-scale-factor="1">
        <div class="svgmap-france" id="style1">
            <div class="svgmap-idf svgmap-idf-top-left"
                 ng-class="idf">
                <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_idf.svg'"
                           color-by-attribute="analysis.colors"></ods-picto>
            </div>
            <div class="svgmap-francemetro">
                <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_fxx.svg'"
                           color-by-attribute="analysis.colors"></ods-picto>
            </div>
        </div>
    </div>
</ods-dataset-context>
