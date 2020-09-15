<ods-dataset-context context="population"
                     population-domain="public"
                     population-dataset="population-millesimee-communes-2016">
    <div class="table-module">
        <table class="table-detail"
               ods-results="regions"
               ods-results-context="population"
               ods-results-max="100"
               ng-init="detail.open = ''">
            <thead>
                <tr>
                    <th>Commune</th>
                    <th>Population</th>
                    <th>Code Commune</th>
                    <th>Région</th>
                </tr>
            </thead>
            <tbody>
                <tr ng-repeat-start="(i, region) in regions">
                    <th ng-click="detail.open = (detail.open == region.recordid ? '' : region.recordid)"
                        ng-class="{'table-detail-active': detail.open == region.recordid}"
                        scope="row">
                        {{ region.fields.nom_de_la_commune | capitalize }}
                        <span class="table-row-header-details">
                            - Détails
                            <i class="fa fa-fw" aria-hidden="true"
                               ng-class="{'fa-angle-up': detail.open == region.recordid,
                                         'fa-angle-down': detail.open != region.recordid}"></i>
                        </span>
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
                <tr class="table-item-details"
                    ng-repeat-end
                    ng-show="detail.open == region.recordid">
                    <td colspan="4">
                        <ul>
                            <li>
                                <span>Année recensement : </span>
                                <span>{{ region.fields.annee_recensement }}</span>
                            </li>
                            <li ng-if="region.fields.superficie > 0">
                                <span>Superficie de la commune : </span>
                                <span>{{ region.fields.superficie }}</span>
                            </li>
                            <li>
                                <span>Code INSEE de la région : </span>
                                <span>{{ region.fields.code_region }}</span>
                            </li>
                            <li>
                                <span>Code INSEE du département : </span>
                                <span>{{ region.fields.code_departement }}</span>
                            </li>
                        </ul>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</ods-dataset-context>
