<div ods-datetime="now">
    <ods-dataset-context context="stats"
                         stats-dataset="monitoring-copy"
                         stats-parameters="{'disjunctive.dataset_id':true}"
                         >
        <!-- TITLE -->
        <div class="container">

            <section class="row">
                <div class="col-sm-6">
                    <ods-dataset-context context="queries"
                                         queries-dataset="monitoring-copy"
                                         queries-parameters="{'q':'NOT #null(query_text)'}"
                                         >
                        {{ queries.parameters['q.timerange'] = stats.parameters['q.timerange'] ; '' }}
                        {{ queries.parameters['refine.dataset_id'] = stats.parameters['refine.dataset_id'] ; '' }}
                        <div class="card z-depth-1">
                            <div class="card-head">
                                <h2 class="title">
                                    Most frequent queries
                                </h2>
                            </div>
                            <table class="data-table">
                                <thead>
                                    <tr>
                                        <th> Rank </th>
                                        <th>Request</th>
                                        <th>Occurrences</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr ods-facet-results="frequentqueries"
                                        ods-facet-results-context="queries"
                                        ods-facet-results-facet-name="query_text"
                                        ng-repeat="(i,query) in frequentqueries.slice(0,10)"
                                        ng-show="query.count>5"
                                        >

                                        <td style="text-align:center;">{{ i+1 }}</td>
                                        <td style="width: 100%">{{ query.name }}</td>
                                        <td>{{ query.count }}</td>
                                    </tr>
                                </tbody>
                            </table>
                        </div>
                    </ods-dataset-context>
                </div>
            </section>

        </div>
    </ods-dataset-context>
</div>
