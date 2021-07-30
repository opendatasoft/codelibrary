<ods-dataset-context context="belgiumstatisticaldistricts"
                     belgiumstatisticaldistricts-dataset="belgium-statistical-districts"
                     belgiumstatisticaldistricts-domain="userclub">
    <h3>3 column fixed for wide screen, 1 column fixed when the table is reduced</h3>
    <div ods-get-element-layout="tablelayout">
        <ods-table context="belgiumstatisticaldistricts"
                   class="darkerfixed"
                   ng-class="{'sticky-col-1': tablelayout.width < 800, 'sticky-col-3': tablelayout.width >= 800}"></ods-table>
    </div>
</ods-dataset-context>