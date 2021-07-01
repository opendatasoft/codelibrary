<ul class="ods-front-header__menu"
    ng-init="variables = { 'menuState' : false }">
  <!-- START - CLASSIC MENU ITEM -->
  <li class="ods-front-header__menu-item">
    <!-- ITEM MENU LINK HERE -->
    <a href="/explore" class="ods-front-header__menu-item-link">
      <!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'fr'|currentLanguage">Données</span>
      <!-- ITEM MENU EN TITLE HERE -->
      <span ng-if="'en'|currentLanguage">Data</span>
    </a>
  </li>
  <!-- END - CLASSIC MENU ITEM -->
  <!-- START - DROPDOWN MENU ITEM -->
  <!-- ITEM MENU FR AND EN TITLES HERE -->
  <li class="ods-front-header__menu-item dropdown-menu"
      ng-init="titre = 'Outils'; title = 'Tools'"
      ng-if="true">
    <!-- ITEM MENU LINK HERE -->
    <a class="ods-front-header__menu-item-link"
       href="#"
       ng-class="{'ods-front-header__menu-item-link--active': variables.menuState == title}"
       ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)">
      <span ng-if="'fr'|currentLanguage">{{titre}}</span>
      <span ng-if="'en'|currentLanguage">{{title}}</span>
      <i class="fa fa-angle-down" aria-hidden="true"></i>
    </a>
    <!-- START - SUBMENU -->
    <ul class="dropdown-menu-submenu"
        ng-class="{'dropdown-menu-submenu__active': variables.menuState == title}">
      <li class="dropdown-menu-submenu-item">
        <!-- ITEM SUBMENU LINK HERE -->
        <a href="/map">
          <!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'fr'|currentLanguage">Cartographe</span>
          <!-- ITEM SUBMENU EN TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Map builder</span>
        </a>
      </li>
      <li class="dropdown-menu-submenu-item">
        <!-- ITEM SUBMENU LINK HERE -->
        <a href="/chart">
          <!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'fr'|currentLanguage">Créateur de graphique</span>
          <!-- ITEM SUBMENU EN TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Chart builder</span>
        </a>
      </li>
    </ul>
    <!-- END - SUBMENU -->
  </li>
  <!-- END - DROPDOWN MENU ITEM -->
</ul>
