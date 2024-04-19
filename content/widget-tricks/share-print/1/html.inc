<div class="container">
    <ods-dataset-context context="ctx"
                         ctx-dataset="les-eruptions-volcaniques-dans-le-monde"
                         ctx-domain="userclub"
                         ctx-urlsync="true">
        <div class="row ods-box">
            <h3>
                Share by copying this link :
            </h3>
            <h3 class="red-box">
                Filter and have a look to your browser URL ! It's synced !
            </h3>
            <h4>
                <a href="https://userclub.opendatasoft.com/pages/widgettrick-shareandprint/?{{ ctx.getQueryStringURL() }}"
                   target="_blank">https://userclub.opendatasoft.com/pages/widgettrick-shareandprint/?{{ ctx.getQueryStringURL() }}</a>
            </h4>
            <h3>
                Share through social network or by email:
            </h3>
            <div class="boutons" style="font-size: 1.6rem;">
                <a href="https://twitter.com/intent/tweet?text=Opendatasoft Page Test;url=https%3A%2F%2Fuserclub.opendatasoft.com%2Fpages%2Fwidgettrick-shareandprint%2F%3F{{ctx.getQueryStringURL() | encodeURIComponent}}"
                   class="ods-dataset-visualization__social-button ods-dataset-visualization__social-button--twitter"
                   target="_blank">
                    <i class="fa fa-twitter ods-dataset-visualization__social-button-icon" aria-hidden="true"></i>
                </a>
                <a href="https://www.facebook.com/sharer/sharer.php?u=https%3A%2F%2Fuserclub.opendatasoft.com%2Fpages%2Fwidgettrick-shareandprint%2F%3F{{ctx.getQueryStringURL() | encodeURIComponent}}"
                   class="ods-dataset-visualization__social-button ods-dataset-visualization__social-button--facebook"
                   target="_blank">
                    <i class="fa fa-facebook ods-dataset-visualization__social-button-icon" aria-hidden="true"></i>
                </a>
                <a href="https://plus.google.com/share?url=https%3A%2F%2Fuserclub.opendatasoft.com%2Fpages%2Fwidgettrick-shareandprint%2F%3F{{ctx.getQueryStringURL() | encodeURIComponent}}"
                   class="ods-dataset-visualization__social-button ods-dataset-visualization__social-button--google-plus"
                   target="_blank">
                    <i class="fa fa-google-plus ods-dataset-visualization__social-button-icon" aria-hidden="true"></i>
                </a>
                <a href="https://www.linkedin.com/shareArticle?url=https%3A%2F%2Fuserclub.opendatasoft.com%2Fpages%2Fwidgettrick-shareandprint%2F%3F{{ctx.getQueryStringURL() | encodeURIComponent}}&amp;mini=true&amp;title=Opendatasoft Page Test;source=Opendatasoft"
                   class="ods-dataset-visualization__social-button ods-dataset-visualization__social-button--linkedin"
                   target="_blank">
                    <i class="fa fa-linkedin ods-dataset-visualization__social-button-icon" aria-hidden="true"></i>
                </a>
                <a href="mailto:?subject=Opendatasoft Page Test&amp;body=https%3A%2F%2Fuserclub.opendatasoft.com%2Fpages%2Fwidgettrick-shareandprint%2F%3F{{ctx.getQueryStringURL() | encodeURIComponent}}"
                   class="ods-dataset-visualization__social-button ods-dataset-visualization__social-button--mail"
                   target="_blank">
                    <i class="fa fa-envelope ods-dataset-visualization__social-button-icon" aria-hidden="true"></i>
                </a>
            </div>
        </div>
        <div class="row ods-box">
            <h3>
                A dashboard : Global earthquakes
            </h3>
            <div class="col-md-3 ods-box">
                <ods-text-search context="ctx" placeholder="country, type, status..."></ods-text-search>
                <ods-filter-summary context="ctx"></ods-filter-summary>
                <ods-facets context="ctx"></ods-facets>
            </div>
            <div class="col-md-9 ods-box">
                <ods-map>
                    <ods-map-layer context="ctx">
                        <div>
                            <h3>
                                {{ record.fields.volcano_name }}
                            </h3>
                            <p style="font-style:italic; color:grey; font-weight:300">
                                {{ record.fields.country }}
                            </p>
                            <p>Type: {{record.fields.volcano_type}}</p>
                            <p>Status: {{record.fields.status}}</p>
                            <div style="line-height: 0px;">
                                <p>
                                    <span style="font-style:italic;">Has tsunami </span><b
                                       style="font-size:1.2em">{{ record.fields.flag_tsunami }}</b>
                                </p>
                                <p>
                                    <span style="font-style:italic;">Has earthquakes </span><b
                                       style="font-size:1.2em">{{ record.fields.flag_earthquake }}</b>
                                </p>
                            </div>
                            <a style="color: #1e0c33; font-weight: 600; font-size: 1.1em;"
                               href="https://userclub.opendatasoft.com/pages/widgettrick-shareandprint-card?q=country:%22{{ record.fields.country }}%22 AND volcano_name:%22{{ record.fields.volcano_name }}%22"
                               target="_blank">Go to the volcano card</a>
                        </div>
                    </ods-map-layer>
                </ods-map>
                <div class="ods-box">
                    <ods-table context="ctx"></ods-table>
                </div>
            </div>
        </div>
    </ods-dataset-context>
</div>