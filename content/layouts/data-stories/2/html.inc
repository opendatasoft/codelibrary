<section>
    <div class="container">
        <div class="heading">
            <h1>Événements sur le territoire Français</h1>
            <h2>Données collectées et gérées par OpenAgenda</h2>
            <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                nemo officia velit.</p>
        </div>
        <div class="grid-2 gap-1">
            <div class="sm:cell-1 content-box text align-right">
                <h3>Evenements publics - OpenAgenda</h3>
                <h4>Top 20 des <b>départements</b> par nombre d'événements recensés</h4>
            </div>
            <div class="sm:cell-1 content-box">
                <ods-dataset-context context="evenementspublicsopenagenda"
                                     evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                     evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                    <ods-chart class="no-bg hide-y-gridline hide-y-values hide-x-legend medium-x-values"
                               single-y-axis="true" step="10000" scientific-display="true" display-legend="false"
                               labels-x-length="20" align-month="false">
                        <ods-chart-query context="evenementspublicsopenagenda" field-x="department" maxpoints="20"
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
        <div class="content-box text">
            <h3>Lorem ipsum dolor sit amet, consectetur adipisicing elit</h3>
            <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Aperiam atque commodi cupiditate, deserunt
                dolores dolorum ducimus ea fugiat non quidem repellat soluta voluptate voluptatem. Illo illum maxime
                nemo officia velit.</p>
        </div>
        <div class="grid-2 gap-1">
            <div class="sm:cell-1 sm:cell-order-2 content-box text align-left">
                <h3>Evenements publics - OpenAgenda</h3>
                <h4>Top 10 des <b>régions</b> par nombre d'événements recensés</h4>
            </div>
            <div class="sm:cell-1 sm:cell-order-1 content-box">
                <ods-dataset-context context="evenementspublicsopenagenda"
                                     evenementspublicsopenagenda-dataset="evenements-publics-openagenda"
                                     evenementspublicsopenagenda-parameters="{'disjunctive.tags':true,'disjunctive.placename':true,'disjunctive.city':true}">
                    <ods-chart labels-x-length="20" align-month="true">
                        <ods-chart-query context="evenementspublicsopenagenda" field-x="region" maxpoints="10"
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
</section>