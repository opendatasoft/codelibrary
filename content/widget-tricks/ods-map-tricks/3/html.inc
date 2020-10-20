<ods-dataset-context context="regions,depts,comm"
                     regions-domain="userclub"
                     regions-dataset="regions-et-collectivites-doutre-mer-france"
                     depts-domain="userclub"
                     depts-dataset="departements-et-collectivites-doutre-mer-france"
                     comm-domain="userclub"
                     comm-dataset="communes-et-arrondissements-municipaux-france">
    <ods-map location="5,44.73113,4.21875" style="height:560px">
        <ods-map-layer context="regions"
                       color="#3D3D3D"
                       show-zoom-max="6">
        </ods-map-layer>
        <ods-map-layer context="depts"
                       color="#3D3D3D"
                       show-zoom-min="7"
                       show-zoom-max="8">
        </ods-map-layer>
        <ods-map-layer context="comm"
                       color="#c0c0c0"
                       show-zoom-min="9">
        </ods-map-layer>
    </ods-map>
</ods-dataset-context>
