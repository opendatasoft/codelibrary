<!--- START - HEADER SCROLLING MENU --->

<ul class="ods-front-header__menu custom-menu">
                <li class="custom-menu-item">
                    <a href="/explore">
                        <span ng-if="'fr'|currentLanguage">Données</span>
                        <span ng-if="'en'|currentLanguage">Data</span>
                    </a>
                </li>

                <li class="custom-menu-item scrolling-menu"
                    ng-init="titre = 'Services'; title = 'Services'"
                    ng-if="true"
                    ng-class="{'custom-menu-item__active': variables.menuState == title}"
                    >
                    <a href=""
                       ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)">
                        <span ng-if="'fr'|currentLanguage">{{titre}}</span>
                        <span ng-if="'en'|currentLanguage">{{title}}</span>
                        <i class="fa fa-angle-down" aria-hidden="true"></i>
                    </a>
                    <ul class="custom-menu-item-submenu"
                        ng-class="{'custom-menu-item-submenu__active': variables.menuState == title}">
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/"> 
                                <span ng-if="'fr'|currentLanguage">Catalogue des services</span>
                                <span ng-if="'en'|currentLanguage">Services catalog</span>
                            </a>
                        </li>
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/">
                                <span ng-if="'fr'|currentLanguage">Calculateur d’itinéraires</span>
                                <span ng-if="'en'|currentLanguage">Trip planner</span>
                            </a>
                        </li>
                    </ul>
                </li>

                <li class="custom-menu-item scrolling-menu"
                    ng-init="titre = 'Contribuer'; title = 'Contribute'"
                    ng-if="true"
                    ng-class="{'custom-menu-item__active': variables.menuState == title}"
                    >
                    <a href=""
                       ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)">
                        <span ng-if="'fr'|currentLanguage">{{titre}}</span>
                        <span ng-if="'en'|currentLanguage">{{title}}</span>
                        <i class="fa fa-angle-down" aria-hidden="true"></i>
                    </a>
                    <ul class="custom-menu-item-submenu"
                        ng-class="{'custom-menu-item-submenu__active': variables.menuState == title}">
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/"> 
                                <span ng-if="'fr'|currentLanguage">Donner votre avis</span>
                                <span ng-if="'en'|currentLanguage">Feedbacks</span>
                            </a>
                        </li>
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/"> 
                                <span ng-if="'fr'|currentLanguage">Soumettre une donnée</span>
                                <span ng-if="'en'|currentLanguage">Submit a data</span>
                            </a>
                        </li>
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/"> 
                                <span ng-if="'fr'|currentLanguage">Soumettre un service</span>
                                <span ng-if="'en'|currentLanguage">Submit a service</span>
                            </a>
                        </li>
                        <li class="custom-menu-item-submenu-item">
                            <a href="/pages/404/"> 
                                <span ng-if="'fr'|currentLanguage">Devenir partenaire</span>
                                <span ng-if="'en'|currentLanguage">Affiliate</span>
                            </a>
                        </li>
                    </ul>
                </li>
            </ul>

            <!--- END - HEADER SCROLLING MENU --->