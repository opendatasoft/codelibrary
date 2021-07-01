<ods-dataset-context context="ds"
                     ds-dataset="evenements-publics-openagenda"
                     ds-domain="userclub"
                     ds-parameters="{'sort':'date_start'}">
    <div ods-datetime="now">
        <ods-timerange display-time="false"
                       date-format="MM/DD/YYYY"
                       context="ds"
                       default-from="{{ now | momentadd : 'days' : -2 }}"
                       default-to="{{ now }}"
                       to="dates.to"
                       from="dates.from"></ods-timerange>
        {{ ds.parameters['q'] = 'date_start:[1900-01-01 TO ' + (dates.to?dates.to:'2099-01-01') + '] AND date_end >= ' + (dates.from?dates.from:'1900-01-01') ; "" }}
        <br/>
        <ods-table context="ds"></ods-table>
    </div>
</ods-dataset-context>
