<ods-dataset-context context="listedespersonnesdecedeesenfrancepublic,hommesdecedes,lareunion"
                     listedespersonnesdecedeesenfrancepublic-dataset="liste-des-personnes-decedees-en-france@public"
                     lareunion-dataset="liste-des-personnes-decedees-en-france-collectees-depuis-1970@lareunion"
                     lareunion-parameters="{'refine.birth_date':'1900'}">

    <div ods-aggregation="deces,deces1900"
         ods-aggregation-deces-context="listedespersonnesdecedeesenfrancepublic"
         ods-aggregation-deces-function="COUNT"
         ods-aggregation-deces1900-context="lareunion"
         ods-aggregation-deces1900-function="COUNT">
        <div class="container">
            <div class="row row-equal-height">
                <div class="col-md-4">
                    <div ng-init="values = {'from':0,'nbticks':40,'delay':100}"
                         class="kpi-card">
                        <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                        <div>
                            <ods-timer stop-condition="values.from >= deces"
                                       delay="values.delay"
                                       auto-start="true"
                                       exec="values.from = (((values.from + ((deces || 0) / values.nbticks)) * 100) | math : 'round') / 100">
                            </ods-timer>
                            <h2 class="kpi-title">
                                {{ values.from | number : 0 }}
                            </h2>
                        </div>
                        <p class="kpi-description">
                            personnes décédées en France depuis 1970
                        </p>
                    </div>
                </div>
                <div class="col-md-4">
                    <div ng-init="values1 = {'from':0,'nbticks':10,'delay':100}"
                         class="kpi-card">
                        <i class="kpi-icon fa fa-hospital-o" aria-hidden="true"></i>
                        <div>
                            <ods-timer stop-condition="values1.from >= deces1900"
                                       delay="values1.delay"
                                       auto-start="true"
                                       exec="values1.from = values1.from + ((deces1900 || 0) / values1.nbticks);">
                            </ods-timer>
                            <h2 class="kpi-title">
                                {{ values1.from | number:0 }}
                            </h2>
                        </div>
                        <p class="kpi-description">
                            personnes décédées à la Réunion en 1900
                        </p>
                    </div>
                </div>
            </div>
        </div>
    </div>
</ods-dataset-context>
