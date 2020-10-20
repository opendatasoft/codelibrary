<div class="ods-box donotcopy-specific"
     ng-init="donotcopy = { 'simulaterefineonclick' : false}">
    <div class="map-drawer-container"
         ng-class="{
                   'map-drawer-container--active': donotcopy.simulaterefineonclick,
                   'map-drawer-container--active-full': drawer.status}"
         ng-init="drawer = {'status':false}">
        <div class="map-drawer-container__map">
            <div class="map-drawer-container__backdrop"
                 ng-click="donotcopy.simulaterefineonclick = undefined;
                           drawer.status = false"
                 ng-class="{'map-drawer-container__backdrop--active': donotcopy.simulaterefineonclick }">
            </div>
            <h1>
                Map
            </h1>
            <div class="ods-button"
                 ng-click="donotcopy.simulaterefineonclick = true">Refine-on-click</div>
        </div>
        <div class="map-drawer-container__info">
            <h2>
                General info here
            </h2>
        </div>
        <div class="map-drawer-container__drawer map-drawer-container__drawer__partial">
            <div class="map-drawer-container__drawer__close"
                 ng-click="donotcopy.simulaterefineonclick = undefined;
                           drawer.status = false">
                <i class="fa fa-times"></i>
            </div>
            <h2>
                Specific info here
            </h2>
            <div class="ods-button"
                 ng-click="drawer.status = !drawer.status">
                Expend / See more
            </div>
        </div>
        <div class="map-drawer-container__drawer map-drawer-container__drawer__full">
            <h2>
                More info here
            </h2>
        </div>
    </div>
</div>
      
