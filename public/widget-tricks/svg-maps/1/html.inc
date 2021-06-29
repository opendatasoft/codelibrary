<ods-dataset-context context="ctx"
                     ctx-dataset="liste-des-departements-metropole-dom"
                     ctx-domain="discovery">
    <div ods-color-gradient="analysis"
         ods-color-gradient-context="ctx"
         ods-color-gradient-x="code_texte"
         ods-color-gradient-serie="MAX(code)"
         ods-color-gradient-logarithmic-scale-factor="1"
         ng-init="idf = 'svgmap-idf-top-left';
                  drom = 'svgmap-drom-right';">
        <div class="ods-box">
            <span>
                Position de l'île de France
            </span>
            <select ng-model="idf">
                <option value="svgmap-idf-top-left">Haut gauche</option>
                <option value="svgmap-idf-top-right">Haut droit</option>
                <option value="svgmap-idf-none">Désactivé</option>
            </select>
            <br/>
            <span>
                Position des départements et régions d'outre mer
            </span>
            <select ng-model="drom">
                <option value="svgmap-drom-left">Gauche</option>
                <option value="svgmap-drom-right">Droite</option>
                <option value="svgmap-drom-bottom">En dessous</option>
                <option value="svgmap-drom-none">Désactivé</option>
            </select>
        </div>
        <div class="svgmap-france">
            <div class="svgmap-drom"
                 ng-class="drom">
                <div class="svgmap-martinique">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_mtq.svg'"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-reunion">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_reu.svg'"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-guyane">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_guf.svg'"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-guadeloupe">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_glp.svg'"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
                <div class="svgmap-mayotte">
                    <ods-picto url="'https://static.opendatasoft.com/georef/svg/fr/dep_myt.svg'"
                               color-by-attribute="analysis.colors"></ods-picto>
                </div>
            </div>
            <div class="svgmap-idf"
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
