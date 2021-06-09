<!--- START - HEADER SCROLLING MENU --->
<ul class="ods-front-header__menu custom-menu">
  <!-- START - CLASSIC MENU ITEM -->
  <li class="custom-menu-item">
    <!-- ITEM MENU LINK HERE -->
    <a href="/explore">
      <!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'fr'|currentLanguage">Données</span>
      <!-- ITEM MENU EN TITLE HERE -->
      <span ng-if="'en'|currentLanguage">Data</span>
    </a>
  </li>
  <!-- END - CLASSIC MENU ITEM -->
  <!-- START - SCROLLING MENU ITEM -->
  <!-- ITEM MENU FR AND EN TITLES HERE -->
  <li
    class="custom-menu-item scrolling-menu"
    ng-init="titre = 'Outils'; title = 'Tools'"
    ng-if="true"
    ng-class="{'custom-menu-item__active': variables.menuState == title}"
  >
    <!-- ITEM MENU LINK HERE -->
    <a
      href=""
      ng-click="variables.menuState = (variables.menuState == title ? variables.menuState = false : variables.menuState = title)"
    >
      <!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'fr'|currentLanguage">{{titre}}</span>
      <!-- ITEM MENU EN TITLE HERE -->
      <span ng-if="'en'|currentLanguage">{{title}}</span>
      <i class="fa fa-angle-down" aria-hidden="true"></i>
    </a>
    <!-- START - SUBMENU -->
    <ul
      class="custom-menu-item-submenu"
      ng-class="{'custom-menu-item-submenu__active': variables.menuState == title}"
    >
      <li class="custom-menu-item-submenu-item">
        <!-- ITEM SUBMENU LINK HERE -->
        <a href="/map">
          <!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'fr'|currentLanguage">Cartographe</span>
          <!-- ITEM SUBMENU EN TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Map builder</span>
        </a>
      </li>
      <li class="custom-menu-item-submenu-item">
        <!-- ITEM SUBMENU LINK HERE -->
        <a href="/chart">
          <!-- ITEM SUBMENU FR TITLE HERE -->
          <span ng-if="'fr'|currentLanguage">Créateur de graphique</span>
          <!-- ITEM SUBMENU EN TITLE HERE -->
          <span ng-if="'en'|currentLanguage">Chart buildez</span>
        </a>
      </li>
    </ul>
    <!-- END - SUBMENU -->
  </li>
  <!-- END - SCROLLING MENU ITEM -->
</ul>
<!--- END - HEADER SCROLLING MENU --->
