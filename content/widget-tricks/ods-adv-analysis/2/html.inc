<ods-dataset-context context="ctx"
                     ctx-dataset="ods-api-monitoring"
                     ctx-source="monitoring">
    <div ods-adv-analysis="analysis"
         ods-adv-analysis-context="ctx"
         ods-adv-analysis-select="sum(nhits) as total"
         ods-adv-analysis-where="timestamp > now(days=-7)"
         ods-adv-analysis-group-by="date_format(timestamp, 'YYYY-MM-dd') as date">

        <h3>How many hits per day on Userclub domain, this past week ?</h3>
        <ul>
            <li ng-repeat="item in analysis">
                <strong>{{ item.total | number }} hits</strong> on {{ item.date | date }}
            </li>
        </ul>

        <h3>Average number of hits on Userclub domain, this past week</h3>
        <div ods-subaggregation="analysis"
             ods-subaggregation-serie-dayavg="MEAN(total)">
            An average of <strong>{{ results[0].dayavg | number:0 }} hits</strong> per day
        </div>
    </div>
</ods-dataset-context>
