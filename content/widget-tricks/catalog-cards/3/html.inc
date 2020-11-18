<ods-catalog-context context="userclub"
                     userclub-domain="userclub"
                     class="catalog-grid">
    <ods-result-enumerator context="userclub" max="4">
        {{ dataset = item ; "" }}
        <!-- Resource starts here, DO NOT COPY before this line -->
        <ods-catalog-card>
            <ods-catalog-card-theme-icon></ods-catalog-card-theme-icon>
            <ods-catalog-card-body>
                <ods-catalog-card-title></ods-catalog-card-title>
                <div class="catalog-card-content">
                    <div class="catalog-card-info">
                        <div class="catalog-card-metrics">
                            <div class="catalog-card-metric">
                        <span class="catalog-card-metric-value">
                            <i class="fa fa-cube" aria-hidden="true"></i>&nbsp;&nbsp;{{ dataset.metas.records_count | siPrefixFormat }}
                        </span>
                                <span><translate>enregistrements</translate>
                        </span>
                            </div>
                            <div class="catalog-card-metric" ng-if="dataset.extra_metas.explore.popularity_score">
                        <span class="catalog-card-metric-value">
                            <i class="fa fa-heartbeat" aria-hidden="true"></i>&nbsp;&nbsp;{{ dataset.extra_metas.explore.popularity_score * 10| number }}
                        </span>
                                <span>
                            <translate> (score de popularité)</translate>
                        </span>
                            </div>
                            <div class="catalog-card-metric">
                        <span class="catalog-card-metric-value">
                            <i class="fa fa-clock-o" aria-hidden="true"></i> &nbsp;&nbsp;{{ dataset.metas.modified | date:format:"DD/MM/YYYY" }}
                        </span>
                                <span>{{ dataset.metas.modified | date:"'à' HH:mm" }}</span>
                            </div>
                            <div class="catalog-card-metric">
                        <span class="catalog-card-metric-value">
                            <i class="fa fa-shield" aria-hidden="true"></i> &nbsp;&nbsp;{{ dataset.metas.license }}
                        </span>
                            </div>
                            <div class="catalog-card-metric">
                        <span class="catalog-card-metric-value">
                            <i class="fa fa-user-circle" aria-hidden="true"></i> &nbsp;{{ dataset.metas.publisher }}
                        </span>
                            </div>
                        </div>
                    </div>
                    <div class="catalog-card-description">
                        <ods-catalog-card-description></ods-catalog-card-description>
                    </div>
                </div>
            </ods-catalog-card-body>
            <div class="catalog-card-sidebar">
                <ods-catalog-card-visualizations></ods-catalog-card-visualizations>
                <ods-catalog-card-keywords></ods-catalog-card-keywords>
            </div>
        </ods-catalog-card>
        <!-- Resource ends here -->
    </ods-result-enumerator>
</ods-catalog-context>