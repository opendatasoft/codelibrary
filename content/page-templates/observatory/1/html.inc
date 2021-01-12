<div class="observatory" ng-init="values.modalswitchstatus = false">
    <div class="backdrop"
         ng-click="values.modalswitchstatus = !values.modalswitchstatus"
         ng-class="{'backdrop-active':values.modalswitchstatus}">
    </div>

    <div class="container">
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
                    <div class="cl-modal__rightside">
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
                                <ods-facet name="reg_name" refine-also="[ctx2,ctx3]"></ods-facet>
                                <h3>
                                    Département
                                </h3>
                                <ods-facet name="dep_name" refine-also="[ctx2,ctx3]"></ods-facet>
                                <h3>
                                    Code DROM
                                </h3>
                                <ods-facet name="com_arm_area_code" refine-also="[ctx2,ctx3]"></ods-facet>
                                <h3>
                                    EPCI
                                </h3>
                                <ods-facet name="epci_name" refine-also="[ctx2,ctx3]"></ods-facet>
                            </ods-facets>
                        </div>
                        <div class="cl-modal__footer">
                            <div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="level">
                <div class="level-left">
                    <h1 class="titre">
                        Un modèle d'observation des équipements en France
                    </h1>
                    <div class="edito">
                        <p>Bien que ... <q>Il n'y a pas de modèle pour qui cherche ce qu'il n'a jamais vu.</q> Paul
                            Éluard
                        </p>
                    </div>
                </div>
                <div class="level-right">
                    <button ng-click="values.modalswitchstatus = !values.modalswitchstatus">
                        <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none"
                             stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
                             class="feather feather-filter">
                            <polygon points="22 3 2 3 10 12.46 10 19 14 21 14 12.46 22 3"></polygon>
                        </svg>
                        Filtrer les données
                    </button>
                </div>
            </div>

            <div id="resume">
                <p>
                    L'objectif de la Base Permanente des Équipements (BPE) est de proposer annuellement une base
                    d'équipements géolocalisés construite à partir de sources administratives diverses.
                </p>
                <p>
                    La classification des équipements en gammes a pour objectif de réunir des équipements qui présentent
                    des logiques d'implantation voisines, en ce sens qu'ils sont fréquemment présents dans les mêmes
                    communes. Ces regroupements permettent d'élaborer des indicateurs synthétiques reflétant
                    l'organisation hiérarchisée des territoires en termes de services à la population.
                </p>
                <p>
                    Les gammes d’équipements sont actualisées chaque année pour une nouvelle version de la Base
                    Permanente des Équipements. En effet, d’une part de nouveaux équipements peuvent être introduits
                    dans la base et, d’autre part, l’implantation des équipements dans les communes peut être modifiée,
                    tout cela pouvant avoir des conséquences sur la composition des gammes.
                </p>
            </div>

            <ods-filter-summary context="ctx1">
                {{ refinements }}
            </ods-filter-summary>

            <div class="row">
                <div class="box col-md-6">
                    <div class="grey-box half-box">
                        <h2 class="title">
                            Nombre d'équipements en 2019
                        </h2>
                        <h3 class="description">
                            Données INSEE issu de la BPE (Base permanente des équipements)
                        </h3>
                        <p class="kpi">
                            {{ values.nbequip | number }}
                        </p>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
                <div ng-if="!ctx1.parameters['refine.reg_name']"
                     class="box col-md-6">
                    <div class="grey-box half-box">
                        <h2 class="title">
                            Top 5 Région
                        </h2>
                        <h3 class="description">
                            Nombre d'équipements des 5 régions les mieux équipées
                        </h3>
                        <ods-chart single-y-axis="true" scientific-display="true" display-legend="false"
                                   labels-x-length="20" align-month="false">
                            <ods-chart-query context="ctx1" field-x="reg_name" maxpoints="5" sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#000000"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
                <div ng-if="ctx1.parameters['refine.reg_name']"
                     class="box col-md-6">
                    <div class="grey-box half-box">
                        <h2 class="title">
                            Top 5 Département
                        </h2>
                        <h3 class="description">
                            Nombre d'équipements des 5 départements les mieux équipées
                        </h3>
                        <ods-chart single-y-axis="true" scientific-display="true" display-legend="false"
                                   labels-x-length="20" align-month="false">
                            <ods-chart-query context="ctx1" field-x="dep_name" maxpoints="5" sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#000000"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="box col-md-12">
                    <div class="grey-box">
                        <h2 class="title">
                            Répartis en grandes catégories
                        </h2>
                        <h3 class="description">
                            La Base Permanente des Équipements est réparti en 7 grands domaines : services aux
                            particuliers ; commerces ; enseignement ; santé ; transports et déplacements ; sports,
                            loisirs et culture ; tourisme.
                        </h3>
                        <ods-chart labels-x-length="30" align-month="true">
                            <ods-chart-query context="ctx1" field-x="category" maxpoints="0" sort="serie1-1"
                                             category-colors="{'Services aux particuliers':'#D8D8DD','Santé':'#D1F1FF','Commerces':'#CCEFC2','Sports, loisirs et culture':'#E5E2A7','Enseignement':'#E9D9FF','Transports et déplacements':'#FFFFFF','Tourisme':'#F4C5C8'}">
                                <ods-chart-serie chart-type="treemap" function-y="COUNT" color="range-PiYG"
                                                 scientific-display="false">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
            </div>

            <h2>
                Observons ses deux principales catégories
            </h2>
            <div class="row">
                <div class="box col-md-6">
                    <div class="grey-box half-box colored services">
                        <h2 class="title">
                            Les Services aux particuliers
                        </h2>
                        <h3 class="description">
                            qui représentent
                        </h3>
                        <p class="kpi">
                            {{ (values.services / values.nbequip * 100) | number : 1 }} %
                        </p>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
                <div class="box col-md-6">
                    <div class="grey-box half-box colored sante">
                        <h2 class="title">
                            et la Santé
                        </h2>
                        <h3 class="description">
                            qui représente
                        </h3>
                        <p class="kpi">
                            {{ (values.sante / values.nbequip * 100) | number : 1 }} %
                        </p>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
            </div>
            <div class="row">
                <div class="box col-md-6">
                    <div class="grey-box colored services">
                        <h2 class="title">
                            Principaux équipement de services aux particuliers
                        </h2>
                        <h3 class="description">
                            Description du TOP 20 de cette catégorie
                        </h3>
                        <ods-chart labels-x-length="40" align-month="true">
                            <ods-chart-query context="ctx2" field-x="equipment_name" maxpoints="20" sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#D8D8DD"
                                                 scientific-display="true" label-y="Nb. équipements">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
                <div class="box col-md-6">
                    <div class="grey-box colored sante">
                        <h2 class="title">
                            Principaux équipements de Santé
                        </h2>
                        <h3 class="description">
                            Description du TOP 20 de cette catégorie
                        </h3>
                        <ods-chart labels-x-length="40" align-month="true">
                            <ods-chart-query context="ctx3" field-x="equipment_name" maxpoints="20" sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" color="#D1F1FF"
                                                 scientific-display="true" label-y="Nb. équipements">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                        <div class="kpi-footer">
                            <span class="kpi-footer-date">{{ ctx1.dataset.metas.data_processed | date }}</span>
                            <a href="{{ 'https://' + ctx1.dataset.metas.domain + '.opendatasoft.com/explore/dataset/' + ctx1.dataset.datasetid }}"
                               title="{{ ctx1.dataset.metas.title }}"
                               class="kpi-footer-source">Source <i class="fa fa-long-arrow-right"
                                                                   aria-hidden="true"></i>
                            </a>
                        </div>
                    </div>
                </div>
            </div>

        </ods-dataset-context>

    </div>
</div>
