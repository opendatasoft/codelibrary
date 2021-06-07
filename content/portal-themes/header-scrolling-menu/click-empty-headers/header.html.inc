<div class="portal-navigation">
  <ul class="ods-front-header__menu">
    <li class="ods-front-header__menu-item">
      <a href="/explore" class="ods-front-header__menu-item-link">
        <span ng-if="'fr'|currentLanguage">Données</span>
        <span ng-if="'en'|currentLanguage">Data</span>
      </a>
    </li>

    <li
      class="ods-front-header__menu-item scrolling-menu"
      ng-init="titre = 'Outils'; title = 'Tools'"
      ng-if="true"
    >
      <a
        class="ods-front-header__menu-item-link"
        href=""
        ng-class="{'ods-front-header__menu-item-link--active': variables.menuState == title}"
        ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)"
      >
        <span ng-if="'fr'|currentLanguage">{{titre}}</span>
        <span ng-if="'en'|currentLanguage">{{title}}</span>
        <i class="fa fa-angle-down" aria-hidden="true"></i>
      </a>
      <ul
        class="scrolling-menu-submenu"
        ng-class="{'scrolling-menu-submenu__active': variables.menuState == title}"
      >
        <li class="scrolling-menu-submenu-item">
          <a href="/map">
            <span ng-if="'fr'|currentLanguage">Cartographe</span>
            <span ng-if="'en'|currentLanguage">Map builder</span>
          </a>
        </li>
        <li class="scrolling-menu-submenu-item">
          <a href="/chart">
            <span ng-if="'fr'|currentLanguage">Créateur de graphique</span>
            <span ng-if="'en'|currentLanguage">Chart builder</span>
          </a>
        </li>
      </ul>
    </li>
    <li
      class="ods-front-header__menu-item scrolling-menu"
      ng-init="titre = 'Développeurs'; title = 'Developers'"
      ng-if="true"
    >
      <a
        class="ods-front-header__menu-item-link"
        ng-class="{'ods-front-header__menu-item-link--active': variables.menuState == title}"
        href=""
        ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)"
      >
        <span ng-if="'fr'|currentLanguage">{{titre}}</span>
        <span ng-if="'en'|currentLanguage">{{title}}</span>
        <i class="fa fa-angle-down" aria-hidden="true"></i>
      </a>
      <ul
        class="scrolling-menu-submenu"
        ng-class="{'scrolling-menu-submenu__active': variables.menuState == title}"
      >
        <li class="scrolling-menu-submenu-item">
          <a href="/pages/404/">
            <span ng-if="'fr'|currentLanguage">Documentation API</span>
            <span ng-if="'en'|currentLanguage">API Documentation</span>
          </a>
        </li>
        <li class="scrolling-menu-submenu-item">
          <a href="/pages/404/">
            <span ng-if="'fr'|currentLanguage">Code Library</span>
            <span ng-if="'en'|currentLanguage">Code Library</span>
          </a>
        </li>
        <li class="scrolling-menu-submenu-item">
          <a href="/pages/404/">
            <span ng-if="'fr'|currentLanguage">ODS Github</span>
            <span ng-if="'en'|currentLanguage">ODS Github</span>
          </a>
        </li>
        <li class="scrolling-menu-submenu-item">
          <a href="/pages/404/">
            <span ng-if="'fr'|currentLanguage">Devenir partenaire</span>
            <span ng-if="'en'|currentLanguage">Affiliate</span>
          </a>
        </li>
      </ul>
    </li>
  </ul>
</div>
