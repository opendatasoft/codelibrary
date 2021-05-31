<ods-dataset-context context="stats"
                     stats-dataset="resume-statistique-communes-departements-et-regions-france-2012-2013-2014"
                     stats-domain="public">
    <div class="container">
        <h1>
            Dashboard title
        </h1>
        <div class="grid-3 gap-8">
            <div class="cell-1">
                <h3 class="title">
                    Population
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="population_en_2012">
                    {{ agg | number }}
                </p>
            </div>
            <div class="cell-2 cell-row-2">
                <h3 class="title">
                    Evolution de la population
                </h3>
                <p class="description">
                    France 2007 et 2012
                </p>
                <ods-chart style="height:300px" single-y-axis="true">
                    <ods-chart-query context="stats" field-x="region" maxpoints="50" sort="serie1-1">
                        <ods-chart-serie expression-y="population_en_2012" chart-type="column" function-y="AVG"
                                         color="#2C3F56" scientific-display="true">
                        </ods-chart-serie>
                        <ods-chart-serie expression-y="population_en_2007" chart-type="column" function-y="AVG"
                                         color="#EC643C" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Nombre de ménages
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="menages_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-2 cell-row-2">
                <h3 class="title">
                    Naissance par métropole
                </h3>
                <p class="description">
                    De 2007 à 2012
                </p>
                <ods-chart style="height:300px" single-y-axis="true">
                    <ods-chart-query context="stats" field-x="metropole" maxpoints="50">
                        <ods-chart-serie expression-y="naissances_entre_2007_et_2012" chart-type="treemap"
                                         function-y="AVG" scientific-display="true">
                        </ods-chart-serie>
                    </ods-chart-query>
                </ods-chart>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Actifs
                </h3>
                <p class="description">
                    15 - 64 ans en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="actifs_15_64_ans_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Chomeurs
                </h3>
                <p class="description">
                    15 - 64 ans en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="chomeurs_15_64_ans_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
        </div>

        <h2>
            Logements
        </h2>
        <div class="grid-3">
            <div class="cell-1">
                <h3 class="title">
                    Nombre de logements
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="logements_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Résidences principales
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="residences_principales_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Résidences secondaires et logts occasionnels
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="res_secondaires_et_logts_occasionnels_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
        </div>

        <h2>
            Ménages fiscaux
        </h2>
        <div class="grid-3">
            <div class="cell-1">
                <h3 class="title">
                    Nombre de ménages fiscaux
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="nombre_de_menages_fiscaux_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Part des ménages fiscaux imposés
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="SUM"
                   ods-aggregation-expression="part_des_menages_fiscaux_imposes_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
            <div class="cell-1">
                <h3 class="title">
                    Mediane du revenu disponible par US
                </h3>
                <p class="description">
                    en 2012
                </p>
                <p class="kpi"
                   ods-aggregation="agg"
                   ods-aggregation-context="stats"
                   ods-aggregation-function="AVG"
                   ods-aggregation-expression="mediane_du_revenu_disponible_par_uc_en_2012">
                    {{ agg | number : 0 }}
                </p>
            </div>
        </div>
    </div>
</ods-dataset-context>
