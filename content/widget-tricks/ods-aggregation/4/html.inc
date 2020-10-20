<div class="row">
    <div class="col-sm-offset-4 col-sm-4">
        <ods-dataset-context context="cities2015,cities2016"
                             cities2015-dataset="communes-et-arrondissements-municipaux-millesime-france"
                             cities2015-parameters="{'refine.year':'2015'}"
                             cities2015-domain="userclub"
                             cities2016-dataset="communes-et-arrondissements-municipaux-millesime-france"
                             cities2016-parameters="{'refine.year':'2016'}"
                             cities2016-domain="userclub">
            <!-- KPI box component -->
            <div class="kpi-card"
                 ods-aggregation="agg2015,agg2016"
                 ods-aggregation-agg2015-context="cities2015"
                 ods-aggregation-agg2015-function="COUNT"
                 ods-aggregation-agg2016-context="cities2016"
                 ods-aggregation-agg2016-function="COUNT">
                <i class="kpi-icon fa fa-line-chart" aria-hidden="true"></i>
                <h2 class="kpi-title">
                    {{ (agg2016 - agg2015) / agg2015 * 100 | number : 2 }} %
                </h2>
                <p class="kpi-description">
                    Administrative division evolution in term of # of cities between 2015 and 2016
                </p>
                <p class="kpi-description-detail">
                    <b>{{ agg2015 | number }}</b> in 2015, <b>{{ agg2016 | number }}</b> in 2016
                </p>
            </div>
        </ods-dataset-context>
    </div>
</div>
      