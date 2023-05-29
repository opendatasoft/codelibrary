<ods-dataset-context context="popsexeactivite,popcspactivite"
                     popsexeactivite-domain="public"
                     popsexeactivite-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     popsexeactivite-parameters="{'disjunctive.reg_name':true, 'disjunctive.dep_name':true}"
                     popcspactivite-domain="public"
                     popcspactivite-dataset="demographyref-france-pop-active-csp-activite-commune-millesime"
                     popcspactivite-parameters="{'disjunctive.reg_name':true, 'disjunctive.dep_name':true}">
    <section class="header">
        <div class="container">
            <div class="heading">
                <h1 class="title">Observation météorologique historiques en France (SYNOP)
                </h1>
                <p class="description">
                    Focus sur les températures observées depuis 2010.
                </p>
                Filtrer par :
                <div class="shared-width-ods-selects">
                    <div ods-facet-results="reglist"
                         ods-facet-results-facet-name="reg_name"
                         ods-facet-results-context="popsexeactivite"
                         ods-facet-results-sort="alphanum">
                        <ods-select options="reglist"
                                    selected-values="popsexeactivite.parameters['refine.reg_name']"
                                    label-modifier="name"
                                    value-modifier="name"
                                    placeholder="Sélectionnez une région"></ods-select>
                        {{popcspactivite.parameters['refine.reg_name'] = popsexeactivite.parameters['refine.reg_name'] ; ""}}
                    </div>
                    <div ods-facet-results="deplist"
                         ods-facet-results-facet-name="dep_name"
                         ods-facet-results-context="popsexeactivite"
                         ods-facet-results-sort="alphanum">
                        <ods-select options="deplist"
                                    selected-values="popsexeactivite.parameters['refine.dep_name']"
                                    label-modifier="name"
                                    value-modifier="name"
                                    placeholder="Sélectionnez un département"></ods-select>
                        {{popcspactivite.parameters['refine.dep_name'] = popsexeactivite.parameters['refine.dep_name'] ; ""}}
                    </div>
                </div>
            </div>
        </div>
    </section>
    <section>
        <div class="container">
            <div class="kpi-container"
                 ods-adv-analysis="analysis"
                 ods-adv-analysis-context="popsexeactivite"
                 ods-adv-analysis-select="sum(value) as sum"
                 ods-adv-analysis-group-by="variable_label as sexe">
                 {{analysisfiltered = (analysis | toObject : 'sexe') ; ""}} 
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysisfiltered['Femmes Actifs ayant un emploi'].sum | number : 0 }}
                    </p>
                    <p class="kpi-description">
                        Femmes actives ayant un emploi
                    </p>
                </div>
                <!-- KPI box component -->
                <div class="viz-card kpi-card">
                    <i class="kpi-icon fa fa-flag" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysisfiltered['Hommes Actifs ayant un emploi'].sum | number : 0 }}
                    </p>
                    <p class="kpi-description">
                        Hommes actifs ayant un emploi
                    </p>
                </div>
            </div>
        </div>
    </section>
    <section>
        <div class="container">
            <div class="row">
                <div class="col-md-5">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                           Évolution de la structure de la population par sexe et activité
                        </h2>

                            <ods-chart scientific-display="false" align-month="true">
                                <ods-chart-query context="popsexeactivite" field-x="year" maxpoints="0" stacked="normal" series-breakdown="variable_label" category-colors="{'Femmes Actifs ayant un emploi':'#00737C','Femmes Chômeurs':'#19630A','Hommes Actifs ayant un emploi':'#F7B133','Hommes Chômeurs':'#F7AB83'}">
                                    <ods-chart-serie expression-y="value" chart-type="column" function-y="SUM" color="range-Accent" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        
                        
                        

                    </div>
                </div>
                <div class="col-md-7">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Top des activités
                        </h2>
                            <ods-chart single-y-axis="true" scientific-display="false" labels-x-length="22" align-month="true">
                                <ods-chart-query context="popcspactivite" field-x="variable_label" maxpoints="0" sort="serie1-1">
                                    <ods-chart-serie expression-y="value" chart-type="bar" function-y="SUM" label-y="Nombre de personnes" color="#FF515A" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Évolution des précipitations
                        </h2>
                        <ods-chart timescale="year" single-y-axis="true" scientific-display="false" labels-x-length="20"
                                   align-month="true">
                            <ods-chart-query context="synop" field-x="date" maxpoints="10" timescale="day"
                                             sort="serie1-1">
                                <ods-chart-serie expression-y="rr24" chart-type="areaspline" function-y="AVG"
                                                 color="#1B6698" scientific-display="true"
                                                 label-y="Précipitations moyennes dans les dernières 24h">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
                <div class="col-md-6">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Évolution des températures moyennes (°C)
                        </h2>
                        <ods-chart scientific-display="false" align-month="true">
                            <ods-chart-query context="synop" field-x="date" maxpoints="0" timescale="day">
                                <ods-chart-serie expression-y="tc" chart-type="column" function-y="AVG" color="#FF515A"
                                                 scientific-display="true" label-y="Température moyenne (°C)">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
            </div>
        </div>
    </section>
</ods-dataset-context>