<section>
    <ods-dataset-context context="stats"
                         stats-dataset="resume-statistique-communes-departements-et-regions-france-2012-2013-2014"
                         stats-domain="public">
        <div class="container"
             ng-init="stats['source'] = 'https://' + stats.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + stats.dataset.datasetid">
            <div class="header">
                <h1>
                    Observatoire statistiques de la population Française
                </h1>
                <p>
                    Ensemble de données synthétiques pour les thèmes suivants : population, logement, revenus,
                    emploi-chômage et établissements.
                </p>
            </div>
            <div class="row">
                <div class="col-md-4">
                    <div class="row full-height">
                        <div class="col-md-12">
                            <div class="box white flat">
                                <div class="advanced-kpi">
                                    <div class="advanced-kpi--top">
                                        <h3 class="title">
                                            Population
                                        </h3>
                                        <p class="description">
                                            en 2012
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--middle centered">
                                        <p class="value"
                                           ods-aggregation="agg"
                                           ods-aggregation-context="stats"
                                           ods-aggregation-function="SUM"
                                           ods-aggregation-expression="population_en_2012">
                                            {{ agg | number }}
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--bottom">
                                        <div class="advanced-kpi--bottom-second-stage">
                                            <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                            <a class="source"
                                               href="{{ stats.source }}"
                                               title="{{ stats.dataset.metas.title }}">Source <i
                                                    class="fa fa-long-arrow-right"
                                                    aria-hidden="true"></i>
                                            </a>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="col-md-12 no-mb">
                            <div class="box white flat">
                                <div class="advanced-kpi">
                                    <div class="advanced-kpi--top">
                                        <h3 class="title">
                                            Nombre de ménages
                                        </h3>
                                        <p class="description">
                                            en 2012
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--middle centered">
                                        <p class="value"
                                           ods-aggregation="agg"
                                           ods-aggregation-context="stats"
                                           ods-aggregation-function="SUM"
                                           ods-aggregation-expression="menages_en_2012">
                                            {{ agg | number : 0 }}
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--bottom">
                                        <div class="advanced-kpi--bottom-second-stage">
                                            <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                            <a class="source"
                                               href="{{ stats.source }}"
                                               title="{{ stats.dataset.metas.title }}">Source <i
                                                    class="fa fa-long-arrow-right"
                                                    aria-hidden="true"></i>
                                            </a>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-8">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Evolution de la population
                                </h3>
                                <p class="description">
                                    France 2007 et 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle no-bg mb-0">
                                <ods-chart style="height:300px" single-y-axis="true">
                                    <ods-chart-query context="stats" field-x="region" maxpoints="50" sort="serie1-1">
                                        <ods-chart-serie expression-y="population_en_2012" chart-type="column"
                                                         function-y="AVG"
                                                         color="#2C3F56" scientific-display="true">
                                        </ods-chart-serie>
                                        <ods-chart-serie expression-y="population_en_2007" chart-type="column"
                                                         function-y="AVG"
                                                         color="#EC643C" scientific-display="true">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-8">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Naissance par métropole
                                </h3>
                                <p class="description">
                                    De 2007 à 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle no-bg mb-0">
                                <ods-chart style="height:300px" single-y-axis="true">
                                    <ods-chart-query context="stats" field-x="metropole" maxpoints="50">
                                        <ods-chart-serie expression-y="naissances_entre_2007_et_2012"
                                                         chart-type="treemap"
                                                         function-y="AVG" scientific-display="true">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="row full-height">
                        <div class="col-md-12">
                            <div class="box white flat">
                                <div class="advanced-kpi">
                                    <div class="advanced-kpi--top">
                                        <h3 class="title">
                                            Actifs
                                        </h3>
                                        <p class="description">
                                            15 - 64 ans en 2012
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--middle centered">
                                        <p class="value"
                                           ods-aggregation="agg"
                                           ods-aggregation-context="stats"
                                           ods-aggregation-function="SUM"
                                           ods-aggregation-expression="actifs_15_64_ans_en_2012">
                                            {{ agg | number : 0 }}
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--bottom">
                                        <div class="advanced-kpi--bottom-second-stage">
                                            <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                            <a class="source"
                                               href="{{ stats.source }}"
                                               title="{{ stats.dataset.metas.title }}">Source <i
                                                    class="fa fa-long-arrow-right"
                                                    aria-hidden="true"></i>
                                            </a>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="col-md-12 no-mb">
                            <div class="box white flat">
                                <div class="advanced-kpi">
                                    <div class="advanced-kpi--top">
                                        <h3 class="title">
                                            Chomeurs
                                        </h3>
                                        <p class="description">
                                            15 - 64 ans en 2012
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--middle centered">
                                        <p class="value"
                                           ods-aggregation="agg"
                                           ods-aggregation-context="stats"
                                           ods-aggregation-function="SUM"
                                           ods-aggregation-expression="chomeurs_15_64_ans_en_2012">
                                            {{ agg | number : 0 }}
                                        </p>
                                    </div>
                                    <div class="advanced-kpi--bottom">
                                        <div class="advanced-kpi--bottom-second-stage">
                                            <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                            <a class="source"
                                               href="{{ stats.source }}"
                                               title="{{ stats.dataset.metas.title }}">Source <i
                                                    class="fa fa-long-arrow-right"
                                                    aria-hidden="true"></i>
                                            </a>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <h2 class="mb-2">
                Logements
            </h2>
            <div class="row">
                <div class="col-md-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Nombre de logements
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="SUM"
                                   ods-aggregation-expression="logements_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Résidences principales
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="SUM"
                                   ods-aggregation-expression="residences_principales_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Résidences secondaires et logts occasionnels
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="SUM"
                                   ods-aggregation-expression="res_secondaires_et_logts_occasionnels_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <h2 class="mb-2">
                Ménages fiscaux
            </h2>
            <div class="row">
                <div class="col-sm-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Nombre de ménages fiscaux
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="SUM"
                                   ods-aggregation-expression="nombre_de_menages_fiscaux_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-sm-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Part des ménages fiscaux imposés
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="SUM"
                                   ods-aggregation-expression="part_des_menages_fiscaux_imposes_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-sm-4">
                    <div class="box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Mediane du revenu disponible par US
                                </h3>
                                <p class="description">
                                    en 2012
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value"
                                   ods-aggregation="agg"
                                   ods-aggregation-context="stats"
                                   ods-aggregation-function="AVG"
                                   ods-aggregation-expression="mediane_du_revenu_disponible_par_uc_en_2012">
                                    {{ agg | number : 0 }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ stats.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ stats.source }}"
                                       title="{{ stats.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                         aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</section>