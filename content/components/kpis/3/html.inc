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
