<ods-dataset-context context="shanghaiworlduniversityrankingpublic"
                     shanghaiworlduniversityrankingpublic-dataset="shanghai-world-university-ranking"
                     shanghaiworlduniversityrankingpublic-domain="userclub">
    <ods-map style="height: 500px" no-refit="true" scroll-wheel-zoom="false" display-control="true" search-box="false"
             toolbar-fullscreen="true" toolbar-geolocation="true" basemap="jawg.light"
             display-control-single-layer="true">
        <ods-map-layer-group>
            <ods-map-layer context="shanghaiworlduniversityrankingpublic"
                           color-numeric-ranges="{'100':'#000000','200':'#303133','300':'#606266','400':'#909399','500':'#C0C5CC'}"
                           color-numeric-range-min="0" picto="ods-circle" show-marker="true" display="choropleth"
                           function="AVG" expression="world_rank_int" shape-opacity="0.9" point-opacity="1"
                           border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                           caption="true" caption-picto-color="#E5E5E5" title="Shanghai World University Ranking"
                           description="By ranking" size="4"></ods-map-layer>
        </ods-map-layer-group>
        <ods-map-layer-group displayed="false">
            <ods-map-layer context="shanghaiworlduniversityrankingpublic"
                           color-numeric-ranges="{'10':'#00757E','20':'#2E8D94','30':'#5CA5AB','40':'#8ABDC1','100':'#B8D5D8'}"
                           color-numeric-range-min="0" picto="ods-circle" show-marker="true" display="choropleth"
                           function="AVG" expression="total_score" shape-opacity="0.9" point-opacity="1"
                           border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                           caption="true" caption-picto-color="#E5E5E5" title="Shanghai World University Ranking"
                           description="By score" size="4"></ods-map-layer>
        </ods-map-layer-group>
    </ods-map>

</ods-dataset-context>
