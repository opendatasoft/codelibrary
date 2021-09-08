<ods-dataset-context context="ctx"
                     ctx-dataset="evenements-publics-cibul" 
                     ctx-domain="public"
                     ctx-parameters="{'sort':'-date_start'}">
    <h3>
        Date de début de l'événement
    </h3>
    <ods-date-range-slider context="ctx"
                           date-format="DD MMM YYYY"
                           initial-from="2018/01/01"
                           initial-to="2019/01/01"
                           date-field="date_start"
                           start-bound="'2017/01/01'"
                           end-bound="'now'">
    </ods-date-range-slider>
    <div class="row">
        <div class="col-md-12">
            <ods-table context="ctx"></ods-table>
        </div>
    </div>
</ods-dataset-context>
