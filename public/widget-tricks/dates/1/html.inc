<ods-dataset-context context="ds"
                     ds-dataset="evenements-publics-openagenda"
                     ds-domain="userclub"
                     ds-parameters="{'sort':'date_start'}">
    <div ods-datetime="now">
        <ods-timerange display-time="false" date-format="MM/DD/YYYY" context="ds" default-from="{{ now | momentadd : 'months' : -3 }}" default-to="{{ now }}"></ods-timerange>
    </div>
    <br/>
    <ods-table context="ds"></ods-table>
</ods-dataset-context>
