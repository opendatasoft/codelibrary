<ods-catalog-context context="catalog" ods-domain-statistics>
    <ods-dataset-context context="ctx" ctx-dataset="datavizgallery"
    <section class="header">
        <div class="container flex-container">
            <div class="header-box">
                <h1>Welcome to your portal</h1>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore
                    et dolore magna aliqua.</p>
                <div class="kpi-container">
                    <div class="kpi-box">
                        <p class="kpi-value">239 kWh</p>
                        <p class="kpi-description">energy consumption</p>
                    </div>
                    <div class="kpi-box">
                        <p class="kpi-value">2 350</p>
                        <p class="kpi-description">visitors</p>
                    </div>
                    <div class="kpi-box">
                        <p class="kpi-value">12,6M€</p>
                        <p class="kpi-description">annual revenue</p>
                    </div>
                </div>
                <ods-catalog-search class-name="'searchbox'"
                                    label="'Search with AI'">
                </ods-catalog-search>
            </div>
        </div>
    </section>
    <section class="bloc-p40 colored-bg">
        <div class="container">
            <div class="themes-list">
                <a href="/explore/?refine.theme=Santé" class="theme">
                    <ods-theme-picto
                                     theme="Santé">
                    </ods-theme-picto>
                    Santé
                </a>
                <a href="/explore/?refine.theme=Environnement" class="theme">
                    <ods-theme-picto
                                     theme="Environnement">
                    </ods-theme-picto>
                    Environnement
                </a>
                <a href="/explore/?refine.theme=Culture, Patrimoine" class="theme">
                    <ods-theme-picto
                                     theme="Culture, Patrimoine">
                    </ods-theme-picto>
                    Culture, Patrimoine
                </a>
                <a href="/explore/?refine.theme=Sport, Loisirs" class="theme">
                    <ods-theme-picto
                                     theme="Sport, Loisirs">
                    </ods-theme-picto>
                    Sport, Loisirs
                </a>
            </div>
        </div>
    </section>
    <section class="bloc-visualisations colored-bg">
        <div class="container">
            <h2 class="section-title"> Dernières visualisations </h2>
            <div class="visualisations-list">
                <a class="visualisation"
                   href="#">
                    <div class="image-container">
                        <img src="/assets/theme_image/bd846b7fe601e65ff20df044b58ec938.jpeg" />
                    </div>
                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Structure de la population active - France - par sexe et activité</p>
                        <p class="mise-a-jour">Mise à jour le 20 novembre 2023 par <strong>Département
                                Communication</strong></p>
                        <div class="visualisation-theme-tag">
                            <ods-theme-picto
                                             theme="Santé">
                            </ods-theme-picto>
                            Santé
                        </div>
                    </div>
                </a>
                <a class="visualisation"
                   href="#">
                    <div class="image-container">
                        <img src="/assets/theme_image/dcaf2770888eb30ecdf3514d85ca5f76.png" />
                    </div>

                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Structure de la population active - France - par sexe et activité</p>
                        <p class="mise-a-jour">Mise à jour le 20 novembre 2023 par <strong>Département
                                Communication</strong></p>
                        <div class="visualisation-theme-tag">
                            <ods-theme-picto
                                             theme="Santé">
                            </ods-theme-picto>
                            Santé
                        </div>
                    </div>
                </a>
                <a class="visualisation"
                   href="#">
                    <div class="image-container">
                        <img src="/assets/theme_image/0b654eef55a21ccce4e44e0b7501169e.jpeg" />
                    </div>


                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Structure de la population active - France - par sexe et activité</p>
                        <p class="mise-a-jour">Mise à jour le 20 novembre 2023 par <strong>Département
                                Communication</strong></p>
                        <div class="visualisation-theme-tag">
                            <ods-theme-picto
                                             theme="Santé">
                            </ods-theme-picto>
                            Santé
                        </div>
                    </div>
                </a>
            </div>
        </div>
    </section>
    <section class="bloc-p40 tools-bloc">
        <div class="container">
            <h2 class="section-title">
                A lot of tools to use
            </h2>
            <div class="tools-list">
                <a href="#" class="tool">
                    <i class="fa fa-cogs" aria-hidden="true"></i>
                    API
                </a>
                <a href="#" class="tool">
                    <i class="fa fa-area-chart" aria-hidden="true"></i>
                    Chart
                </a>
                <a href="#" class="tool">
                    <i class="fa fa-globe" aria-hidden="true"></i>
                    Map
                </a>
                <a href="#" class="tool">
                    <i class="fa fa-book" aria-hidden="true"></i>
                    Documentation
                </a>
            </div>
        </div>
    </section>
    <section class="content-bloc bloc-p40">
        <div class="container">
            <h2 class="content-bloc-title">
                Our missions
            </h2>
            <p class="content-bloc-description">
                Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et
                dolore magna aliqua.
            </p>
            <button class="btn content-bloc-button"><a href="#">Learn more</a></button>
        </div>
    </section>
    <section class="bloc-p40">
        <div class="container">
            <div class="datasets-boxes">
                <div class="datasets-box">
                    <h2>Derniers jeux de données</h2>
                    <ods-last-datasets-feed
                                            context="catalog">
                    </ods-last-datasets-feed>
                </div>
                <div class="datasets-box">
                    <h2>Jeux de données populaires</h2>
                    <ods-most-popular-datasets
                                               context="catalog"
                                               max="5"
                                               order-by="downloads">
                    </ods-most-popular-datasets>
                </div>
            </div>
        </div>
    </section>
</ods-catalog-context>