/* Horizontal Tabs
   ========================================================================== */
.tab-horizontal {
    display: flex;
    flex-direction: column;
}
@media (min-width: 767px) {
    .tab-horizontal {
        flex-direction: row;
    }
}
@media (min-width: 767px) {
    .tab-horizontal .ods-simple-tabs-nav {
        flex: 0 0 15%;
        margin-right: 10px;
        flex-direction: column;
        overflow-x: inherit;
    }    
}
.tab-horizontal .ods-simple-tabs-nav-link {
    border-radius: 4px;
    border-bottom: none;
}
.tab-horizontal .ods-simple-tabs-nav-link:hover {
    color: var(--links);
}
.tab-horizontal .ods-simple-tabs-nav-link-active {
    background-color: var(--links);
}
.tab-horizontal .ods-simple-tabs-nav-link-active,
.tab-horizontal .ods-simple-tabs-nav-link-active:hover {
    color: #FFFFFF;
}
@media (min-width: 767px) {
    .tab-horizontal .ods-simple-tabs-content {
        flex: 1 1 auto;
        overflow: auto;
    }    
}
      