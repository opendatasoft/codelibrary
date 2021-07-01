<div class="container">
    <ods-dataset-context context="belgiumdistricts, belgiumdistrictsinhab"
                         belgiumdistricts-dataset="belgium-statistical-districts"
                         belgiumdistricts-parameters="{'sort':'inh_km2','refine.commune':'BRUXELLES'}"
                         belgiumdistrictsinhab-dataset="belgium-statistical-districts"
                         belgiumdistrictsinhab-parameters="{'sort':'inhab','refine.commune':'BRUXELLES'}">

        <h3>10 Brussels districts</h3>
        <h4>The context used by ods-results has <code>sort: inh_km2</code> parameter (ie. sort by density)</h4>
        <div ods-results="records"
             ods-results-context="belgiumdistricts"
             ods-results-max="10">
            <ul>
                <li ng-repeat="record in records">
                    <strong>{{ record.fields.sector_fr }}</strong>, {{ record.fields.inhab | number }} inhabitants.
                    ({{ record.fields.inh_km2 | number }} inhab/km<sup>2</sup>)
                </li>
            </ul>
        </div>

        <h3>10 Brussels districts</h3>
        <h4>The context used by ods-results has a <code>sort: inhab</code> parameter (ie. sort by population)</h4>
        <div ods-results="records"
             ods-results-context="belgiumdistrictsinhab"
             ods-results-max="10">
            <ul>
                <li ng-repeat="record in records">
                    <strong>{{ record.fields.sector_fr }}</strong>, {{ record.fields.inhab | number }} inhabitants.
                    ({{ record.fields.inh_km2 | number }} inhab/km<sup>2</sup>)
                </li>
            </ul>
        </div>

    </ods-dataset-context>
</div>