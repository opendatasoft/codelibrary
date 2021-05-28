<div ods-datetime="now">
    <ods-dataset-context context="stats"
                         stats-dataset="monitoring-copy"
                         stats-parameters="{'disjunctive.dataset_id':true}"
                         >
            <nav class="row row-sticky">
                <div class="menu z-depth-2">
                    <div class="filter">
                        <div ods-facet-results="items"
                             ods-facet-results-context="stats"
                             ods-facet-results-facet-name="dataset_id"
                             ods-facet-results-sort="alphanum"
                             >
                            <ods-select placeholder="Dataset"
                                        selected-values="stats.parameters['refine.dataset_id']"
                                        multiple="false"
                                        options="items"
                                        label-modifier="name"
                                        value-modifier="name"
                                        >
                            </ods-select>
                        </div>
                    </div>
                    <div class="filter">
                        <ods-timerange context="stats"
                                       date-format="DD MMM YYYY"
                                       precision="day"
                                       default-from="{{ (now|momentadd:'months':-1)|moment:'YYYY-MM-DD' }}"
                                       default-to="{{ now|moment:'YYYY-MM-DD' }}"
                                       stats-time-field="timestamp"
                                       from="startDate"
                                       to="endDate"
                                       >
                        </ods-timerange>
                    </div>
                </div>
            </nav>
        </div>
    </ods-dataset-context>
</div>
