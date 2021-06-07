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
        <span ng-if="'fr'|currentLanguage">Cartes</span>
        <span ng-if="'en'|currentLanguage">Maps</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="/chart/"
        title="Créer des graphiques"
      >
        <span ng-if="'fr'|currentLanguage">Graphiques</span>
        <span ng-if="'en'|currentLanguage">Charts</span>
      </a>
      <a class="ods-front-header__menu-item-link" href="/api/" title="API">
        <span ng-if="'fr'|currentLanguage">API</span>
        <span ng-if="'en'|currentLanguage">API</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="/pages/namur-reutilisations/"
        title="Réutilisations"
      >
        <span ng-if="'fr'|currentLanguage">Réutilisations</span>
        <span ng-if="'en'|currentLanguage">Reuses</span>
      </a>
    </ul>
  </li>
  <li class="ods-front-header__menu-item" title="Accéder aux statistiques">
    <a
      class="ods-front-header__menu-item-link"
      href="/pages/statistiquesaccueil/"
    >
      <span ng-if="'fr'|currentLanguage">Statistiques</span>
      <span ng-if="'en'|currentLanguage">Statistics</span>
    </a>
  </li>
  <li
    class="ods-front-header__menu-item scrolling-menu"
    title="Infos & Documentations"
    id="infos"
  >
    <a href="" class="ods-front-header__menu-item-link">
      <span ng-if="'fr'|currentLanguage">Infos</span>
      <span ng-if="'en'|currentLanguage">Infos</span></a
    >
    <ul class="dropdown-content">
      <a
        class="ods-front-header__menu-item-link"
        href="/pages/licence/"
        title="Texte légal sur la licence de réutilisation des données"
      >
        <span ng-if="'fr'|currentLanguage">Licence</span>
        <span ng-if="'en'|currentLanguage">License</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="https://docs.opendatasoft.com/fr"
        target="_blank"
        title="Accéder à la documentation en ligne"
      >
        <span ng-if="'fr'|currentLanguage">Documentation</span>
        <span ng-if="'en'|currentLanguage">Documentation</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="https://data.namur.be/pages/questions/"
        target="_blank"
        title="Questions fréquentes"
      >
        <span ng-if="'fr'|currentLanguage">FAQ</span>
        <span ng-if="'en'|currentLanguage">FAQ</span>
      </a>
      <a
        class="ods-front-header__menu-item-link"
        href="/pages/contact/"
        title="Contactez-nous"
      >
        <span ng-if="'fr'|currentLanguage">Contact</span>
        <span ng-if="'en'|currentLanguage">Contact</span>
      </a>
    </ul>
  </li>
</ul>
