<div class="cl-dropdown"
   ng-init="dropdown.open = false">
  <button ng-click="dropdown.open = !dropdown.open"
          ng-class="{'cl-dropdown-button-open': dropdown.open == true}"
          id="dropdown-button"
          class="cl-dropdown-button"
          aria-haspopup="true"
          aria-expanded="{{ dropdown.open == true }}">
      Menu
  </button>
  <div class="cl-dropdown-menu"
       ng-class="{'cl-dropdown-visible' : dropdown.open == true }"
       aria-labelledby="dropdown-button">
      <div class="cl-dropdown-title">
          Where to?
      </div>
      <div class="cl-dropdown-items">
          <a class="cl-dropdown-item" href="#" ng-click="">
              Explore data
          </a>
          <a class="cl-dropdown-item" href="#" ng-click="">
              Create map
          </a>
          <a class="cl-dropdown-item" href="#" ng-click="">
              Create chart
          </a>
      </div>
  </div>
  <div class="cl-dropdown-backdrop"
       ng-click="dropdown.open = ''"
       ng-show="dropdown.open != ''"></div>
</div>
