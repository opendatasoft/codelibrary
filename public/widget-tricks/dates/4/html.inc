<ods-dataset-context context="menuscantines"
                     menuscantines-dataset="menus-cantines"
                     menuscantines-domain="rennes-metropole"
                     menuscantines-parameters="{'sort':'-date','refine.secteur':'1'}"
                     ng-init="weekselect = 0">
    <div class="container app">
        {{ menuscantines.parameters['q'] = "date:[#now(weeks=" + (weekselect - 1) + ",weekday=6) TO #now(weeks=" +
        (weekselect) + ",weekday=4)]"; ""
        }}
        <div class="weeks-selects">
            <div class="week-select" ng-class="{'week-selected': weekselect == -1}"
                 ng-click="weekselect = -1">
                Past week
            </div>
            <div class="week-select" ng-class="{'week-selected': weekselect == 0}"
                 ng-click="weekselect = 0">
                Current week
            </div>
            <div class="week-select" ng-class="{'week-selected': weekselect == 1}"
                 ng-click="weekselect = 1">
                Next week
            </div>
        </div>
        <ul class="menus">
            <li>
                <div class="ods-box canteenmenu-ods-box header">
                    <div class="logos">
                        <img src="https://discovery.opendatasoft.com/assets/theme_image/rennes_logo.png"/>
                    </div>
                    <h1>
                        School canteen menu <br/>
                        City of Rennes
                    </h1>
                    <div class="row items">
                        <div class="item type">
                            <h2>
                                Starter
                            </h2>
                        </div>
                        <div class="item type">
                            <h2>
                                Main course
                            </h2>
                        </div>
                        <div class="item type">
                            <h2>
                                Vegetables
                            </h2>
                        </div>
                        <div class="item type">
                            <h2>
                                Dairy
                            </h2>
                        </div>
                        <div class="item type">
                            <h2>
                                Desert
                            </h2>
                        </div>
                        <div class="item type">
                            <h2>
                                Snack
                            </h2>
                        </div>
                    </div>
                </div>
            </li>
            <li ng-repeat="menu in menus"
                ods-results="menus"
                ods-results-context="menuscantines"
                class="menu">
                <div class="ods-box">
                    <h2>
                        <span class="stronger">{{ menu.fields.date | date : 'fullDate' | capitalize }}</span>
                    </h2>
                    <div class="row items">
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.entree }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_entree }}
            </h3-->
                                <img ng-if="menu.fields.code_entree.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_entree.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_entree.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_entree.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.plat }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_plat }}
            </h3-->
                                <img ng-if="menu.fields.code_plat.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_plat.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_plat.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_plat.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.legumes }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_legumes }}
            </h3-->
                                <img ng-if="menu.fields.code_legumes.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_legumes.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_legumes.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_legumes.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.laitage }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_laitage }}
            </h3-->
                                <img ng-if="menu.fields.code_laitage.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_laitage.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_laitage.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_laitage.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.dessert }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_dessert }}
            </h3-->
                                <img ng-if="menu.fields.code_dessert.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_dessert.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_dessert.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_dessert.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                        <div class="item plat">
                            <h3>
                                {{ menu.fields.gouter }}
                            </h3>
                            <div class="item logo">
                                <!--h3>
                {{ menu.fields.code_gouter }}
            </h3-->
                                <img ng-if="menu.fields.code_gouter.indexOf('AB') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ab.png"/>
                                <img ng-if="menu.fields.code_gouter.indexOf('VBF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vbf.png"/>
                                <img ng-if="menu.fields.code_gouter.indexOf('VPF') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/vpf.png"/>
                                <img ng-if="menu.fields.code_gouter.indexOf('EBR') >= 0"
                                     src="https://discovery.opendatasoft.com/assets/theme_image/ebr.jpg"/>
                            </div>
                        </div>
                    </div>
                    <div class="row items">
                    </div>
                </div>
            </li>
        </ul>
    </div>
</ods-dataset-context>
