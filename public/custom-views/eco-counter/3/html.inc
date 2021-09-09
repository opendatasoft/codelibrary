<ods-dataset-context context="counterdata"
                     counterdata-dataset="eco-counter-data">
    <div ods-color-gradient="rateGradient"
         ods-color-gradient-context="counterdata"
         ods-color-gradient-x="name"
         ods-color-gradient-serie="AVG(counts)"
         ods-color-gradient-high="#00C7B1"
         ods-color-gradient-low="#FFFFFF"
         ods-color-gradient-nb-classes="10">
        <ods-map
                 scroll-wheel-zoom="false"
                 basemap="jawg.dark"
                 >
            <ods-map-layer
                           context="ctx"
                           display="categories"
                           color-by-field="name"
                           color-categories="rateGradient['colors']"
                           show-marker="false"
                           picto="dot"
                           size="5"
                           opacity="1.0"
                           >
                <h3 class="title is-3">{{ record.fields.name }}</h3>
                <ods-dataset-context
                                     context="refineddata"
                                     refineddata-dataset="eco-counter-data"
                                     refineddata-parameters="{'refine.id': record.fields.id}"
                                     >
                    <div class="is-size-4"
                         ods-adv-analysis="rate"
                         ods-adv-analysis-context="refineddata"
                         ods-adv-analysis-select="avg(counts) as rate"
                         ods-adv-analysis-where="id like '{{ record.fields.id}}'"

                         ods-results="site"
                         ods-results-context="ctx"
                         ods-results-max="1"
                         >
                        <span ng-if="!rate"><ods-spinner /></span>
                        <p ng-if="rate">Installed on <strong>{{ site[0].fields.installation_date | date:longdate }}</strong></p>
                        <p ng-if="rate"><strong>{{ (rate[0].rate * 60)/site[0].fields.interval | number:2 }}</strong> bikes per hour on average</p>
                        <div class="pictures">
                            <figure class="image"
                                    ng-if="site[0].fields.urlphoto1">
                                <img src="{{ site[0].fields.urlphoto1 }}" width="200">
                            </figure>
                            <figure class="image"
                                    ng-if="site[0].fields.urlphoto2">
                                <img src="{{ site[0].fields.urlphoto2 }}" width="200">
                            </figure>
                            <figure class="image"
                                    ng-if="site[0].fields.urlphoto3">
                                <img src="{{ site[0].fields.urlphoto3 }}" width="200">
                            </figure>
                        </div>
                    </div>
                </ods-dataset-context>
            </ods-map-layer>
        </ods-map>
        <ods-legend
                    color-gradient="rateGradient"
                    title="Average hourly count"
                    no-value-color="#565656"
                    decimal-precision="1"
                    display="steps">
        </ods-legend>
    </div>
</ods-dataset-context>
