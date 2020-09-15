<div class="row">
    <div class="col-md-4">
        <!-- Content card -->
        <div class="content-card">
            <h2 class="content-card-title">
                Global university ranking
            </h2>
            <ods-dataset-context context="shangairankinguniversitysince2003" shangairankinguniversitysince2003-domain="discovery" shangairankinguniversitysince2003-dataset="shangai-ranking-university-since-2003">
                <ods-chart align-month="true">
                    <ods-chart-query context="shangairankinguniversitysince2003" field-x="country" maxpoints="10" sort="serie1-1">
                        <ods-chart-serie chart-type="treemap" function-y="COUNT" color="range-custom" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </ods-dataset-context>
        </div>
    </div>
    <div class="col-md-8">
        <!-- Content card -->
        <div class="content-card">
            <h2 class="content-card-title">
                Ranking on a map
            </h2>
            <ods-dataset-context context="shangairankinguniversitysince2003" shangairankinguniversitysince2003-domain="discovery" shangairankinguniversitysince2003-dataset="shangai-ranking-university-since-2003">
                <ods-map no-refit="true" scroll-wheel-zoom="false" display-control="false" search-box="false" toolbar-fullscreen="false" toolbar-geolocation="true" basemap="jawg.streets" location="2,31.31678,4.10444" display-legend="false">
                    <ods-map-layer-group>
                        <ods-map-layer context="shangairankinguniversitysince2003" color-numeric-ranges="{'42.8':'#FC9272','84.6':'#E6755C','126.4':'#D05946','168.2':'#BA3D30','210.0':'#A5211B'}" color-numeric-range-min="1" picto="ods-circle" show-marker="true" display="choropleth" function="COUNT" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Shangai ranking universities since 2003" size="4"></ods-map-layer>
                    </ods-map-layer-group>
                </ods-map>
            </ods-dataset-context>
        </div>
    </div>
</div>
