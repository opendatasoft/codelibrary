<ods-dataset-context context="shanghairanking"
                     shanghairanking-domain="public"
                     shanghairanking-dataset="shanghai-world-university-ranking"
                     shanghairanking-parameters="{'sort':'world_rank','timezone':'Europe/Berlin'}">
    <section class="sticky-summary-wrapper">
        <div class="sticky-summary">
            <div class="sticky-summary-data">
                <h3>Top 10</h3>
                <div>
                    Dataset name: <strong>{{ shanghairanking.name | capitalize }} </strong>
                </div>
                <div>
                    Number of records: <strong>{{ shanghairanking.dataset.metas.records_count | number }}</strong>
                </div>
            </div>
            <a href="https://data.opendatasoft.com/explore/dataset/shanghai-world-university-ranking%40public/information/?sort=world_rank" class="sticky-summary-button">
                View
            </a>
        </div>
    </section>
    <ods-chart single-y-axis="true"
               display-legend="false"
               align-month="true">
        <ods-chart-query context="shanghairanking"
                         field-x="country"
                         maxpoints="10"
                         sort="serie1-1">
            <ods-chart-serie expression-y="world_rank_int"
                             chart-type="column"
                             function-y="COUNT"
                             color="#142E7B"
                             scientific-display="true">
            </ods-chart-serie>
        </ods-chart-query>
    </ods-chart>
</ods-dataset-context>
