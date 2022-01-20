
  <button ng-click="button.active = !button.active"
          ng-class="{'button-active': button.active == true}"
          class="button"
          aria-expanded="{{ button.active == true }}">
      Afficher 
  </button>

  <span ng-if="button.active == true">
  Contenu affiché</span>
