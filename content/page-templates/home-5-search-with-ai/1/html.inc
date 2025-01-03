<ods-catalog-context context="catalog" ods-domain-statistics>
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
                <a href="#" class="theme">
                    <i class="fa fa-cutlery theme-icon" aria-hidden="true"></i>
                    Food
                </a>
                <a href="#" class="theme">
                    <i class="fa fa-paint-brush theme-icon" aria-hidden="true"></i>
                    Culture
                </a>
                <a href="#" class="theme">
                    <i class="fa fa-futbol-o theme-icon" aria-hidden="true"></i>
                    Sport
                </a>
                <a href="#" class="theme">
                    <i class="fa fa-bicycle theme-icon" aria-hidden="true"></i>
                    Transport
                </a>
            </div>
        </div>
    </section>
    <section class="bloc-visualisations colored-bg">
        <div class="container">
            <h2 class="section-title">Last visualisations</h2>
            <div class="visualisations-list">
                <a class="visualisation"
                   href="#">
                    <div class="image-container" style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/culture-bg.jpg')" >
                    </div>
                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Cultural trends</p>
                        <p class="mise-a-jour">Updated on November 2023, 20 by <strong>Culture
                            Department</strong></p>
                        <div class="visualisation-theme-tag">
                            <i class="fa fa-paint-brush" aria-hidden="true"></i>
                            Culture
                        </div>
                    </div>
                </a>
                <a class="visualisation"
                   href="#">
                    <div class="image-container" style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/gastronomy-bg.jpg')" >
                    </div>

                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Gastronomy overview</p>
                        <p class="mise-a-jour">Updated on November 2023, 20 by <strong>Food
                            Department</strong></p>
                        <div class="visualisation-theme-tag">
                            <i class="fa fa-cutlery" aria-hidden="true"></i>
                            Food
                        </div>
                    </div>
                </a>
                <a class="visualisation"
                   href="#">
                    <div class="image-container" style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/mobility-bg.jpg')">
                    </div>

                    <div class="visualisation-content">
                        <p class="visualisation-title">
                            Mobility dashboard</p>
                        <p class="mise-a-jour">Updated on November 2023, 20 by <strong>Transport
                            Department</strong></p>
                        <div class="visualisation-theme-tag">
                            <i class="fa fa-bicycle" aria-hidden="true"></i>
                            Transport
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
                    <h2>Last datasets</h2>
                    <ods-last-datasets-feed
                                            context="catalog">
                    </ods-last-datasets-feed>
                </div>
                <div class="datasets-box">
                    <h2>Popular datasets</h2>
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