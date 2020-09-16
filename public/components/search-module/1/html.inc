<ods-dataset-context context="worldheritagelistpublicus"
                     worldheritagelistpublicus-dataset="world-heritage-list"
                     worldheritagelistpublicus-domain="public-us"
                     worldheritagelistpublicus-parameters="{'disjunctive.states':true,'sort':'date_inscribed'}">
    <div class="search-module">
        <i class="fa fa-search search-module-icon" aria-hidden="true"></i>
        <input placeholder="Search in dataset"
               ng-model="worldheritagelistpublicus.parameters['q']"
               ng-model-options="{ updateOn: 'keyup', debounce: { 'default': 300, 'blur': 0 }}"
               class="search-module-input"
               type="text"/>
        <button class="search-module-clear"
                ng-if="worldheritagelistpublicus.parameters['q']"
                ng-click="worldheritagelistpublicus.parameters['q'] = undefined">
            <i class="fa fa-times-circle" aria-hidden="true"></i>
        </button>
    </div>
    <ods-table context="worldheritagelistpublicus" sort="date_inscribed"></ods-table>
</ods-dataset-context>
