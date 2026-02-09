<section>
    <div class="container">
        <div class="heading">
            <h1 class="title">Événements sur le territoire Français</h1>
            <p class="subtitle">Données collectées et gérées par OpenAgenda</p>
            <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                nemo officia velit.</p>
        </div>
        <div class="row my-4.5">
            <div class="col-md-5">
                <div class="content-box text align-right">
                    <h3>Evenements publics - OpenAgenda</h3>
                    <p class="subtitle">Top 20 des <b>départements</b> par nombre d'événements recensés</p>
                </div>
            </div>
            <div class="col-md-7">
                <div class="content-box heavy-shadow">
                    <ods-dataset-context context="evenementspublicsopenagenda"
                                         evenementspublicsopenagenda-domain="userclub"
                                         evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                         evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                        <ods-chart class="no-bg hide-y-gridline hide-y-values hide-x-legend medium-x-values one-out-of-5-values"
                                   single-y-axis="true" step="10000" scientific-display="true" display-legend="false"
                                   labels-x-length="20" align-month="false">
                            <ods-chart-query context="evenementspublicsopenagenda" field-x="location_department" maxpoints="20"
                                             sort="serie1-1">
                                <ods-chart-serie chart-type="bar" function-y="COUNT" label-y="Nombre d'événements"
                                                 color="#565656" display-values="true" display-stack-values="false"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </ods-dataset-context>
                </div>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="heading">
            <h3 class="title">Lorem ipsum dolor sit amet, consectetur adipisicing elit</h3>
            <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                nemo officia velit.</p>
        </div>
        <div class="row my-4.5">
            <div class="col-md-5 order-md-2">
                <div class="content-box text align-left">
                    <h3>Evenements publics - OpenAgenda</h3>
                    <p class="subtitle">Top 10 des <b>régions</b> par nombre d'événements recensés</p>
                </div>
            </div>
            <div class="col-md-7">
                <div class="order-md-1 content-box heavy-shadow">
                    <ods-dataset-context context="evenementspublicsopenagenda"
                                         evenementspublicsopenagenda-domain="userclub"
                                         evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                         evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                        <ods-chart class="no-bg" labels-x-length="20" align-month="true">
                            <ods-chart-query context="evenementspublicsopenagenda" field-x="location_region" maxpoints="10"
                                             sort="serie1-1"
                                             category-colors="{'Île-de-France':'#2B3F56','Auvergne-Rhône-Alpes':'#6C7987','Nouvelle-Aquitaine':'#969FAA','Provence-Alpes-Côte d\'Azur':'#C0C5CC','Occitanie':'#2B3F56','Hauts-de-France':'#6C7987','Centre-Val de Loire':'#969FAA','Grand Est':'#C0C5CC','Pays de la Loire':'#2B3F56','Normandie':'#6C7987','Bretagne':'#969FAA','Bourgogne-Franche-Comté':'#C0C5CC','Aquitaine-Limousin-Poitou-Charentes':'#2B3F56','Alsace-Champagne-Ardenne-Lorraine':'#6C7987','Languedoc-Roussillon-Midi-Pyrénées':'#969FAA','Nord-Pas-de-Calais-Picardie':'#C0C5CC','Ile-de-France':'#2B3F56','La Réunion':'#6C7987','Corse':'#969FAA','Guadeloupe':'#C0C5CC'}">
                                <ods-chart-serie chart-type="treemap" function-y="COUNT"
                                                 scientific-display="true" label-y="Nombre d'événements">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>

                    </ods-dataset-context>
                </div>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="heading">
            <h3 class="title">Lorem ipsum dolor sit amet, consectetur adipisicing elit</h3>
            <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                nemo officia velit.</p>
        </div>
        <div class="row my-4.5">
            <div class="col-md-12">
                <div class="content-box text align-left">
                    <h3>Evenements publics - OpenAgenda</h3>
                    <p class="subtitle">Évolution du nombre d'événements par mois</p>
                </div>
            </div>
            <div class="col-md-12">
                <div class="content-box heavy-shadow">
                    <ods-dataset-context context="evenementspublicsopenagenda"
                                         evenementspublicsopenagenda-domain="userclub"
                                         evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                         evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true,'q':'firstdate_begin:[2008 TO 2023]'}">
                        <ods-chart
                                class="no-bg small-chart-series small-y-gridline hide-x-legend medium-x-values medium-y-values"
                                display-legend="false"
                                timescale="month" single-y-axis="true" scientific-display="true"
                                align-month="true">
                            <ods-chart-query context="evenementspublicsopenagenda" field-x="firstdate_begin" maxpoints="0"
                                             timescale="month">
                                <ods-chart-serie chart-type="areaspline" function-y="COUNT" color="#2B3F56"
                                                 label-y="Nombre d'événements"
                                                 display-stack-values="false"
                                                 scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>

                    </ods-dataset-context>
                </div>
            </div>
        </div>
    </div>
</section>