<!--- START - HEADER SCROLLING MENU --->
<ul class="ods-front-header__menu custom-menu">
  <!-- START - CLASSIC MENU ITEM -->
  <li class="custom-menu-item">
    <a href="/explore"
      ><!-- ITEM MENU LINK HERE -->
      <span ng-if="'fr'|currentLanguage">Données</span
      ><!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'en'|currentLanguage">Data</span
      ><!-- ITEM MENU EN TITLE HERE -->
    </a>
  </li>
  <!-- END - CLASSIC MENU ITEM -->
  <!-- START - SCROLLING MENU ITEM -->
  <li
    class="custom-menu-item scrolling-menu"
    ng-init="titre = 'Outils'; title = 'Tools'"
    ng-if="true"
    ng-class="{'custom-menu-item__active': variables.menuState == title}"
  >
    <!-- ITEM MENU FR AND EN TITLES HERE -->
    <a
      href=""
      ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)"
    >
      <span ng-if="'fr'|currentLanguage">{{titre}}</span>
      <span ng-if="'en'|currentLanguage">{{title}}</span>
      <i class="fa fa-angle-down" aria-hidden="true"></i>
    </a>
    <!-- ITEM MENU LINK HERE -->
    <!-- START - SUBMENU -->
    <ul
      class="custom-menu-item-submenu"
      ng-class="{'custom-menu-item-submenu__active': variables.menuState == title}"
    >
      <li class="custom-menu-item-submenu-item">
        <a href="/map"><!-- ITEM SUBMENU LINK HERE -->
          <span ng-if="'fr'|currentLanguage">Cartographe</span><!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Map builder</span><!-- ITEM SUBMENU EN TITLE HERE -->
        </a>
      </li>
      <li class="custom-menu-item-submenu-item">
        <a href="/chart"><!-- ITEM SUBMENU LINK HERE -->
          <span ng-if="'fr'|currentLanguage">Créateur de graphique</span><!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Chart buildez</span><!-- ITEM SUBMENU EN TITLE HERE -->
        </a>
      </li>
    </ul>
    <!-- START - SUBMENU -->
  </li>
  <!-- END - SCROLLING MENU ITEM -->
</ul>
<!--- END - HEADER SCROLLING MENU --->
