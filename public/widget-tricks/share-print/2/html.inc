<div class="ods-box card">
    <h2>
        Record store card <span style="font-size:0.7em; color:darkred; margin-left:40px">Print it (Ctrl/Cmd+P) or just share the link !</span>
    </h2>
    <ods-dataset-context context="ctx"
                         ctx-dataset="record-stores"
                         ctx-urlsync="true">
        <div ng-repeat="item in items" ods-results="items" ods-results-context="ctx" ods-results-max="1">
            <ul class="field-list">
                <li class="field" ng-repeat="field in ctx.dataset.fields">
                    <p class="label">
                        {{ field.label }}
                    </p>
                    <p class="value">
                        {{ item.fields[field.name] }}
                    </p>
                </li>
            </ul>
        </div>
        <ods-map context="ctx"></ods-map>
    </ods-dataset-context>
</div>
