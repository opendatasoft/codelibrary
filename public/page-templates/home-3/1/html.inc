<!--
	The <ods-catalog-context> allows other widgets in this page to access the catalog of datasets in this platform.
	Check the ods-widgets documentation to learn more about ods-catalog-context.
-->
<ods-catalog-context context="catalog">
	<!-- Header Image
		Check the .home-header class to change the background image
	-->
	<section class="home-header">
		<div class="container">
			<div class="welcome-card">
				<h1 class="welcome-card-title">
					Welcome to Portal Name
				</h1>
			</div>
		</div>
	</section>
	<!-- Welcome card and KPI cards -->
	<section class="container">
		<div class="row row-equal-height margin-bottom-0"
				ods-facet-results="themes"
				ods-facet-results-context="catalog"
				ods-facet-results-facet-name="theme"
				ods-facet-results-sort="alphanum">
			<div ng-repeat="theme in themes"
				class="col-md-3 margin-bottom-2">
				<a href="/explore/?refine.theme={{ theme.path }}"
					class="color-card centered-card">
					<ods-theme-picto theme="{{ theme.name }}" class="color-card-picto"></ods-theme-picto>
					<h3 class="color-card-title">
						{{ theme.name }}
					</h3>
				</a>
			</div>
		</div>
	</section>
	<!-- Catalog Search Box -->
	<section class="container">
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
			<div class="col-xs-12 col-md-4">
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
			<div class="col-xs-12 col-md-4">
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
			<div class="col-xs-12 col-md-4">
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
		</div>
		<div class="row row-equal-height">
			<div class="col-xs-12 col-md-4">
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
			<div class="col-xs-12 col-md-4">
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
			<div class="col-xs-12 col-md-4">
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
		<div class="row">
			<div class="col-md-4">
				<div class="content-card">
					<h2 class="content-card-title">
						Title Map #01
					</h2>
					<ods-dataset-context context="ctx"
										 ctx-domain="userclub"
										 ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
										 ctx-parameters="{'refine.reg_name':'Pays de la Loire'}">
						<ods-map context="ctx" scroll-wheel-zoom="false" basemap="jawg.streets"></ods-map>

					</ods-dataset-context>
				</div>
			</div>
			<div class="col-md-8">
				<div class="content-card">
					<h2 class="content-card-title">
						Title Chart #01
					</h2>
					<ods-dataset-context context="ctx"
										 ctx-domain="userclub"
										 ctx-dataset="base-nationale-des-lieux-de-covoiturage-en-france"
										 ctx-parameters="{'timezone':'Europe/Berlin'}">
						<ods-chart single-y-axis="true" scientific-display="true" labels-x-length="20" align-month="true">
							<ods-chart-query context="ctx" field-x="reg_name" maxpoints="0" sort="serie1-1">
								<ods-chart-serie expression-y="spot_size" chart-type="bar" function-y="SUM" color="#EC643C" scientific-display="true">
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
				<div class="content-card">
					<h2 class="home-subtitle">
						Most popular data
					</h2>
					<ods-most-popular-datasets context="catalog"></ods-most-popular-datasets>
	        	</div>
			</div>
			<div class="col-md-4">
				<div class="content-card">
					<h2 class="home-subtitle">
						Last updated data
					</h2>
					<ods-last-datasets-feed context="catalog"></ods-last-datasets-feed>
				</div>
			</div>
			<div class="col-md-4">
				<div class="content-card">
					<div>
						<a class="twitter-timeline" data-height="387" href="https://twitter.com/Opendatasoft?ref_src=twsrc%5Etfw">Tweets by Opendatasoft</a> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
					</div>
				</div>
			</div>
		</div>
	</section>
</ods-catalog-context>
