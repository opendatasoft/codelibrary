<nav class="ods-front-header portal-header" ods-responsive-menu breakpoint="1000">
    <!--
        ---- Mobile Header ----
        - Header items when screen size is lower than "breakpoint" variable above (pixel value).
        - Displays a logo and a hamburger menu.
        - The items in the hamburger menu are those present in <ods-responsive-menu-collapsible> below.
    -->
    <ods-responsive-menu-placeholder>
        <a href="/">
            <!--
                Mobile Logo
            -->
            ##logo##
        </a>
    </ods-responsive-menu-placeholder>
    <ods-responsive-menu-collapsible>
        <!-- This language menu is only visible in mobile mode -->
        ##language##
        <!--
            ---- Desktop Header ----
            - Header items visible when screen size is bigger than "breakpoint" variable.
        -->
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
