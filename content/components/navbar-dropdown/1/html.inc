<nav class="ods-front-header portal-header" ods-responsive-menu breakpoint="1000">
    <!--
        ---- Mobile View ----
        - Displayed when screen width is lower than the "breakpoint" value inserted above.
        - The navigation menu will automatically be inserted behind a "hamburger" menu.
        - Make sure to test the responsive design when editing this.
    -->
    <ods-responsive-menu-placeholder>
        <a href="/">
            <!--
                Mobile Logo
            -->
            ##logo##
        </a>
    </ods-responsive-menu-placeholder>
    <!--
        ---- Desktop Header ----
        - Header items visible when screen size is bigger than "breakpoint" variable.
    -->
    <ods-responsive-menu-collapsible>
        <!-- This language menu is only visible in mobile mode -->
        ##language##
        <a href="/">
            <!--
                Desktop Logo
            -->
            ##logo##
        </a>
        <!-- Main Navigation Menu -->
        <div class="portal-navigation">
            ##menu##

            <!-- Button and Double-level menu -->
            <div class="navbar-panel-container ods-front-header__menu-item"
                 ng-init="navbarPanel.open = false">
                <div class="ods-front-header__menu-item-link"
                     ng-class="{ 'ods-front-header__menu-item-link--active': navbarPanel.open == true}"
                     ng-click="navbarPanel.open = !navbarPanel.open"
                     id="navbar-panel-button"
                     aria-haspopup="true"
                     aria-expanded="{{ navbarPanel.open == true }}">
                    À vous de jouer
                </div>

                <div class="navbar-panel"
                     ng-class="{'navbar-panel-visible': navbarPanel.open == true}"
                     aria-labelledby="navbar-panel-button">
                    <div class="navbar-panel-content">
                        
                        <!-- Make sure to remove the ng-repeat in this block, and to make copies of this div for the content you need -->
                        <div class="navbar-panel-block"
                             ng-repeat="i in [1, 2, 3, 4, 5, 6]">
                            <h2 class="navbar-panel-block-title">
                                Title
                            </h2>
                            <p class="navbar-panel-block-description">
                                At vero eos et accusamus et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque corrupti quos dolores et quas molestias excepturi sint occaecati cupiditate non provident.
                            </p>
                            <a href="#"
                               class="navbar-panel-block-link">
                                Link
                                <i class="fa fa-fw fa-angle-right" 
                                   aria-hidden="true"></i>
                            </a>
                        </div>
                        
                    </div>
                </div>
                <div class="navbar-panel-backdrop"
                     ng-click="navbarPanel.open = false"
                     ng-show="navbarPanel.open == true"></div>
            </div>
            
        </div>
        <!-- Management Menu -->
        <div class="portal-management-menu">
            ##secondary-menu##
        </div>
    </ods-responsive-menu-collapsible>
</nav>
