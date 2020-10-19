<div class="ods-box">
    <ods-dataset-context context="ctx"
                         ctx-dataset="chrono_issy0"
                         ctx-domain="issy-les-moulineaux"
                         ctx-parameters="{'sort':'annee'}">

        <ods-infinite-scroll-results context="ctx"
                                     scroll-top-when-refresh="false"
                                     list-class="timeline-frame"
                                     result-class="timeline-item"
                                     no-results-message="No more event...">

            {{ url = 'https://issy-les-moulineaux.opendatasoft.com/explore/dataset/' + item.datasetid + '/files/' + item.fields.imagecsv.id + '/300/' ; "" }}

            <div class="timeline-img" style=""></div>

            <div class="timeline-content timeline-card">
                <div class="timeline-img-header"
                     ng-class="{'no-img' : !item.fields.imagecsv}"
                     style="{{ 'background: linear-gradient(rgba(0,0,0,0), rgba(0,0,0, .4)), url(' + url + ') center center no-repeat;
                            background-size: cover;' }}">
                    <h2>{{ item.fields.evenement }}</h2>
                </div>

                <div class="date">
                    <span ng-if="item.fields.jour">{{ item.fields.jour }} </span>
                    <span ng-if="item.fields.mois"> {{item.fields.mois }} </span>
                    {{ item.fields.annee }}
                </div>
                <p>{{ item.fields.description }}</p>
                <div class="timeline-bottom">
                    <a class="bnt-more"
                       target="_blank"
                       ng-href="{{ item.fields.web }}">Know more <i class="fa fa-external-link" aria-hidden="true"></i></a>
                    <div class="timeline-geo">
                        <i class="fa fa-map-marker" aria-hidden="true"></i>
                        <ods-geotooltip coords="item.fields.coordonnees_geo"
                                        record="item"
                                        width="300"
                                        height="300">
                            {{ item.fields.numero }} {{ item.fields.adresse }}<br/>{{ item.fields.ville }}
                        </ods-geotooltip>
                    </div>
                </div>
            </div>

        </ods-infinite-scroll-results>
    </ods-dataset-context>
</div>
