<div class="row">
    <div class="col-sm-offset-4 col-sm-4">
        <ods-dataset-context context="stattests"
                             stattests-domain="userclub"
                             stattests-dataset="donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                <p class="kpi-title"
                   ods-adv-analysis="analysis"
                   ods-adv-analysis-context="stattests"
                   ods-adv-analysis-select="sum(nb_pos)/sum(nb_tests)*100 as percentage"
                   ods-adv-analysis-where="reg_name LIKE 'Auvergne-Rhône-Alpes'">
                    {{ analysis[0].percentage | number : 2 }}%
                </p>
                <p class="kpi-description">
                    Number of positive tests in Auvergne-Rhône-Alples
                </p>
            </div>
        </ods-dataset-context>
    </div>
</div>
<ods-dataset-context context="observationsynop"
                     observationsynop-dataset="observation-synop"
                     observationsynop-domain="userclub">
    <div class="row"
         ods-adv-analysis="analysis"
         ods-adv-analysis-context="observationsynop"
         ods-adv-analysis-select="avg(u) as humidity, max(ff) as wind">
        <div class="col-sm-offset-2 col-sm-4">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-tint" aria-hidden="true"></i>
                <p class="kpi-title">
                    {{ analysis[0].humidity | number : 1}}
                </p>
                <p class="kpi-description">
                    Average humidity (%)
                </p>
            </div>
        </div>
        <div class="col-sm-4">
            <!-- KPI box component -->
            <div class="kpi-card">
                <i class="kpi-icon fa fa-flag" aria-hidden="true"></i>
                <p class="kpi-title">
                    {{ analysis[0].wind | number : 1}}
                </p>
                <p class="kpi-description">
                    Max wind speed (m/s)
                </p>
            </div>
        </div>
    </div>
</ods-dataset-context>