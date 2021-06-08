<div class="portal-navigation" ng-init="variables = { 'menuState' : false }">
  <ul class="ods-front-header__menu">
    <!-- START - CLASSIC MENU ITEM -->
    <li class="ods-front-header__menu-item">
      <a href="/explore" class="ods-front-header__menu-item-link"><!-- ITEM MENU LINK HERE -->
        <span ng-if="'fr'|currentLanguage">Données</span>
        <!-- ITEM MENU FR TITLE HERE -->
        <span ng-if="'en'|currentLanguage">Data</span
        ><!-- ITEM MENU EN TITLE HERE -->
      </a>
    </li>
    <!-- END - CLASSIC MENU ITEM -->
    <!-- START - SCROLLING MENU ITEM -->
    <li
      class="ods-front-header__menu-item scrolling-menu"
      ng-init="titre = 'Outils'; title = 'Tools'"
      ng-if="true">
      <!-- ITEM MENU FR AND EN TITLES HERE -->
      <a
        class="ods-front-header__menu-item-link"
        href="#"
        ng-class="{'ods-front-header__menu-item-link--active': variables.menuState == title}"
        ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)">
        <span ng-if="'fr'|currentLanguage">{{titre}}</span>
        <span ng-if="'en'|currentLanguage">{{title}}</span>
        <i class="fa fa-angle-down" aria-hidden="true"></i>
      </a>
      <!-- ITEM MENU LINK HERE -->
      <!-- START - SUBMENU -->
      <ul
        class="scrolling-menu-submenu"
        ng-class="{'scrolling-menu-submenu__active': variables.menuState == title}"
      >
        <li class="scrolling-menu-submenu-item">
          <a href="/map"
            ><!-- ITEM SUBMENU LINK HERE -->
            <span ng-if="'fr'|currentLanguage">Cartographe</span
            ><!-- ITEM SUBMENU FR TITLE HERE -->
            <span ng-if="'en'|currentLanguage">Map builder</span
            ><!-- ITEM SUBMENU EN TITLE HERE -->
          </a>
        </li>
        <li class="scrolling-menu-submenu-item">
          <a href="/chart"
            ><!-- ITEM SUBMENU LINK HERE -->
            <span ng-if="'fr'|currentLanguage">Créateur de graphique</span
            ><!-- ITEM SUBMENU FR TITLE HERE -->
            <span ng-if="'en'|currentLanguage">Chart builder</span
            ><!-- ITEM SUBMENU EN TITLE HERE -->
          </a>
        </li>
      </ul>
      <!-- END - SUBMENU -->
    </li>
    <!-- END - SCROLLING MENU ITEM -->
  </ul>
</div>
