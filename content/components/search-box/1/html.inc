<h2>
    Search box
</h2>
<!-- Search box -->
<h2 class="search-card-title">
    What data are you looking for?
</h2>
<ods-catalog-context context="catalog">
    <div class="search-card-container">
        <ods-searchbox class="search-card-searchbox"
                       form-id="search-form"
                       translate="placeholder"
                       placeholder="Search for a dataset">
        </ods-searchbox>
        <!-- Button is optional but has been added for accessibility reasons. We recommend not removing it.
	     The "form" parameter must match the "form-id" parameter in ods-searchbox. -->
        <button type="submit" form="search-form" class="search-card-submit-button">
            Search
        </button>
    </div>
</ods-catalog-context>
<h2>
    Search box inside card
</h2>
<!-- Search box card -->
<section class="search-card">
    <h2 class="search-card-title">
        What data are you looking for?
    </h2>
    <ods-catalog-context context="catalog">
        <div class="search-card-container">
            <ods-searchbox class="search-card-searchbox"
                           form-id="search-form"
                           translate="placeholder"
                           placeholder="Search for a dataset">
            </ods-searchbox>
            <!-- Button is optional but has been added for accessibility reasons. We recommend not removing it.
				The "form" parameter must match the "form-id" parameter in ods-searchbox. -->
            <button type="submit" form="search-form" class="search-card-submit-button">
                Search
            </button>
        </div>
    </ods-catalog-context>
</section>
