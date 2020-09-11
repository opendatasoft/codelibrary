<ods-catalog-context context="userclub"
                     userclub-domain="userclub"
                     class="catalog-grid">
    <ods-result-enumerator context="userclub" max="4">
        {{ dataset = item ; "" }}
        <!-- Resource starts here, DO NOT COPY before this line -->
        <ods-catalog-card>
            <div class="card__title"
                 ng-class="{'card__title--stared' : dataset.metas.keyword.indexOf('Demo') != -1}">
                <h2 ng-bind="dataset.metas.title"></h2>
                <ods-theme-picto theme="{{dataset.metas.theme}}" color="white"></ods-theme-picto>
            </div>
            <div class="card__content">
                <div class="card__description-holder">
                    <p class="card__description" ng-bind-html="dataset.metas.description|shortSummary|prettyText"></p>
                    <div class="starred">
                        <img ng-repeat="kw in dataset.metas.keyword track by $index"
                             ng-if="kw == 'academy' || kw =='traffic' || kw =='bicycle'"
                             src="https://discovery.opendatasoft.com/assets/theme_image/stared.png" />
                    </div>
                </div>
                <div ng-if="dataset.metas.publisher == 'OpenDataSoft'" class="poweredby">
                    Powered by OpenDataSoft
                </div>
                <ods-catalog-card-keywords></ods-catalog-card-keywords>
            </div>
            <a ods-main-click=""
               ng-href="{{ '/explore/dataset/' + dataset.datasetid + '/' }}"
               target="_self">
            </a>
        </ods-catalog-card>

    </ods-result-enumerator>
</ods-catalog-context>