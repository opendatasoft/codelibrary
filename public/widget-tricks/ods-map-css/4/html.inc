<ods-dataset-context context="shanghaiworlduniversityrankingpublic"
                     shanghaiworlduniversityrankingpublic-dataset="shanghai-world-university-ranking"
                     shanghaiworlduniversityrankingpublic-domain="userclub">
    <div class="map-container">
        <ods-map style="height: 500px" no-refit="true" scroll-wheel-zoom="false" display-control="true"
                 search-box="false" toolbar-fullscreen="true" toolbar-geolocation="true" basemap="jawg.light"
                 display-control-single-layer="true">
            <ods-map-layer-group>
                <ods-map-layer context="shanghaiworlduniversityrankingpublic"
                               color-numeric-ranges="{'100':'#000000','200':'#303133','300':'#606266','400':'#909399','500':'#C0C5CC'}"
                               color-numeric-range-min="0" picto="ods-circle" show-marker="true" display="choropleth"
                               function="AVG" expression="world_rank_int" shape-opacity="0.9" point-opacity="1"
                               border-color="#FFFFFF" border-opacity="1" border-size="1" border-pattern="solid"
                               caption="false" caption-picto-color="#E5E5E5" title="Shanghai World University Ranking"
                               description="By ranking" size="4"></ods-map-layer>
            </ods-map-layer-group>
        </ods-map>
        <div class="odswidget odswidget-map-legend">
            <div class="odswidget-map-legend__header">
                <div class="odswidget-map-legend__title" title="Shanghai World University Ranking">Shanghai World
                    University Ranking
                </div>
                <div class="odswidget-map-legend__label">World rank integer (Average)</div>
            </div>
            <div>
                <div class="odswidget-map-legend__choropleth-container">
                    <div class="odswidget-map-legend__choropleth__item">
                        <div class="odswidget-map-legend__choropleth__item-color">
                            <div class="odswidget-map-legend__choropleth__color-block"
                                 style="background-color: rgb(0, 0, 0);"></div>
                        </div>
                        <div class="odswidget-map-legend__choropleth__item-range">
                            <div class="odswidget-map-legend__choropleth__item-range__bound">0
                                <i aria-hidden="true"
                                   class="fa fa-long-arrow-right odswidget-map-legend__choropleth__item-range__bound-arrow"></i>
                            </div>
                            <div class="odswidget-map-legend__choropleth__item-range__bound">100</div>
                        </div>
                    </div>
                    <div class="odswidget-map-legend__choropleth__item">
                        <div class="odswidget-map-legend__choropleth__item-color">
                            <div class="odswidget-map-legend__choropleth__color-block"
                                 style="background-color: rgb(48, 49, 51);"></div>
                        </div>
                        <div class="odswidget-map-legend__choropleth__item-range">
                            <div class="odswidget-map-legend__choropleth__item-range__bound">101
                                <i aria-hidden="true"
                                   class="fa fa-long-arrow-right odswidget-map-legend__choropleth__item-range__bound-arrow"></i>
                            </div>
                            <div class="odswidget-map-legend__choropleth__item-range__bound">200</div>
                        </div>
                    </div>
                    <div class="odswidget-map-legend__choropleth__item">
                        <div class="odswidget-map-legend__choropleth__item-color">
                            <div class="odswidget-map-legend__choropleth__color-block"
                                 style="background-color: rgb(96, 98, 102);"></div>
                        </div>
                        <div class="odswidget-map-legend__choropleth__item-range">
                            <div class="odswidget-map-legend__choropleth__item-range__bound">201
                                <i aria-hidden="true"
                                   class="fa fa-long-arrow-right odswidget-map-legend__choropleth__item-range__bound-arrow"></i>
                            </div>
                            <div class="odswidget-map-legend__choropleth__item-range__bound">300</div>
                        </div>
                    </div>
                    <div class="odswidget-map-legend__choropleth__item">
                        <div class="odswidget-map-legend__choropleth__item-color">
                            <div class="odswidget-map-legend__choropleth__color-block"
                                 style="background-color: rgb(144, 147, 153);"></div>
                        </div>
                        <div class="odswidget-map-legend__choropleth__item-range">
                            <div class="odswidget-map-legend__choropleth__item-range__bound">301
                                <i aria-hidden="true"
                                   class="fa fa-long-arrow-right odswidget-map-legend__choropleth__item-range__bound-arrow"></i>
                            </div>
                            <div class="odswidget-map-legend__choropleth__item-range__bound">400</div>
                        </div>
                    </div>
                    <div class="odswidget-map-legend__choropleth__item">
                        <div class="odswidget-map-legend__choropleth__item-color">
                            <div class="odswidget-map-legend__choropleth__color-block"
                                 style="background-color: rgb(192, 197, 204);"></div>
                        </div>
                        <div class="odswidget-map-legend__choropleth__item-range">
                            <div class="odswidget-map-legend__choropleth__item-range__bound">401
                                <i aria-hidden="true"
                                   class="fa fa-long-arrow-right odswidget-map-legend__choropleth__item-range__bound-arrow"></i>
                            </div>
                            <div class="odswidget-map-legend__choropleth__item-range__bound">500</div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
