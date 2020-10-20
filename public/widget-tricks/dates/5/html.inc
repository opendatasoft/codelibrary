<ods-dataset-context context="ds,timerange"
                     ds-dataset="evenements-publics-openagenda"
                     ds-domain="userclub"
                     timerange-dataset="evenements-publics-openagenda"
                     timerange-domain="userclub"
                     ds-parameters="{'sort':'date_start'}"
                     ng-init="dates = {'to': '', 'from': ''};
                                              dayrange = 7">
    <p style="text-align: center">
        <strong>Current selection:</strong> events starting from the <strong>{{ dates.from | date }}</strong> to the
        <strong>{{ (dates.from | momentadd : 'days' : dayrange) | date }}</strong> (<strong>+{{ dayrange }}
        day{{dayrange>1?'s':''}}</strong>)
    </p>
    <div class="controlers">
        <div class="controler control-date">
            <h2>
                Starting date
            </h2>
            <div ods-datetime="now">
                <ods-timerange display-time="false"
                               date-format="MM/DD/YYYY"
                               context="timerange"
                               default-from="{{ now }}"
                               default-to="{{ now }}"
                               to="dates.to"
                               from="dates.from">
                </ods-timerange>
            </div>
        </div>
        <div class="controler control-range">
            <h2>
                Day range
            </h2>
            <div class="input-range-with-button">
                <input type="range" min="0" max="14" step="1"
                       ng-model="dayrange"
                       ng-model-options="{ debounce: { 'default': 300 }}"/>
            </div>
        </div>
    </div>
    <pre>{{ ds.parameters['q'] = 'date_start:[' + dates.from + ' TO ' + (dates.from | momentadd : 'days' : 1*dayrange + 1) + ']' ;  }}</pre>
    <br/>
    <ods-chart>
        <ods-chart-query context="ds" field-x="date_start" maxpoints="0" timescale="day">
            <ods-chart-serie chart-type="column" function-y="COUNT" label-y="Number of events" color="#2C3F56"
                             scientific-display="true">
            </ods-chart-serie>
        </ods-chart-query>
    </ods-chart>
</ods-dataset-context>
