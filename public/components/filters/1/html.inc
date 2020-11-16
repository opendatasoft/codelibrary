<ods-dataset-context context="ctx" 
                     ctx-dataset="us-hospitals"
                     ctx-domain="userclub">
    <div class="container">

        <section class="accordion"
                 ng-init="is_open = false">
            <button class="accordion-button"
                    ng-click="is_open = !is_open">
                <span class="accordion-button-text">
                    Filter
                </span>
                <i class="fa fa-filter" 
                   aria-hidden="true"></i>
            </button>

            <ods-filter-summary context="ctx">
                {{ refinements }}
            </ods-filter-summary>

            <ods-facets context="ctx">
                <div class="accordion-content"
                    ng-class="{ 'is-open': is_open }">
                    
                    <div class="accordion-filter">
                        <h2 class="accordion-filter-title">
                            State
                        </h2>
                        <div class="accordion-filter-results">
                            <ods-facet name="state"
                                       value-search="true"
                                       disjunctive="true"
                                       visible-items="50"></ods-facet>
                        </div>
                    </div>

                    <div class="accordion-filter">
                        <h2 class="accordion-filter-title">
                            City
                        </h2>
                        <div class="accordion-filter-results">
                            <ods-facet name="city"
                                       value-search="true"
                                       disjunctive="true"
                                       visible-items="100"></ods-facet>
                        </div>
                    </div>

                    <div class="accordion-filter">
                        <h2 class="accordion-filter-title">
                           Status
                        </h2>
                        <div class="accordion-filter-results">
                            <ods-facet name="status"
                                       disjunctive="true"
                                       visible-items="100"></ods-facet>
                        </div>
                    </div>

                    <div class="accordion-filter">
                        <h2 class="accordion-filter-title">
                            Type
                        </h2>
                        <div class="accordion-filter-results">
                            <ods-facet name="type"
                                       disjunctive="true"
                                       visible-items="100"></ods-facet>
                        </div>
                    </div>
                </div>
            </ods-facets>
        </section>

        <ods-table context="ctx"></ods-table>

    </div>
</ods-dataset-context>