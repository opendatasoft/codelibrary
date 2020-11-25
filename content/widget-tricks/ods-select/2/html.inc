<div class="container">
    <ods-dataset-context context="ushospitals"
                         ushospitals-dataset="us-hospitals"
                         ushospitals-parameters="{'disjunctive.type':true}">
        <div ods-facet-results="typelist"
             ods-facet-results-facet-name="type"
             ods-facet-results-context="ushospitals">
            <h4>
                Type of hospitals
            </h4>
            <ods-select options="typelist"
                        selected-values="ushospitals.parameters['refine.type']"
                        label-modifier="name + ' - ' + (count | number) + ' hospitals'"
                        value-modifier="name"
                        placeholder="Select a type"></ods-select>
            <br/>
            <ods-map context="ushospitals" scroll-wheel-zoom="false" location="4,38.37612,-106.69922"
                     basemap="jawg.streets"></ods-map>
        </div>
    </ods-dataset-context>
</div>