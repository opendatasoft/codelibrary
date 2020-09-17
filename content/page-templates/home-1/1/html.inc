<!--
     The <ods-catalog-context> allows other widgets in this page to access the catalog of datasets in this platform.
     Check the ods-widgets documentation to learn more about ods-catalog-context.
-->
<ods-catalog-context context="catalog">
    <!-- Header Image
      Check the .home-header class to change the background image
    -->
    <section class="home-header"></section>
    <!-- Welcome card and KPI cards -->
    <section class="container">
        <div class="row row-equal-height">
            <div class="col-md-4">
                <div class="welcome-card">
                    <h1 class="welcome-card-title">
                        Welcome to
                        <br />
                        Portal Name
                    </h1>
                    <p class="welcome-card-description">
                        Lorem ipsum dolor amet kombucha try-hard biodiesel XOXO scenester subway tile. Etsy selvage shaman master cleanse activated charcoal. Celiac hella wayfarers glossier palo santo pork belly. Vape twee stumptown normcore. Occupy fingerstache listicle etsy.
                    </p>
                    <a href="/explore/"
                       class="welcome-card-link">
                        Explore catalog <i class="fa fa-long-arrow-right fa-fw" aria-hidden="true"></i>
                    </a>
                </div>
            </div>
            <div class="col-md-4">
                <!-- KPI box component -->
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
                <!-- KPI box component -->
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
    <!-- Image cards with links -->
    <section class="container">
        <h2 class="home-subtitle">
            Title for the best part with photos
        </h2>
        <div class="row">
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-mobility">
                    <div class="image-content">
                        <h3 class="image-title">
                            Mobility
                        </h3>
                        <p class="image-description">
                            Quam vulputate dignissim suspendisse in est ante in nibh. Faucibus nisl tincidunt eget nullam non nisi est sit amet.
                        </p>
                    </div>
                </a>
            </div>
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-garden">
                    <div class="image-content">
                        <h3 class="image-title">
                            Garden
                        </h3>
                        <p class="image-description">
                            Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
                        </p>
                    </div>
                </a>
            </div>
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-gastronomy">
                    <div class="image-content">
                        <h3 class="image-title">
                            Gastronomy
                        </h3>
                        <p class="image-description">
                            Massa id neque aliquam vestibulum. Fringilla phasellus faucibus scelerisque eleifend donec pretium vulputate.
                        </p>
                    </div>
                </a>
            </div>
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-sport">
                    <div class="image-content">
                        <h3 class="image-title">
                            Sport
                        </h3>
                        <p class="image-description">
                            Sed augue lacus viverra vitae congue. Neque egestas congue quisque egestas diam in arcu.
                        </p>
                    </div>
                </a>
            </div>
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-culture">
                    <div class="image-content">
                        <h3 class="image-title">
                            Culture
                        </h3>
                        <p class="image-description">
                            Integer malesuada nunc vel risus commodo viverra maecenas. Sem et tortor consequat id porta.
                        </p>
                    </div>
                </a>
            </div>
            <div class="col-md-4">
                <!-- Image card -->
                <a href="#"
                   class="image-card image-card-education">
                    <div class="image-content">
                        <h3 class="image-title">
                            Education
                        </h3>
                        <p class="image-description">
                            Euismod lacinia at quis risus sed vulputate odio. Parturient montes nascetur ridiculus mus mauris vitae.
                        </p>
                    </div>
                </a>
            </div>
        </div>
    </section>
    <section class="container">
        <div class="row">
            <div class="col-md-4">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Map #1
                    </h2>
                    <ods-dataset-context context="streetart" streetart-dataset="street-art">
                        <ods-map no-refit="true" scroll-wheel-zoom="false" location="14,50.85145,4.35263" toolbar-drawing="false" toolbar-fullscreen="false" display-legend="false">
                            <ods-map-layer-group>
                                <ods-map-layer context="streetart" color="#C32D1C" picto="ods-circle" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Street Art" description="Street Art supported by the City of Brussels." size="4" size-min="3" size-max="5" size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>
                    </ods-dataset-context>
                </div>
            </div>
            <div class="col-md-8">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Chart #1
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
        <div class="row">
            <div class="col-md-8">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Map #2
                    </h2>
                    <ods-dataset-context context="donneesairfranceklm" donneesairfranceklm-dataset="donnees-air-france-klm">
                        <ods-map no-refit="true" scroll-wheel-zoom="false" location="2,19.21656,0.89172" toolbar-drawing="false" toolbar-fullscreen="false" display-legend="false">
                            <ods-map-layer-group>
                                <ods-map-layer context="donneesairfranceklm" color="#C32D1C" picto="ods-circle" show-marker="true" display="auto" shape-opacity="0.5" point-opacity="1" border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid" caption="true" title="Données Air France KLM" size="4" size-min="3" size-max="5" size-function="linear"></ods-map-layer>
                            </ods-map-layer-group>
                        </ods-map>
                    </ods-dataset-context>
                </div>
            </div>
            <div class="col-md-4">
                <!-- Content card -->
                <div class="content-card">
                    <h2 class="content-card-title">
                        Title Chart #2
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
        </div>
    </section>
    <section class="container">
        <div class="row">
            <div class="col-md-4">
                <!-- Most Popular Datasets -->
                <h2 class="home-subtitle">
                    Most popular data
                </h2>
                <ods-most-popular-datasets context="catalog"></ods-most-popular-datasets>
            </div>
            <div class="col-md-4">
                <!-- Last modified datasets -->
                <h2 class="home-subtitle">
                    Last updated data
                </h2>
                <ods-last-datasets-feed context="catalog"></ods-last-datasets-feed>
            </div>
            <div class="col-md-4">
                <!-- Twitter feed -->
                <h2 class="home-subtitle">
                    On twitter
                </h2>
                <div class="twitter-timeline-container">
                    <!-- To change the Twitter profile to display go to https://publish.twitter.com/# -->
                    <a class="twitter-timeline" data-height="392" href="https://twitter.com/Opendatasoft?ref_src=twsrc%5Etfw">Tweets by Opendatasoft</a> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
                </div>
            </div>
        </div>
    </section>
</ods-catalog-context>
