<ods-catalog-context context="catalog">
    <section class="container-fluid"> 
        <div class="row row-equal-height" 
             ods-facet-results="themes"
             ods-facet-results-context="catalog"
             ods-facet-results-facet-name="theme"
             ods-facet-results-sort="alphanum">
            <div ng-repeat="theme in themes" 
                 class="col-md-3 margin-bottom-20">
                <a href="/explore/?refine.theme={{ theme.path }}"
                   class="color-card">
                    <ods-theme-picto theme="{{ theme.name }}" class="color-card-picto"></ods-theme-picto>
                    <h3 class="color-card-title">
                        {{ theme.name }}
                    </h3>
                </a>
            </div>
        </div>
    </section>
</ods-catalog-context>
      