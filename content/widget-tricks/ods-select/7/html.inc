<div class="container">
    <ods-dataset-context context="ctx,ctxregions,ctxdepartements,ctxepcis,ctxcommunes" 
                         ctx-dataset="demographyref-france-pop-legale-commune-arrondissement-municipal"
                         ctx-parameters="{'disjunctive.code_officiel_region':true,'disjunctive.code_officiel_departement':true,'disjunctive.code_officiel_epci':true,'disjunctive.code_officiel_commune_arrondissement_municipal':true}"
                         ctx-domain="userclub"
                         ctxregions-dataset="demographyref-france-pop-legale-commune-arrondissement-municipal"
                         ctxregions-domain="userclub"
                         ctxregions-parameters="{'disjunctive.code_officiel_region':true,'disjunctive.code_officiel_departement':true,'disjunctive.code_officiel_epci':true,'disjunctive.code_officiel_commune_arrondissement_municipal':true}"
                         ctxdepartements-dataset="demographyref-france-pop-legale-commune-arrondissement-municipal"
                         ctxdepartements-domain="userclub"
                         ctxdepartements-parameters="{'disjunctive.code_officiel_region':true,'disjunctive.code_officiel_departement':true,'disjunctive.code_officiel_epci':true,'disjunctive.code_officiel_commune_arrondissement_municipal':true}"
                         ctxepcis-dataset="demographyref-france-pop-legale-commune-arrondissement-municipal"
                         ctxepcis-domain="userclub"
                         ctxepcis-parameters="{'disjunctive.code_officiel_region':true,'disjunctive.code_officiel_departement':true,'disjunctive.code_officiel_epci':true,'disjunctive.code_officiel_commune_arrondissement_municipal':true}"
                         ctxcommunes-dataset="demographyref-france-pop-legale-commune-arrondissement-municipal"
                         ctxcommunes-domain="userclub"
                         ctxcommunes-parameters="{'disjunctive.code_officiel_region':true,'disjunctive.code_officiel_departement':true,'disjunctive.code_officiel_epci':true,'disjunctive.code_officiel_commune_arrondissement_municipal':true}">
        <div class="ods-selects">
            <div ods-adv-analysis="regions" ods-adv-analysis-context="ctx" ods-adv-analysis-select="count(*)"
                 ods-adv-analysis-group-by="code_officiel_region,nom_officiel_region" ods-adv-analysis-order-by="nom_officiel_region" ods-adv-analysis-limit="10000">
                <ods-select selected-values="selected.regions" placeholder="Toutes régions"
                            label-modifier="nom_officiel_region"
                            value-modifier="{'code':code_officiel_region,'name':nom_officiel_region}" 
                            options="regions" 
                            multiple="true"
                            is-loading="true"
                            on-change="ctx.parameters['refine.code_officiel_commune_arrondissement_municipal']=ctx.parameters['refine.code_officiel_epci']=ctx.parameters['refine.code_officiel_region']=ctx.parameters['refine.code_officiel_departement'] = []"></ods-select>
                {{ctxcommunes.parameters['refine.code_officiel_region'] = ctxepcis.parameters['refine.code_officiel_region'] = ctxdepartements.parameters['refine.code_officiel_region']= ctx.parameters['refine.code_officiel_region']=(selected.regions | toObject:'code' | keys);""}}
            </div>
            <div 
                 ods-adv-analysis="departements" ods-adv-analysis-context="ctx" ods-adv-analysis-select="count(*)"
                 ods-adv-analysis-group-by="code_officiel_departement,nom_officiel_departement" ods-adv-analysis-order-by="nom_officiel_departement" ods-adv-analysis-limit="10000">
                <ods-select disabled="ctxdepartements.parameters['refine.code_officiel_region'].length==0"
                            selected-values="selected.departements" placeholder="Tout départements"
                            label-modifier="nom_officiel_departement"
                            value-modifier="{'code':code_officiel_departement,'name':nom_officiel_departement}" 
                            options="departements" 
                            multiple="true"
                            is-loading="true"
                            on-change="ctx.parameters['refine.code_officiel_commune_arrondissement_municipal']=ctx.parameters['refine.code_officiel_epci']=ctx.parameters['refine.code_officiel_region']=ctx.parameters['refine.code_officiel_departement'] = []"></ods-select>
                {{ctxcommunes.parameters['refine.code_officiel_departement']= ctxepcis.parameters['refine.code_officiel_departement']= ctx.parameters['refine.code_officiel_departement']=(selected.departements | toObject:'code' | keys);""}}
            </div>
            <div 
                 ods-adv-analysis="epcis" ods-adv-analysis-context="ctx" ods-adv-analysis-select="count(*)"
                 ods-adv-analysis-group-by="code_officiel_epci,nom_officiel_epci" ods-adv-analysis-order-by="nom_officiel_epci" ods-adv-analysis-limit="10000">
                <ods-select disabled="ctxepcis.parameters['refine.code_officiel_departement'].length==0"
                            selected-values="selected.epcis" placeholder="Tout EPCIs"
                            label-modifier="nom_officiel_epci"
                            value-modifier="{'code':code_officiel_epci,'name':nom_officiel_epci}" 
                            options="epcis" 
                            multiple="true"
                            is-loading="true"
                            on-change="ctx.parameters['refine.code_officiel_commune_arrondissement_municipal']=ctx.parameters['refine.code_officiel_epci']=ctx.parameters['refine.code_officiel_region']=ctx.parameters['refine.code_officiel_departement'] = []"></ods-select>
                {{ctxcommunes.parameters['refine.code_officiel_epci'] = ctx.parameters['refine.code_officiel_epci']=(selected.epcis | toObject:'code' | keys);""}}
            </div>
            <div ods-adv-analysis="communes" ods-adv-analysis-context="ctx" ods-adv-analysis-select="count(*)"
                 ods-adv-analysis-group-by="code_officiel_commune_arrondissement_municipal,nom_officiel_commune_arrondissement_municipal" ods-adv-analysis-order-by="nom_officiel_commune_arrondissement_municipal" ods-adv-analysis-limit="10000">
                <ods-select disabled="ctxcommunes.parameters['refine.code_officiel_departement'].length==0"
                            selected-values="selected.communes" placeholder="Toutes communes"
                            label-modifier="nom_officiel_commune_arrondissement_municipal"
                            value-modifier="{'code':code_officiel_commune_arrondissement_municipal,'name':nom_officiel_commune_arrondissement_municipal}" 
                            options="communes" 
                            multiple="true"
                            is-loading="true"
                            on-change="ctx.parameters['refine.code_officiel_commune_arrondissement_municipal']=ctx.parameters['refine.code_officiel_epci']=ctx.parameters['refine.code_officiel_region']=ctx.parameters['refine.code_officiel_departement'] = []"></ods-select>
                {{ctx.parameters['refine.code_officiel_commune_arrondissement_municipal']=(selected.communes | toObject:'code' | keys);""}}
            </div>
        </div>
        <div class="ods-box">
        <h2>Top 10 Population par commune</h2>
            <ods-chart align-month="true">
                <ods-chart-query context="ctx" field-x="nom_officiel_commune_arrondissement_municipal" maxpoints="20" sort="serie1-1">
                    <ods-chart-serie expression-y="population_municipale" chart-type="column" function-y="SUM" label-y="Population" color="#00C7B1" display-units="false" display-values="true" scientific-display="true">
                    </ods-chart-serie>
                </ods-chart-query>
            </ods-chart>
        </div>
    </ods-dataset-context>
</div>
