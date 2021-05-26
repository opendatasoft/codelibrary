<div class="container">
    <div class="grid-6">
        <div class="cell-full">
            <div class="heading">
                <h2>Title</h2>
                <h3>Subtitle</h3>
                <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                    dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                    nemo officia velit.</p>
            </div>
        </div>
        <div class="cell-3 content-box text">
            <h3>Evenements publics - OpenAgenda</h3>
            <h4>Top 20 des départements par nombre d'évènements recensés</h4>
        </div>
        <div class="cell-3 content-box">
            <ods-dataset-context context="evenementspublicsopenagenda"
                                 evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                 evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                <ods-chart class="no-bg hide-y-gridline hide-y-values medium-x-values" single-y-axis="true" step="10000" scientific-display="true" display-legend="false"
                           labels-x-length="20" align-month="false">
                    <ods-chart-query context="evenementspublicsopenagenda" field-x="department" maxpoints="20"
                                     sort="serie1-1">
                        <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Nombre d'événements"
                                         color="#565656" display-values="true" display-stack-values="false"
                                         scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </ods-dataset-context>
        </div>
        <div class="cell-3 content-box">
            <ods-dataset-context context="evenementspublicsopenagenda"
                                 evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                 evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                <ods-chart class="no-bg hide-y-gridline hide-y-values medium-x-values" single-y-axis="true" step="10000" scientific-display="true" display-legend="false"
                           labels-x-length="20" align-month="false">
                    <ods-chart-query context="evenementspublicsopenagenda" field-x="department" maxpoints="20"
                                     sort="serie1-1">
                        <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Nombre d'événements"
                                         color="#565656" display-values="true" display-stack-values="false"
                                         scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </ods-dataset-context>
        </div>
        <div class="cell-3 content-box text">
            <h3>Evenements publics - OpenAgenda</h3>
            <h4>Top 20 des départements par nombre d'évènements recensés</h4>
        </div>

    </div>
</div>