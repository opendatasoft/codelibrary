<ods-dataset-context context="ctx,ctxregions,ctxdepartements,ctxepcis,ctxcommunes"

                     ctx-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctx-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"
                     ctx-domain="public"

                     ctxregions-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxregions-domain="public"
                     ctxregions-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"
                     ctxdepartements-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxdepartements-domain="public"
                     ctxdepartements-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"
                     ctxepcis-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxepcis-domain="public"
                     ctxepcis-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"
                     ctxcommunes-dataset="demographyref-france-pop-active-sexe-activite-commune-millesime"
                     ctxcommunes-domain="public"
                     ctxcommunes-parameters="{'refine.year':'2017','disjunctive.reg_code':true,'disjunctive.dep_code':true,'disjunctive.epci_code':true,'disjunctive.com_arm_code':true}"

                     ng-init="values = {};
                              selected = {}">

    <div ods-adv-analysis="regions"
         ods-adv-analysis-context="ctxregions"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="reg_code,reg_name"
         ods-adv-analysis-order-by="reg_name"
         ods-adv-analysis-limit="300">
        {{ values.regions = regions; ""}}
    </div>
    <div ng-if="ctxdepartements.parameters['refine.reg_code'].length != 0"
         ods-adv-analysis="departements"
         ods-adv-analysis-context="ctxdepartements"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="dep_code,dep_name"
         ods-adv-analysis-order-by="dep_name"
         ods-adv-analysis-limit="300">
        {{ values.departements = departements; "" }}
    </div>
    <div ng-if="ctxepcis.parameters['refine.dep_code'].length != 0"
         ods-adv-analysis="epcis"
         ods-adv-analysis-context="ctxepcis"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="epci_code,epci_name"
         ods-adv-analysis-order-by="epci_name"
         ods-adv-analysis-limit="300">
        {{ values.epcis = epcis; "" }}
    </div>
    <div ng-if="ctxcommunes.parameters['refine.epci_code'].length != 0"
         ods-adv-analysis="communes"
         ods-adv-analysis-context="ctxcommunes"
         ods-adv-analysis-select="count(*)"
         ods-adv-analysis-group-by="com_arm_code,com_arm_name"
         ods-adv-analysis-order-by="com_arm_name"
         ods-adv-analysis-limit="300">
        {{ values.communes = communes; "" }}
    </div>

    <div class="ods-selects">
        <ods-select selected-values="selected.regions" placeholder="Toutes régions"
                    label-modifier="reg_name"
                    value-modifier="{'code':reg_code,'name':reg_name}"
                    options="values.regions"
                    multiple="false"
                    is-loading="true"
                    on-change="ctx.parameters['refine.com_arm_code'] =
                                   ctx.parameters['refine.epci_code'] =
                                   ctx.parameters['refine.reg_code'] =
                                   ctx.parameters['refine.dep_code'] = []"></ods-select>
        {{
        ctxcommunes.parameters['refine.reg_code'] =
        ctxepcis.parameters['refine.reg_code'] =
        ctxdepartements.parameters['refine.reg_code'] =
        ctx.parameters['refine.reg_code'] =
        (selected.regions | toObject:'code' | keys);
        ""}}
        <ods-select disabled="ctxdepartements.parameters['refine.reg_code'].length == 0"
                    selected-values="selected.departements" placeholder="Tout départements"
                    label-modifier="dep_name"
                    value-modifier="{'code':dep_code,'name':dep_name}"
                    options="values.departements"
                    multiple="false"
                    is-loading="true"
                    on-change="ctx.parameters['refine.com_arm_code'] =
                                   ctx.parameters['refine.epci_code'] =
                                   ctx.parameters['refine.reg_code'] =
                                   ctx.parameters['refine.dep_code'] = []"></ods-select>
        {{
        ctxcommunes.parameters['refine.dep_code'] =
        ctxepcis.parameters['refine.dep_code'] =
        ctx.parameters['refine.dep_code'] =
        (selected.departements | toObject:'code' | keys);
        ""}}
        <ods-select disabled="ctxepcis.parameters['refine.dep_code'].length == 0"
                    selected-values="selected.epcis" placeholder="Tout EPCIs"
                    label-modifier="epci_name"
                    value-modifier="{'code':epci_code,'name':epci_name}"
                    options="values.epcis"
                    multiple="false"
                    is-loading="true"
                    on-change="ctx.parameters['refine.com_arm_code'] =
                                   ctx.parameters['refine.epci_code'] =
                                   ctx.parameters['refine.reg_code'] =
                                   ctx.parameters['refine.dep_code'] = []"></ods-select>
        {{
        ctxcommunes.parameters['refine.epci_code'] =
        ctx.parameters['refine.epci_code'] =
        (selected.epcis | toObject:'code' | keys);
        ""}}
        <ods-select disabled="ctxcommunes.parameters['refine.epci_code'].length == 0"
                    selected-values="selected.communes" placeholder="Toutes communes"
                    label-modifier="com_arm_name"
                    value-modifier="{'code':com_arm_code,'name':com_arm_name}"
                    options="values.communes"
                    multiple="false"
                    is-loading="true"
                    on-change="ctx.parameters['refine.com_arm_code'] =
                                   ctx.parameters['refine.epci_code'] =
                                   ctx.parameters['refine.reg_code'] =
                                   ctx.parameters['refine.dep_code'] = []"></ods-select>
        {{
        ctx.parameters['refine.com_arm_code'] =
        (selected.communes | toObject:'code' | keys);
        ""}}
    </div>
<div ng-if="selected.regions.length > 0 ||
                       selected.departements.length > 0 ||
                       selected.epcis.length > 0 ||
                       selected.communes.length > 0">
    <button class="clear-filters-button"
            ng-click="selected.regions.length = 0;
                          selected.departements.length = 0;
                          selected.epcis.length = 0;
                          selected.communes.length = 0;
                          values.departements.length = 0;
                          values.epcis.length = 0;
                          values.communes.length = 0;">
        Reset selection
    </button>
    <i class="fa fa-times-circle" aria-hidden="true"></i>
    </div>
    <h2>Structure de la population, par CSP et activité, en 2017</h2>
    <ods-chart align-month="true">
        <ods-chart-query context="ctx" field-x="year" maxpoints="0" series-breakdown="variable_label">
            <ods-chart-serie expression-y="value" color="Paired" chart-type="column"
                             label-y="Nombre de personnes" function-y="SUM" scientific-display="true">
            </ods-chart-serie>
        </ods-chart-query>
    </ods-chart>
</ods-dataset-context>
