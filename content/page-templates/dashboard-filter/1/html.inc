<ods-dataset-context context="stattests,observationsynop"
                     stattests-domain="userclub"
                     stattests-dataset="donnees-relatives-aux-resultats-des-tests-virologiques-covid-19-france"
                     observationsynop-dataset="observation-synop"
                     observationsynop-domain="userclub">
    <section class="header">
        <div class="container">
            <div class="heading">
                <h1 class="title">Titre du dashboard</h1>
                <p class="description">
                    Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque
                    commodi cupiditate, deserunt dolores dolorum ducimus ea fugiat non
                    quidem repellat soluta voluptate voluptatem. Illo illum maxime nemo
                    officia velit.
                </p>
                Filtrer par :
                <div class="shared-width-ods-selects">
                    <ods-select
                                selected-values="choice"
                                options="['objects','things','stuff']"
                                placeholder="pick what you want"></ods-select>
                    <ods-select
                                selected-values="place"
                                options="['car','home']"
                                placeholder="pick a place"></ods-select>
                    <ods-select
                                selected-values="long"
                                options="['2018','2019','2020','2021', 'let see how it behaves with small screens.']"
                                placeholder="very long content here, even too long for mobile display"></ods-select>
                </div>
            </div>
        </div>
    </section>
    <section>
        <div class="container">
            <div class="kpi-container"
                 ods-adv-analysis="analysis"
                 ods-adv-analysis-context="observationsynop"
                 ods-adv-analysis-select="avg(u) as humidity, max(ff) as wind">
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
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
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-tint" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].humidity | number : 1}}
                    </p>
                    <p class="kpi-description">
                        Average humidity (%)
                    </p>
                </div>
                <div class="viz-card kpi-card">
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
    </section>
    <section>
        <div class="container">
            <div class="row">
                <div class="col-md-7">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Title Map #1
                        </h2>
                        <ods-dataset-context context="ctx"
                                             ctx-domain="userclub"
                                             ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                                             ctx-parameters="{'refine.reg_name':'Pays de la Loire'}">
                            <ods-map context="ctx" scroll-wheel-zoom="false" basemap="jawg.streets"></ods-map>

                        </ods-dataset-context>
                    </div>
                </div>
                <div class="col-md-5">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Title Chart #1
                        </h2>
                        <ods-dataset-context context="ctx"
                                             ctx-domain="userclub"
                                             ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                                             ctx-parameters="{'timezone':'Europe/Berlin'}">
                            <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="20"
                                       align-month="true">
                                <ods-chart-query context="ctx" field-x="reg_name" maxpoints="0" sort="serie1-1">
                                    <ods-chart-serie expression-y="spot_size" chart-type="bar" function-y="SUM"
                                                     color="#EC643C" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </ods-dataset-context>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Title Chart #1
                        </h2>
                        <ods-dataset-context context="ctx"
                                             ctx-domain="userclub"
                                             ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                                             ctx-parameters="{'timezone':'Europe/Berlin'}">
                            <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="20"
                                       align-month="true">
                                <ods-chart-query context="ctx" field-x="reg_name" maxpoints="0" sort="serie1-1">
                                    <ods-chart-serie expression-y="spot_size" chart-type="bar" function-y="SUM"
                                                     color="#EC643C" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </ods-dataset-context>
                    </div>
                </div>
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Title Chart #1
                        </h2>
                        <ods-dataset-context context="ctx"
                                             ctx-domain="userclub"
                                             ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
                                             ctx-parameters="{'timezone':'Europe/Berlin'}">
                            <ods-chart single-y-axis="true" scientific-display="true" labels-x-length="20"
                                       align-month="true">
                                <ods-chart-query context="ctx" field-x="reg_name" maxpoints="0" sort="serie1-1">
                                    <ods-chart-serie expression-y="spot_size" chart-type="bar" function-y="SUM"
                                                     color="#EC643C" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </ods-dataset-context>
                    </div>
                </div>
            </div>
        </div>
    </section>
</ods-dataset-context>