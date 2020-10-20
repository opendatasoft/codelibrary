<ods-dataset-context context="ctx"
                     ctx-dataset="us-hospitals"
                     ctx-domain="userclub">
    <div class="fullpage-app"
         ng-init="modalswitchstatus">

        <!-- THE RIGHT MODAL -->
        <div class="rightmodal">
            <div class="backdrop"
                 ng-click="modalswitchstatus = !modalswitchstatus"
                 ng-class="{'backdrop-active':modalswitchstatus}">
            </div>
            <div class="modal"
                 ng-class="{'modal-active':modalswitchstatus}">
                <div class="modal__rightside">
                    <div class="modal__header"
                         ng-click="modalswitchstatus = !modalswitchstatus">
                        <a href="#"
                           class="closebtn">
                            Close <i class="fa fa-times-circle" aria-hidden="true"></i>
                        </a>
                    </div>
                    <div class="modal__content">
                        <ods-facets context="ctx"></ods-facets>
                    </div>
                    <div class="modal__footer">
                        <div class="">
                            Footer
                        </div>
                    </div>
                </div>
            </div>
        </div>

        <!-- THE CONTENT -->
        <div class="content container">
            <div class="level">
                <h2>
                    Page content
                </h2>
                <button ng-click="modalswitchstatus = !modalswitchstatus">
                    Filtrer data
                </button>
            </div>
            <ods-filter-summary context="ctx">
                {{ refinements }}
            </ods-filter-summary>
            <ods-table context="ctx"></ods-table>
        </div>

    </div>
</ods-dataset-context>