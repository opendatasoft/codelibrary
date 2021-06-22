<div class="container">
    <ods-dataset-context context="belgiumdistricts"
                         belgiumdistricts-dataset="belgium-statistical-districts"
                         belgiumdistricts-parameters="{'sort':'inhab','refine.commune':'BRUXELLES'}">

        <div class="row"
             ods-results="records"
             ods-results-context="belgiumdistricts"
             ods-results-max="10">
            <div class="col-md-4 col-sm-6"
                 ng-repeat="record in records">
                <div class="box white flat">
                    <h3>{{ record.fields.sector_fr }}</h3>
                    <p>
                        {{ record.fields.inhab | number }} inhabitants. ({{ record.fields.inh_km2 | number }} inhab/km<sup>2</sup>)
                    </p>
                    <ods-geotooltip geojson="record.fields.geo_shape">
                        See the district on a map <i class="fa fa-map-pin" aria-hidden="true"></i>
                    </ods-geotooltip>
                </div>
            </div>
        </div>

    </ods-dataset-context>
</div>