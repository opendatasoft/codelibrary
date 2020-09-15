<ods-dataset-context context="population"
                     population-domain="public"
                     population-dataset="population-millesimee-communes-2016">
    <div class="table-module">
        <table class="table-basic"
               ods-results="regions"
               ods-results-context="population"
               ods-results-max="100">
            <thead>
                <tr>
                    <th>Commune</th>
                    <th>Population</th>
                    <th>Code Commune</th>
                    <th>Région</th>
                </tr>
            </thead>
            <tbody>
                <tr ng-repeat="region in regions">
                    <th scope="row">
                        {{ region.fields.nom_de_la_commune | capitalize }}
                    </th>
                    <td>
                        {{ region.fields.population_totale }}
                    </td>
                    <td>
                        {{ region.fields.code_commune }}
                    </td>
                    <td>
                        {{ region.fields.nom_de_la_region }}
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</ods-dataset-context>
