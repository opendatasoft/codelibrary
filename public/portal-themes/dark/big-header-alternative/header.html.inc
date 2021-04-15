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
                Replace <img /> with ##logo## if using your own logo
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
        <div class="portal-header-logo-container">
            <a href="/">
                <!--
                    Desktop Logo
                -->
                ##logo##
            </a>
        </div>
        <!-- Main Navigation Menu -->
        <div class="portal-navigation">
            ##menu##
        </div>
        <!-- Management Menu -->
        <div class="portal-management-menu">
            ##secondary-menu##
        </div>
    </ods-responsive-menu-collapsible>
</nav>
