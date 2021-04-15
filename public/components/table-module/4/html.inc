<ods-dataset-context context="population"
                     population-domain="public"
                     population-dataset="population-millesimee-communes-2016">
    <div class="table-module">
        <table class="table-advanced"
               ods-results="regions"
               ods-results-context="population"
               ods-results-max="100"
               ng-init="dropdown.open = ''; detail.open = ''">
            <thead>
                <tr>
                    <th>Commune</th>
                    <th>Population</th>
                    <th>Code Commune</th>
                    <th>Région</th>
                    <th></th>
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
                    <td>
                        <div class="table-dropdown-container">
                            <button class="table-dropdown-button"
                                    ng-click="dropdown.open = (dropdown.open == region.recordid ? '' : region.recordid)"
                                    ng-class="{'table-dropdown-button-active': dropdown.open == region.recordid}">
                                <i class="fa fa-ellipsis-v"></i>
                            </button>
                            <div class="table-dropdown"
                                 ng-class="{'table-dropdown-visible' : dropdown.open == region.recordid }">
                                <a href="#"
                                   target="_blank"
                                   class="table-dropdown-item">
                                    Action 1
                                </a>
                                <a href="#"
                                   target="_blank"
                                   class="table-dropdown-item">
                                    Action 2
                                </a>
                            </div>
                            <div class="table-dropdown-backdrop"
                                 ng-click="dropdown.open = ''"
                                 ng-show="dropdown.open != ''"></div>
                        </div>
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
