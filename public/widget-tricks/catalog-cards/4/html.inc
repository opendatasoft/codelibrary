<ods-catalog-context context="userclub"
                     userclub-domain="userclub"
                     class="catalog-grid">
    <ods-result-enumerator context="userclub" max="4">
        {{ dataset = item ; "" }}
        <!-- Resource starts here, DO NOT COPY before this line -->
        <ods-catalog-card class="catalog-highlight"
                          ng-class="{'ods-catalog-card-highlighted' : dataset.metas.keyword.indexOf('Discovery') > -1 }">
            <a ods-main-click=""
               ng-href="{{ '/explore/dataset/' + dataset.datasetid + '/' }}"
               target="_self">
            </a>
            <ods-catalog-card-theme-icon></ods-catalog-card-theme-icon>
            <ods-catalog-card-body>
                <ods-catalog-card-title></ods-catalog-card-title>
                <ods-catalog-card-description></ods-catalog-card-description>
                <ods-catalog-card-keywords></ods-catalog-card-keywords>
                <div class="ods-catalog-card__metadata">
                    <ods-catalog-card-metadata-item item-title="Publisher" item-key="publisher"></ods-catalog-card-metadata-item>
                    <ods-catalog-card-metadata-item item-title="License" item-key="license"></ods-catalog-card-metadata-item>
                </div>
            </ods-catalog-card-body>
            <div class="ods-catalog-card__visualizations">
                <div class="stars">
                    <img ng-repeat="kw in dataset.metas.keyword track by $index"
                         ng-if="kw == 'academy' || kw =='traffic' || kw =='bicycle'"
                         src="https://discovery.opendatasoft.com/assets/theme_image/stared.png" />
                </div>
            </div>
        </ods-catalog-card>
        <!-- Resource ends here -->
    </ods-result-enumerator>
</ods-catalog-context>