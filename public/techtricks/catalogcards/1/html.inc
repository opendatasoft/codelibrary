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
                <ods-catalog-card-description></ods-catalog-card-description>
                <div class="ods-catalog-card__metadata">
                    <ods-catalog-card-metadata-item item-title="Publisher" item-key="publisher"></ods-catalog-card-metadata-item>
                    <ods-catalog-card-metadata-item item-title="License" item-key="license"></ods-catalog-card-metadata-item>
                </div>
                <ods-catalog-card-keywords></ods-catalog-card-keywords>
            </ods-catalog-card-body>
            <ods-catalog-card-visualizations></ods-catalog-card-visualizations>
        </ods-catalog-card>
    </ods-result-enumerator>
</ods-catalog-context>