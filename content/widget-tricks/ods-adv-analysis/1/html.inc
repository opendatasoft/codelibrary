<div class="container">
    <h2>Simple example to get and display the min and max of a date</h2>
    <ods-dataset-context context="stats"
                 stats-dataset="ods-api-monitoring"
                 stats-source="monitoring">
        <div ods-adv-analysis="dateanalysis"
             ods-adv-analysis-context="stats"
             ods-adv-analysis-select="min(timestamp) as mindate, max(timestamp) as maxdate">
            <h3>ods-adv-analysis result:</h3>
            <div class="row">
                <div class="col-sm-4">
                    <p>Min timestamp: {{ dateanalysis[0].mindate | date : 'medium' }}</p>
                    <p>Max timestamp: {{ dateanalysis[0].maxdate | date : 'medium' }}</p>
                </div>
                <div class="col-sm-8">
                    <pre style="margin:0"><code>{{ dateanalysis }}</code></pre>
                </div>
            </div>
        </div>
    </ods-dataset-context>

    <br/>

    <h2>Useful example with an ods-date-range-slider</h2>
    <ods-dataset-context context="stats,getdate"
                         stats-dataset="ods-api-monitoring"
                         stats-source="monitoring"
                         getdate-dataset="ods-api-monitoring"
                         getdate-source="monitoring">

        <div class="range-slider-ctn"
             ng-init="bounds = {'min':undefined, 'max':undefined, 'minselection':undefined, 'maxselection':undefined}">

            <!--
                Get the date range
            -->
            <div ods-adv-analysis="dateanalysis"
                 ods-adv-analysis-context="getdate"
                 ods-adv-analysis-select="min(timestamp) as mindate, max(timestamp) as maxdate">
                <!-- Process the min and max to get the correct format -->
                {{ bounds.min = (dateanalysis[0].mindate | moment : 'YYYY-MM-DD') ; '' }}
                {{ bounds.max = (dateanalysis[0].maxdate | moment : 'YYYY-MM-DD') ; '' }}
            </div>

            <!-- Init the date slider when min and max are ready -->
            <ods-date-range-slider ng-if="bounds.min && bounds.max"
                                   context="stats"
                                   initial-from="{{ bounds.min }}"
                                   initial-to="{{ bounds.max }}"
                                   start-bound="bounds.min"
                                   end-bound="bounds.max"
                                   date-field="timestamp"
                                   precision="day"
                                   from="bounds.minselection"
                                   to="bounds.maxselection">
            </ods-date-range-slider>

            <!-- Resetting the range by setting widget "from" and "to" to the min/max bounds computed with ods-adv-analysis -->
            <div ng-if="bounds.min && bounds.max"
                 class="range-slider-reset-button"
                 ng-class="{'range-slider-reset-button-disabled':
                             bounds.minselection == bounds.min && bounds.maxselection == bounds.max}"
                 ng-click="bounds.minselection = bounds.min;
                           bounds.maxselection = bounds.max">
                The entire period <i class="fa fa-arrows-h" aria-hidden="true"></i>
            </div>
        </div>

        <ods-table context="stats"></ods-table>

    </ods-dataset-context>
</div>