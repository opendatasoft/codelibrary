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
                        Lorem ipsum dolor amet kombucha try-hard biodiesel XOXO scenester
                        subway tile. Etsy selvage shaman master cleanse activated charcoal.
                        Celiac hella wayfarers glossier palo santo pork belly. Vape twee
                        stumptown normcore. Occupy fingerstache listicle etsy.
                    </p>
                    <a href="/explore/" class="welcome-card-link">
                        Explore catalog
                        <i class="fa fa-long-arrow-right fa-fw" aria-hidden="true"></i>
                    </a>
                </div>
            </div>
            <div class="col-md-4">
                <!-- KPI box component -->
                <div class="kpi-card">
                    <i class="kpi-icon fa fa-gitlab" aria-hidden="true"></i>
                    <p class="kpi-title">5,983</p>
                    <p class="kpi-description">
                        Dignissim suspendisse in est ante in nibh nisl tincidunt eget
                    </p>
                </div>
            </div>
            <div class="col-md-4">
                <!-- KPI box component -->
                <div class="kpi-card">
                    <i class="kpi-icon fa fa-houzz" aria-hidden="true"></i>
                    <p class="kpi-title">18.3k</p>
                    <p class="kpi-description">
                        Quam vulputate dignissim suspendisse in est ante in nibh. Faucibus
                        nisl tincidunt eget nullam non nisi est sit amet
                    </p>
                </div>
            </div>
        </div>
    </section>
    <!-- Catalog Search Box -->
    <section class="container">
        <!-- Search box card -->
        <div class="search-card">
            <h2 class="search-card-title">What data are you looking for?</h2>
            <div class="search-card-container">
                <ods-searchbox
                               class="search-card-searchbox"
                               form-id="search-form"
                               translate="placeholder"
                               placeholder="Search for a dataset">
                </ods-searchbox>
                <button
                        type="submit"
                        form="search-form"
                        class="search-card-submit-button">
                    Search
                </button>
            </div>
        </div>
    </section>
    <section class="container">
        <div class="access-cards-container">
            <!-- START ACCESS CARD 1 -->
            <a href="#"
               class="access-card-bg"
               style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/mobility-bg.jpg');">
                <div class="access-card">
                    <h3 class="access-card-pretitle">Mobility</h3>
                    <h2 class="access-card-title">Map of the bike stations</h2>
                    <h4 class="access-card-subtitle">
                        Quam vulputate dignissim suspendisse in est ante in nibh. Faucibus nisl tincidunt eget nullam non nisi est sit amet.
                    </h4>
                    <div class="access-card-description">
                        <h4>Categories</h4>
                        <p>Title category #1 : XXXX</p>
                        <p>Title category #2 : XXXX</p>
                        <p>Title category #3 : XXXX</p>
                        <p>Title category #4 : XXXX</p>
                    </div>
                    <div class="access-card-button">
                        <i class="fa fa-long-arrow-right" aria-hidden="true"></i>
                    </div>
                </div>
            </a>
            <!-- END ACCESS CARD 1 -->
            <!-- START ACCESS CARD 2 -->
            <a href="#"
               class="access-card-bg"
               style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/gastronomy-bg.jpg');">
                <div class="access-card">
                    <h3 class="access-card-pretitle">Gastronomy</h3>
                    <h2 class="access-card-title">Restaurant of the month</h2>
                    <h4 class="access-card-subtitle">
                        Massa id neque aliquam vestibulum. Fringilla phasellus faucibus scelerisque eleifend donec pretium vulputate.
                    </h4>
                    <div class="access-card-description">
                        <h4>Categories</h4>
                        <p>Title category #1 : XXXX</p>
                        <p>Title category #2 : XXXX</p>
                        <p>Title category #3 : XXXX</p>
                        <p>Title category #4 : XXXX</p>
                    </div>
                    <div class="access-card-button">
                        <i class="fa fa-long-arrow-right" aria-hidden="true"></i>
                    </div>
                </div>
            </a>
            <!-- END ACCESS CARD 2 -->
            <!-- START ACCESS CARD 3 -->
            <a href="#"
               class="access-card-bg"
               style="background-image: url('https://discovery.opendatasoft.com/assets/theme_image/culture-bg.jpg');">
                <div class="access-card">
                    <h3 class="access-card-pretitle">Culture</h3>
                    <h2 class="access-card-title">Opened libraries</h2>
                    <h4 class="access-card-subtitle">
                        Integer malesuada nunc vel risus commodo viverra maecenas. Sem et tortor consequat id porta.
                    </h4>
                    <div class="access-card-description">
                        <h4>Categories</h4>
                        <p>Title category #1 : XXXX</p>
                        <p>Title category #2 : XXXX</p>
                        <p>Title category #3 : XXXX</p>
                        <p>Title category #4 : XXXX</p>
                    </div>
                    <div class="access-card-button">
                        <i class="fa fa-long-arrow-right" aria-hidden="true"></i>
                    </div>
                </div>
            </a>
            <!-- END ACCESS CARD 3 -->
        </div>
    </section>
    <section class="container">
        <div class="row">
            <div class="col-md-4">
                <!-- Most Popular Datasets -->
                <h2 class="home-subtitle">Most popular data</h2>
                <ods-most-popular-datasets
                                           context="catalog"></ods-most-popular-datasets>
            </div>
            <div class="col-md-4">
                <!-- Last modified datasets -->
                <h2 class="home-subtitle">Last updated data</h2>
                <ods-last-datasets-feed context="catalog"></ods-last-datasets-feed>
            </div>
            <div class="col-md-4">
                <!-- Twitter feed -->
                <h2 class="home-subtitle">On twitter</h2>
                <div class="twitter-timeline-container">
                    <!-- To change the Twitter profile to display go to https://publish.twitter.com/# -->
                    <a
                       class="twitter-timeline"
                       data-height="392"
                       href="https://twitter.com/Opendatasoft?ref_src=twsrc%5Etfw">Tweets by Opendatasoft</a>
                    <script
                            async
                            src="https://platform.twitter.com/widgets.js"
                            charset="utf-8"></script>
                </div>
            </div>
        </div>
    </section>
</ods-catalog-context>