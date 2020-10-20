<ods-dataset-context context="ds"
                     ds-dataset="evenements-publics-openagenda"
                     ds-domain="userclub"
                     ds-parameters="{'sort':'date_start'}"
                     ng-init="dates = {'to': '', 'from': ''}">
    <div ods-datetime="now">
        <ods-timerange display-time="false"
                       date-format="MM/DD/YYYY"
                       context="ds"
                       default-from="{{ now | momentadd : 'months' : -1 }}"
                       default-to="{{ now }}"
                       to="dates.to"
                       from="dates.from">
        </ods-timerange>
        {{ nbdays = (dates.to | momentdiff : dates.from : 'days') ; "" }}
        <h4>Current selection : {{ nbdays }} day{{nbdays>1?'s':''}} range</h4>
        <p>This value can then help to have different behavior/displays in your dashboard depending on the date range.
            <br/>The typical usecase is to display a chart with hour precision in case of a small range of a few days, and switch to a day chart precision in case of a several week range selection. The dashboard can then adapt the chart precision to make it more readable.
        </p>
        <h4 ng-if="nbdays <= 90">Less or equals than 3 months range</h4>
        <h4 ng-if="nbdays >90">More than 3 months range</h4>
        <br/>
        <h3>Other date comparators can detect if a date if before or after another one</h3>
        <h4 ng-if="dates.from | isAfter : now">'From' selection is in the futur</h4>
        <h4 ng-if="dates.from | isBefore : (now | momentadd : 'days' : -1)">'From' selection is in the past</h4>
        <h4 ng-if="!(dates.from | isBefore : (now | momentadd : 'days' : -1)) && !(dates.from | isAfter : now)">'From' selection is today !</h4>
        <h4 ng-if="dates.to | isAfter : (now | momentadd : 'days' : 1)">'To' selection is in the futur</h4>
        <h4 ng-if="dates.to | isBefore : now">'To' selection is in the past</h4>
        <h4 ng-if="!(dates.to | isAfter : (now | momentadd : 'days' : 1)) && !(dates.to | isBefore : now)">'To' selection is today !</h4>
    </div>
</ods-dataset-context>
