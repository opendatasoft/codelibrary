<ods-dataset-context context="healthref,medecins,ctxregions,ctxdepartements"
                     healthref-domain="public"
                     healthref-dataset="healthref-france-finess"
                     healthref-parameters="{'disjunctive.reg_code':true, 'disjunctive.dep_code':true}"
                     medecins-domain="public"
                     medecins-dataset="medecins"
                     medecins-parameters="{'disjunctive.insee_reg':true, 'disjunctive.insee_dep':true}"
                     ctxregions-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxregions-domain="public"
                     ctxregions-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"
                     ctxdepartements-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxdepartements-domain="public"
                     ctxdepartements-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"

                     ng-init="values = {};
                              selected = {}">

    <!-- Création de la liste des départements et régions pour les filtres -->
    <div ods-adv-analysis="regions"
         ods-adv-analysis-context="ctxregions"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="reg_code,reg_name"
         ods-adv-analysis-order-by="reg_name"
         ods-adv-analysis-limit="300">
        {{ values.regions = regions; ""}}
    </div>
    <div ods-adv-analysis="departements"
         ods-adv-analysis-context="ctxdepartements"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="dep_code,dep_name"
         ods-adv-analysis-order-by="dep_name"
         ods-adv-analysis-limit="300">
        {{ values.departements = departements; "" }}
    </div>

    <!-- Bloc filtres -->
    <section class="header">
        <div class="container">
            <div class="heading">
                <h1 class="title">Offre de santé en France
                </h1>
                <p class="description">
                    Données des établissements du domaine sanitaire et social et de l'annuaire Santé
                </p>
                Filtrer par :
                <div class="ods-selects">

                    <ods-select selected-values="selected.regions" placeholder="Toutes régions"
                                label-modifier="reg_name"
                                value-modifier="{'code':reg_code,'name':reg_name}"
                                options="values.regions"
                                multiple="false"
                                on-change="
                                healthref.parameters['refine.reg_code'] =
                                healthref.parameters['refine.dep_code'] = []">
                    </ods-select>

                    {{
        medecins.parameters['refine.insee_reg'] =
        healthref.parameters['refine.reg_code'] =
        ctxdepartements.parameters['refine.reg_code'] =
        (selected.regions | toObject:'code' | keys);
        ""}}
                    <ods-select selected-values="selected.departements" placeholder="Tous départements"
                                label-modifier="dep_name"
                                value-modifier="{'code':dep_code,'name':dep_name}"
                                options="values.departements"
                                multiple="false"
                                on-change="
                                healthref.parameters['refine.reg_code'] =
                                healthref.parameters['refine.dep_code'] = []">
                    </ods-select>

                    {{
medecins.parameters['refine.insee_dep'] =
healthref.parameters['refine.dep_code'] =
ctxregions.parameters['refine.dep_code'] =
(selected.departements | toObject:'code' | keys);
""}}
                </div>
                <div ng-if="selected.regions.length > 0 ||
                    selected.departements.length > 0 ">
                    <button class="clear-filters-button"
                            ng-click="selected.regions.length = 0;
                       selected.departements.length = 0;">
                        Reset selection
                        <i class="fa fa-times-circle" aria-hidden="true"></i>
                    </button>
                </div>
            </div>
        </div>
    </section>

    <!-- Bloc KPI-->
    <section>
        <div class="container">
            <div class="kpi-container">
                <!-- KPI box component -->
                <div class="viz-card kpi-card"
                     ods-adv-analysis="analysis"
                     ods-adv-analysis-context="healthref"
                     ods-adv-analysis-select="count(*) as count">
                    <i class="kpi-icon fa fa-handshake-o" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].count | number : 0 }}
                    </p>
                    <p class="kpi-description">
                        Établissements du domaine sanitaire et social
                    </p>
                </div>
                <!-- KPI box component -->
                <div class="viz-card kpi-card"
                     ods-adv-analysis="analysis"
                     ods-adv-analysis-context="medecins"
                     ods-adv-analysis-select="count(distinct nom) as count">
                    <i class="kpi-icon fa fa-handshake-o" aria-hidden="true"></i>
                    <p class="kpi-title">
                        {{ analysis[0].count | number : 0 }}
                    </p>
                    <p class="kpi-description">
                        Professionnels de santé
                    </p>
                </div>
            </div>
        </div>
    </section>

    <!-- Bloc visualisations -->
    <section>
        <div class="container">
            <div class="row">
                <div class="col-md-12">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Localisation des établissements et professionnels de santé
                        </h2>
                        <ods-map no-refit="false" scroll-wheel-zoom="false" basemap="jawg.light">
                            <ods-map-layer-group>
                                <ods-map-layer context="medecins" color="#BA0129" picto="ods-circle" show-marker="true"
                                               display="auto" shape-opacity="0.5" point-opacity="1"
                                               border-color="#FFFFFF" border-opacity="1" border-size="1"
                                               border-pattern="solid" caption="true" caption-picto-color="#E5E5E5"
                                               size="4" size-min="3" size-max="5"
                                               size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                            <ods-map-layer-group>
                                <ods-map-layer context="healthref" color="#F98C44" picto="ods-circle" show-marker="true"
                                               display="auto" shape-opacity="0.5" point-opacity="1"
                                               border-color="#FFFFFF" border-opacity="1" border-size="1"
                                               border-pattern="solid" caption="true"
                                               title="Etablissements du domaine sanitaire et social en France"
                                               description="Liste des établissements du domaine sanitaire et social."
                                               size="4" size-min="3" size-max="5"
                                               size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="col-md-7">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Montant général constaté
                        </h2>
                        <ods-chart display-legend="false" scientific-display="false" align-month="true">
                            <ods-chart-query context="medecins" field-x="libelle_profession" maxpoints="10"
                                             sort="serie1-1">
                                <ods-chart-serie expression-y="column_19" chart-type="column" function-y="AVG"
                                                 color="#FF515A" scientific-display="true" label-y="Moyenne en €">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
                <div class="col-md-5">
                    <div class="viz-card content-card">
                        <h2 class="content-card-title">
                            Top 10 des catégories d'établissement
                        </h2>
                        <ods-chart display-legend="false" scientific-display="false" align-month="true">
                            <ods-chart-query context="healthref" field-x="libcategetab" maxpoints="10" sort="serie1-1">
                                <ods-chart-serie expression-y="numvoie" chart-type="column" function-y="COUNT"
                                                 color="#F98C44" scientific-display="true"
                                                 label-y="Nombre d'établissements">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </div>
                </div>
            </div>
        </div>
    </section>
</ods-dataset-context>