<div class="dropdown"
   ng-init="dropdown.open = false">
  <button ng-click="dropdown.open = !dropdown.open"
          ng-class="{'dropdown-button-open': dropdown.open == true}"
          id="dropdown-button"
          class="dropdown-button"
          aria-haspopup="true"
          aria-expanded="{{ dropdown.open == true }}">
      Menu
  </button>
  <div class="dropdown-menu"
       ng-class="{'dropdown-visible' : dropdown.open == true }"
       aria-labelledby="dropdown-button">
      <div class="dropdown-title">
          Where to?
      </div>
      <div class="dropdown-items">
          <a class="dropdown-item" href="#" ng-click="">
              Explore data
          </a>
          <a class="dropdown-item" href="#" ng-click="">
              Create map
          </a>
          <a class="dropdown-item" href="#" ng-click="">
              Create chart
          </a>
      </div>
  </div>
  <div class="dropdown-backdrop"
       ng-click="dropdown.open = ''"
       ng-show="dropdown.open != ''"></div>
</div>
      