<section class="observatory" ng-init="values.modalswitchstatus = false">
    <div class="backdrop"
         ng-click="values.modalswitchstatus = !values.modalswitchstatus"
         ng-class="{'backdrop-active':values.modalswitchstatus}">
    </div>

    <ods-dataset-context context="ctx1,ctx2,ctx3"
                         ctx1-dataset="buildingref-france-bpe-all-geolocated"
                         ctx1-parameters="{'disjunctive.epci_name':true}"
                         ctx1-domain="public"
                         ctx2-dataset="buildingref-france-bpe-all-geolocated"
                         ctx2-parameters="{'disjunctive.epci_name':true,'refine.category':'Services aux particuliers'}"
                         ctx2-domain="public"
                         ctx3-dataset="buildingref-france-bpe-all-geolocated"
                         ctx3-parameters="{'disjunctive.epci_name':true,'refine.category':'Santé'}"
                         ctx3-domain="public">

        {{
        ctx2.parameters['refine.reg_name'] = ctx1.parameters['refine.reg_name'] ;
        ctx3.parameters['refine.reg_name'] = ctx1.parameters['refine.reg_name'] ;
        ctx2.parameters['refine.dep_name'] = ctx1.parameters['refine.dep_name'] ;
        ctx3.parameters['refine.dep_name'] = ctx1.parameters['refine.dep_name'] ;
        ctx2.parameters['refine.com_arm_area_code'] = ctx1.parameters['refine.com_arm_area_code'] ;
        ctx3.parameters['refine.com_arm_area_code'] = ctx1.parameters['refine.com_arm_area_code'] ;
        ctx2.parameters['refine.epci_name'] = ctx1.parameters['refine.epci_name'] ;
        ctx3.parameters['refine.epci_name'] = ctx1.parameters['refine.epci_name'] ;
        ""
        }}

        <!-- Analyses -->
        <span ods-aggregation="agg"
              ods-aggregation-context="ctx1"
              ods-aggregation-function="COUNT">
          {{ values.nbequip = agg ; '' }}
        </span>
        <span ods-aggregation="services"
              ods-aggregation-context="ctx2"
              ods-aggregation-function="COUNT">
          {{ values.services = services ; '' }}
        </span>
        <span ods-aggregation="sante"
              ods-aggregation-context="ctx3"
              ods-aggregation-function="COUNT">
          {{ values.sante = sante ; '' }}
        </span>


        <!-- THE RIGHT MODAL -->
        <div class="rightmodal">
            <div class="cl-modal"
                 ng-class="{'cl-modal-active':values.modalswitchstatus}">
                <div class="cl-modal__header"
                     ng-click="values.modalswitchstatus = !values.modalswitchstatus">
                    <a href="#"
                       class="closebtn">
                        Fermer <i class="fa fa-times-circle" aria-hidden="true"></i>
                    </a>
                </div>
                <div class="cl-modal__content">
                    <ods-facets context="ctx1">
                        <h3>
                            Région
                        </h3>
                        <ods-facet name="reg_name"></ods-facet>
                        <h3>
                            Département
                        </h3>
                        <ods-facet name="dep_name"></ods-facet>
                        <h3>
                            Code DROM
                        </h3>
                        <ods-facet name="com_arm_area_code"></ods-facet>
                        <h3>
                            EPCI
                        </h3>
                        <ods-facet name="epci_name"></ods-facet>
                    </ods-facets>
                </div>
            </div>
        </div>

        <section class="head">
            <div class="container">
                <h1 class="titre">
                    Un modèle d'observation des équipements en France
                </h1>
                <div class="edito">
                    <p>Bien que .. <q>Il n'y a pas de modèle pour qui cherche ce qu'il n'a jamais vu.</q> Paul Éluard
                    </p>
                </div>
                <div id="resume">
                    <p>
                        L'objectif de la Base Permanente des Équipements (BPE) est de proposer annuellement une base
                        d'équipements géolocalisés construite à partir de sources administratives diverses.
                    </p>
                    <p>
                        La classification des équipements en gammes a pour objectif de réunir des équipements qui
                        présentent
                        des logiques d'implantation voisines, en ce sens qu'ils sont fréquemment présents dans les mêmes
                        communes. Ces regroupements permettent d'élaborer des indicateurs synthétiques reflétant
                        l'organisation hiérarchisée des territoires en termes de services à la population.
                    </p>
                </div>
            </div>
        </section>
        <section class="filter-block">
            <div class="container">
                <button ng-click="values.modalswitchstatus = !values.modalswitchstatus">
                    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none"
                         stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
                         class="feather feather-filter">
                        <polygon points="22 3 2 3 10 12.46 10 19 14 21 14 12.46 22 3"></polygon>
                    </svg>
                    Filtrer les données
                </button>
                <ods-filter-summary context="ctx1">
                    {{ refinements }}
                </ods-filter-summary>
            </div>
        </section>

        <section>
            <div class="container">
                <div class="grid md:grid-4 gap-6">
                    <div class="md:cell-2 box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Nombre d'équipements en 2019
                                </h3>
                                <p class="description">
                                    Données INSEE issu de la BPE (Base permanente des équipements)
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value">
                                    {{ values.nbequip | number }}
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="md:cell-2 box white flat"
                         ng-if="!ctx1.parameters['refine.reg_name']">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Top 5 Région
                                </h3>
                                <p class="description">
                                    Nombre d'équipements des 5 régions les mieux équipées
                                </p>
                            </div>
                            <div class="advanced-kpi--middle">
                                <ods-chart style="height: 170px" class="small-chart" single-y-axis="true"
                                           scientific-display="true"
                                           display-legend="false"
                                           labels-x-length="20" align-month="false">
                                    <ods-chart-query context="ctx1" field-x="reg_name" maxpoints="5"
                                                     sort="serie1-1">
                                        <ods-chart-serie chart-type="bar" function-y="COUNT" color="#000000"
                                                         scientific-display="true">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i
                                            class="fa fa-long-arrow-right"
                                            aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="md:cell-2 box white flat"
                         ng-if="ctx1.parameters['refine.reg_name']">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Top 5 Département
                                </h3>
                                <p class="description">
                                    Nombre d'équipements des 5 départements les mieux équipées
                                </p>
                            </div>
                            <div class="advanced-kpi--middle">
                                <ods-chart style="height: 170px" class="small-chart" single-y-axis="true"
                                           scientific-display="true"
                                           display-legend="false"
                                           labels-x-length="20" align-month="false">
                                    <ods-chart-query context="ctx1" field-x="dep_name" maxpoints="5"
                                                     sort="serie1-1">
                                        <ods-chart-serie chart-type="bar" function-y="COUNT" color="#000000"
                                                         scientific-display="true">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i
                                            class="fa fa-long-arrow-right"
                                            aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="md:cell-full box white flat">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Répartis en grandes catégories
                                </h3>
                                <p class="description">
                                    La Base Permanente des Équipements est réparti en 7 grands domaines : services aux
                                    particuliers ; commerces ; enseignement ; santé ; transports et déplacements ;
                                    sports, loisirs et culture ; tourisme.
                                </p>
                            </div>
                            <div class="advanced-kpi--middle">
                                <ods-chart class="medium-chart" labels-x-length="30" align-month="true">
                                    <ods-chart-query context="ctx1" field-x="category" maxpoints="0" sort="serie1-1"
                                                     category-colors="{'Services aux particuliers':'#ff714d','Santé':'#25c9ff','Commerces':'#CCEFC2','Sports, loisirs et culture':'#E5E2A7','Enseignement':'#E9D9FF','Transports et déplacements':'#FFFFFF','Tourisme':'#F4C5C8'}">
                                        <ods-chart-serie chart-type="treemap" function-y="COUNT" color="range-PiYG"
                                                         scientific-display="false">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <h2>
                    Observons ses deux principales catégories
                </h2>

                <div class="grid lg:grid-4 gap-6">
                    <div class="lg:cell-2 lg:cell-order-1 box white flat colored services">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Les Services aux particuliers
                                </h3>
                                <p class="description">
                                    qui représentent
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value">
                                    {{ (values.services / values.nbequip * 100) | number : 1 }} %
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="lg:cell-2 lg:cell-order-3 box white flat colored services">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Principaux équipement de services aux particuliers
                                </h3>
                                <p class="description">
                                    Description du TOP 20 de cette catégorie
                                </p>
                            </div>
                            <div class="advanced-kpi--middle">
                                <ods-chart class="medium-chart" labels-x-length="40" align-month="true">
                                    <ods-chart-query context="ctx2" field-x="equipment_name" maxpoints="20"
                                                     sort="serie1-1">
                                        <ods-chart-serie chart-type="bar" function-y="COUNT" color="#ff714d"
                                                         scientific-display="true" label-y="Nb. équipements">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="lg:cell-2 lg:cell-order-2 box white flat colored sante">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    et la Santé
                                </h3>
                                <p class="description">
                                    qui représente
                                </p>
                            </div>
                            <div class="advanced-kpi--middle centered">
                                <p class="value">
                                    {{ (values.sante / values.nbequip * 100) | number : 1 }} %
                                </p>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="lg:cell-2 lg:cell-order-4 box white flat colored sante">
                        <div class="advanced-kpi">
                            <div class="advanced-kpi--top">
                                <h3 class="title">
                                    Principaux équipements de Santé
                                </h3>
                                <p class="description">
                                    Description du TOP 20 de cette catégorie
                                </p>
                            </div>
                            <div class="advanced-kpi--middle">
                                <ods-chart class="medium-chart" labels-x-length="40" align-month="true">
                                    <ods-chart-query context="ctx3" field-x="equipment_name" maxpoints="20"
                                                     sort="serie1-1">
                                        <ods-chart-serie chart-type="bar" function-y="COUNT" color="#25c9ff"
                                                         scientific-display="true" label-y="Nb. équipements">
                                        </ods-chart-serie>
                                    </ods-chart-query>
                                </ods-chart>
                            </div>
                            <div class="advanced-kpi--bottom">
                                <div class="advanced-kpi--bottom-second-stage">
                                    <span class="date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                                    <a class="source"
                                       href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                                       title="{{ ctx1.dataset.metas.title }}">Source <i class="fa fa-long-arrow-right"
                                                                                        aria-hidden="true"></i>
                                    </a>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </section>
    </ods-dataset-context>
</section>