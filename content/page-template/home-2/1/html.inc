<!--
 The <ods-catalog-context> allows other widgets in this page to access the catalog of datasets in this platform.
 Check the ods-widgets documentation to learn more about ods-catalog-context.
-->
<ods-catalog-context context="catalog">
    <section class="container">
        <div class="row row-equal-height">
            <div class="col-md-4">
                <div class="welcome-card">
                    <h1 class="welcome-card-title">
                        Welcome to
                        <br />
                        Portal Name
                    </h1>
                </div>
            </div>
            <div class="col-md-4">
                <!-- Basic card (Title + Description + View More button) -->
                <div class="content-card centered-card">
                    <div class="text-center">
                        <i class="fa fa-envira content-card-icon" aria-hidden="true"></i>
                    </div>
                    <h2 class="content-card-title text-center">
                        Our philosophy
                    </h2>
                    <p class="content-card-description">
                        Tezos limited a quick all-time-high of lots of whitepaper! Cardano could be many technical analysis since Nexo data mining a fundamental analysis.
                    </p>
                    <div class="text-center">
                        <a href="#"
                           class="content-card-button">
                            View more
                        </a>
                    </div>
                </div>
            </div>
            <div class="col-md-4">
                <!-- Basic card (Title + Description + View More button) -->
                <div class="content-card centered-card">
                    <div class="text-center">
                        <i class="fa fa-bolt content-card-icon" aria-hidden="true"></i>
                    </div>
                    <h2 class="content-card-title text-center">
                        Our data
                    </h2>
                    <p class="content-card-description">
                        Ravencoin generates a amazing fish of lots of market cap, and Waves serves many quick anti-money laundering! Solidity allowed lots of fast peer-to-peer network.
                    </p>
                    <div class="text-center">
                        <a href="#"
                           class="content-card-button">
                            View more
                        </a>
                    </div>
                </div>
            </div>
        </div>
    </section>
    <!-- Catalog Search Box -->
    <section class="container">
        <!-- Search box card -->
        <div class="search-card">
            <h2 class="search-card-title">
                What data are you looking for?
            </h2>
            <div class="search-card-container">
                <ods-searchbox class="search-card-searchbox"
                               form-id="search-form"
                               translate="placeholder"
                               placeholder="Search for a dataset">
                </ods-searchbox>
                <button type="submit" form="search-form" class="search-card-submit-button">
                    Search
                </button>
            </div>
        </div>
    </section>
    <section class="container">
        <div class="row row-equal-height">
            <div class="col-md-4">
                <!-- KPI card -->
                <div class="kpi-card">
                    <i class="kpi-icon fa fa-gitlab" aria-hidden="true"></i>
                    <h2 class="kpi-title">
                        5,983
                    </h2>
                    <p class="kpi-description">
                        Dignissim suspendisse in est ante in nibh nisl tincidunt eget
                    </p>
                </div>
            </div>
            <div class="col-md-4">
                <!-- KPI card -->
                <div class="kpi-card">
                    <i class="kpi-icon fa fa-ils" aria-hidden="true"></i>
                    <h2 class="kpi-title">
                        230
                    </h2>
                    <p class="kpi-description">
                        Faucibus nisl tincidunt eget nullam non nisi est sit amet
                    </p>
                </div>
            </div>
            <div class="col-md-4">
                <!-- KPI card -->
                <div class="kpi-card">
                    <i class="kpi-icon fa fa-houzz" aria-hidden="true"></i>
                    <h2 class="kpi-title">
                        18.3k
                    </h2>
                    <p class="kpi-description">
                        Quam vulputate dignissim suspendisse in est ante in nibh. Faucibus nisl tincidunt eget nullam non nisi est sit amet
                    </p>
                </div>
            </div>
        </div>
    </section>
    <section class="container">
        <!-- Content card -->
        <div class="content-card">
            <div class="row">
                <div class="col-sm-6">
                    <ods-dataset-context context="donneesairfranceklm" donneesairfranceklm-dataset="donnees-air-france-klm">
                        <ods-map no-refit="true" scroll-wheel-zoom="false" location="4,39.43619,12.7002" display-legend="false">
                            <ods-map-layer-group>
                                <ods-map-layer context="donneesairfranceklm" color="#C32D1C" picto="ods-circle" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Données Air France KLM" size="4" size-min="3" size-max="5" size-function="linear" ></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>
                    </ods-dataset-context>
                </div>
                <div class="col-sm-6">
                    <h2 class="content-card-title">
                        Créer votre carte
                    </h2>
                    <p class="content-card-description">
                        Cardano could be many technical analysis since Nexo data mining a fundamental analysis.
                    </p>
                    <p class="content-card-description">
                        Ravencoin generates a amazing fish of lots of market cap, and Waves serves many quick anti-money laundering! Solidity allowed lots of fast peer-to-peer network.
                    </p>
                    <a href="#"
                       class="content-card-link">
                        En savoir <i class="fa fa-plus fa-fw" aria-hidden="true"></i>
                    </a>
                </div>
            </div>
        </div>
    </section>
    <section class="container">
        <!-- Content card -->
        <div class="content-card">
            <div class="row">
                <div class="col-sm-6">
                    <ods-dataset-context context="oilprices" oilprices-dataset="oil-prices" oilprices-parameters="{'timezone':'Europe/Berlin'}">
                        <ods-chart timescale="month" align-month="true">
                            <ods-chart-query context="oilprices" field-x="date" maxpoints="0" timescale="month">
                                <ods-chart-serie expression-y="brent_spot_price" chart-type="areaspline" function-y="AVG" color="#142E7B" scientific-display="true">
                                </ods-chart-serie>
                                <ods-chart-serie expression-y="wti_spot_price" chart-type="areaspline" function-y="STDDEV" color="#00C7B1" scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </ods-dataset-context>
                </div>
                <div class="col-sm-6">
                    <h2 class="content-card-title">
                        Ouvrez vos données !
                    </h2>
                    <p class="content-card-description">
                        Sed adipiscing diam donec adipiscing. Mi in nulla posuere sollicitudin aliquam ultrices sagittis orci a. Scelerisque varius morbi enim nunc faucibus. Urna neque viverra justo nec ultrices dui. Amet consectetur adipiscing elit duis tristique sollicitudin nibh.
                    </p>
                    <p class="content-card-description">
                        Laoreet non curabitur gravida arcu ac tortor dignissim convallis. Mauris pellentesque pulvinar pellentesque habitant morbi. Id consectetur purus ut faucibus pulvinar elementum integer.
                    </p>
                    <p class="content-card-description">
                        Volutpat odio facilisis mauris sit amet massa vitae tortor. A erat nam at lectus urna duis. Interdum varius sit amet mattis vulputate enim nulla.
                    </p>
                    <a href="#"
                       class="content-card-link">
                        En savoir <i class="fa fa-plus fa-fw" aria-hidden="true"></i>
                    </a>
                </div>
            </div>
        </div>
    </section>
    <section class="container">
        <div class="row">
            <div class="col-md-4">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Chart #1
                    </h2>
                    <ods-dataset-context context="globalairportdatabase" globalairportdatabase-dataset="globalairportdatabase">
                        <ods-chart align-month="true">
                            <ods-chart-query context="globalairportdatabase" field-x="column_5" maxpoints="10">
                                <ods-chart-serie expression-y="column_15" chart-type="pie" function-y="COUNT" color="range-Dark2" scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </ods-dataset-context>
                </div>
            </div>
            <div class="col-md-8">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Chart #2
                    </h2>
                    <ods-dataset-context context="worldbankglobalfinancialdevelopment" worldbankglobalfinancialdevelopment-dataset="worldbank-global-financial-development" worldbankglobalfinancialdevelopment-parameters="{'timezone':'Europe/Berlin'}">
                        <ods-chart timescale="year" display-legend="false" align-month="false">
                            <ods-chart-query context="worldbankglobalfinancialdevelopment" field-x="year" maxpoints="0" timescale="year">
                                <ods-chart-serie expression-y="value" chart-type="arearange" function-y="COUNT" color="#8da0cb" scientific-display="true" subseries='[{"func":"MIN","yAxis":"value"},{"func":"MAX","yAxis":"value"}]'>
                                </ods-chart-serie>
                                <ods-chart-serie expression-y="value" chart-type="line" function-y="AVG" color="#fc8d62" scientific-display="true">
                                </ods-chart-serie>
                            </ods-chart-query>
                        </ods-chart>
                    </ods-dataset-context>
                </div>
            </div>
        </div>
    </section>
    <section class="container">
        <div class="row row-equal-height">
            <div class="col-md-3 margin-bottom-2">
                <!-- Color card -->
                <a href="#" class="color-card">
                    <i class="fa fa-map-o color-card-icon" aria-hidden="true"></i>
                    <h3 class="color-card-title">
                        Créer une carte
                    </h3>
                </a>
            </div>
            <div class="col-md-3 margin-bottom-2">
                <!-- Color card -->
                <a href="#" class="color-card">
                    <i class="fa fa-bar-chart color-card-icon" aria-hidden="true"></i>
                    <h3 class="color-card-title">
                        Créer un graphique
                    </h3>
                </a>
            </div>
            <div class="col-md-3 margin-bottom-2">
                <!-- Color card -->
                <a href="#" class="color-card">
                    <i class="fa fa-cogs color-card-icon" aria-hidden="true"></i>
                    <h3 class="color-card-title">
                        Utiliser l'API
                    </h3>
                </a>
            </div>
            <div class="col-md-3 margin-bottom-2">
                <!-- Color card -->
                <a href="#" class="color-card">
                    <i class="fa fa-book color-card-icon" aria-hidden="true"></i>
                    <h3 class="color-card-title">
                        Documentation
                    </h3>
                </a>
            </div>
        </div>
    </section>
</ods-catalog-context>
