<div class="container">
    <ods-dataset-context context="ctx"
                         ctx-dataset="principales-depenses-dequipements-issy"
                         ctx-parameters="{'q':'NOT #null(image)'}">

        <div class="row"
             ods-results="records"
             ods-results-context="ctx"
             ods-results-max="12">
            <div class="col-md-4 col-sm-6"
                 ng-repeat="record in records">
                <div class="box white flat">
                    <ods-record-image context="ctx"
                                      record="record"
                                      field="image"
                                      domain-url="https://userclub.opendatasoft.com"></ods-record-image>
                    <!-- domain-url is not necessary if your page is on the same domain than the dataset -->
                    <div class="box-content">
                        <div class="headers">
                            <h3>{{ record.fields.equipements }}</h3>
                            <p>
                                {{ record.fields.description }}
                            </p>
                        </div>
                        <dl class="row">
                            <dt class="col-xs-6 no-mb">Financial year</dt>
                            <dd class="col-xs-6 no-mb">{{ record.fields.exercices }}</dd>

                            <dt ng-if="record.fields.cout_pour_la_ville_en_euros"
                                class="col-xs-6 no-mb">Cost</dt>
                            <dd ng-if="record.fields.cout_pour_la_ville_en_euros"
                                class="col-xs-6 no-mb">{{ record.fields.cout_pour_la_ville_en_euros | number }} €</dd>

                            <dd class="col-xs-12 no-mb mt">
                                <ods-geotooltip record="record"><i class="fa fa-map-pin" aria-hidden="true"></i>
                                    {{ record.fields.adresse || "Location" }}</ods-geotooltip>
                            </dd>
                        </dl>
                    </div>
                </div>
            </div>
        </div>
        <div class="row">
            <ods-pagination-block context="ctx"
                                  per-page="12">
            </ods-pagination-block>
        </div>

    </ods-dataset-context>
</div>