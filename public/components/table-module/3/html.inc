<ods-dataset-context context="population"
                     population-domain="public"
                     population-dataset="population-millesimee-communes-2016">
    <div class="table-module">
        <table class="table-basic"
               ods-results="regions"
               ods-results-context="population"
               ods-results-max="100"
               ng-init="dropdown.open = ''">
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
            </tbody>
        </table>
    </div>
</ods-dataset-context>
