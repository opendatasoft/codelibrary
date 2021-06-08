<ul class="ods-front-header__menu custom-menu">
  <li class="ods-front-header__menu-item" title="Accéder aux données">
    <a href="#" class="ods-front-header__menu-item-link">
      <span ng-if="'fr'|currentLanguage">Données</span>
      <span ng-if="'en'|currentLanguage">Data</span>
    </a>
  </li>
  <li
    class="ods-front-header__menu-item scrolling-menu"
    title="Cartes, Graphiques, Réutilisations et API"
    id="outils"
  >
    <a href="" class="ods-front-header__menu-item-link">
      <span ng-if="'fr'|currentLanguage">Outils</span>
      <span ng-if="'en'|currentLanguage">Tools</span></a
    >
    <ul class="dropdown-content">
      <a
        class="ods-front-header__menu-item-link"
        href="/map/"
        title="Créer des cartes"
      >
        <span ng-if="'fr'|currentLanguage">Cartographe</span>
        <span ng-if="'en'|currentLanguage">Map builder</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="/chart/"
        title="Créer des graphiques"
      >
        <span ng-if="'fr'|currentLanguage">Créateur de graphique</span>
        <span ng-if="'en'|currentLanguage">Chart builder</span>
      </a>
    </ul>
  </li>
</ul>
