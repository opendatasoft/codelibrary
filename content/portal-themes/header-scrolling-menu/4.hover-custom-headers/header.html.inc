<!--- START - HEADER SCROLLING MENU --->
<ul class="ods-front-header__menu custom-menu">
  <!-- START - CLASSIC MENU ITEM -->
  <li class="ods-front-header__menu-item" title="Accéder aux données">
    <!-- ITEM MENU LINK HERE -->
    <a href="#" class="ods-front-header__menu-item-link">
      <!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'fr'|currentLanguage">Données</span>
      <!-- ITEM MENU EN TITLE HERE -->
      <span ng-if="'en'|currentLanguage">Data</span>
    </a>
  </li>
  <!-- END - CLASSIC MENU ITEM -->
  <!-- START - SCROLLING MENU ITEM -->
  <li class="ods-front-header__menu-item scrolling-menu">
    <!-- ITEM MENU LINK HERE -->
    <a href="" class="ods-front-header__menu-item-link">
      <!-- ITEM MENU FR TITLE HERE -->
      <span ng-if="'fr'|currentLanguage">Outils</span>
      <!-- ITEM MENU EN TITLE HERE -->
      <span ng-if="'en'|currentLanguage">Tools</span></a>
    <!-- START - SUBMENU -->
    <ul class="dropdown-content">
      <!-- ITEM SUBMENU LINK HERE -->
      <a class="ods-front-header__menu-item-link" href="/map/">
        <!-- ITEM SUBMENU FR TITLE HERE -->
        <span ng-if="'fr'|currentLanguage">Cartographe</span>
        <!-- ITEM SUBMENU EN TITLE HERE -->
        <span ng-if="'en'|currentLanguage">Map builder</span>
      </a>
      <!-- ITEM SUBMENU LINK HERE -->
      <a class="ods-front-header__menu-item-link" href="/chart/">
        <!-- ITEM SUBMENU FR TITLE HERE -->
        <span ng-if="'fr'|currentLanguage">Créateur de graphique</span>
        <!-- ITEM SUBMENU EN TITLE HERE -->
        <span ng-if="'en'|currentLanguage">Chart builder</span>
      </a>
    </ul>
    <!-- END - SUBMENU -->
  </li>
  <!-- END - SCROLLING MENU ITEM -->
</ul>
<!--- END - HEADER SCROLLING MENU --->
