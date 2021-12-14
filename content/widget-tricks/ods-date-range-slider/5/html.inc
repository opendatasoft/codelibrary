<div class="container">

    <ods-dataset-context context="ctx,ctxdate"
                         ctx-dataset="evenements-publics-openagenda"
                         ctx-parameters="{'sort':'-date_start'}"
                         ctxdate-dataset="evenements-publics-openagenda"
                         ctxdate-parameters="{'q':'date_start:[2007 TO #now(years=+3)]'}"
                         ctx-domain="userclub"
                         ctxdate-domain="userclub">

        <div class="range-slider-ctn"
             ng-init="bounds = {'min':undefined, 'max':undefined, 'minselection':undefined, 'maxselection':undefined}">
            <!--
                Get the date range
                If the day or month is on 1 digit (ie. < 10), it is right justified with a 0 padding.
                dateminmax[0] is the first date (oldest)
                dateminmax[dateminmax.results.length-1] is the last date (newest / biggest)
            -->
            <span ods-analysis="dateminmax"
                  ods-analysis-context="ctxdate"
                  ods-analysis-x-year="date_start.year"
                  ods-analysis-x-month="date_start.month"
                  ods-analysis-serie-c="COUNT()"
                  ods-analysis-sort="x.date_start.year,x.date_start.month">
              <span ng-if="dateminmax.results && dateminmax.results.length > 0">
                {{ bounds['min'] = dateminmax.results[0].x.year + '-' + (10 > dateminmax.results[0].x.month?'0':'') + dateminmax.results[0].x.month;
                bounds['max'] = dateminmax.results[dateminmax.results.length-1].x.year + '-' + (10 > dateminmax.results[dateminmax.results.length-1].x.month?'0':'') + dateminmax.results[dateminmax.results.length-1].x.month;
                ''}}
              </span>
            </span>

            <ods-date-range-slider ng-if="bounds.min && bounds.max"
                                   context="ctx"
                                   initial-from="{{ bounds.min }}"
                                   initial-to="{{ bounds.max }}"
                                   start-bound="bounds.min"
                                   end-bound="bounds.max"
                                   date-field="date_start"
                                   precision="month"
                                   from="bounds.minselection"
                                   to="bounds.maxselection">
            </ods-date-range-slider>

            <!-- Resetting the range by setting widget "from" and "to" to the min/max bounds computed with ods-analysis -->
            <div ng-if="bounds.min && bounds.max"
                 class="range-slider-reset-button"
                 ng-class="{'range-slider-reset-button-disabled':
                   bounds.minselection == bounds.min &&
                   bounds.maxselection == bounds.max}"
                 ng-click="bounds.minselection = bounds.min; bounds.maxselection = bounds.max">
                The entire period <i class="fa fa-arrows-h" aria-hidden="true"></i>
            </div>
        </div>

        <ods-table context="ctx"></ods-table>

    </ods-dataset-context>
</div>