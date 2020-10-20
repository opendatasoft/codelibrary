/* Tab dots
   ========================================================================== */
.tab-dots {
    display: flex;
    flex-direction: column-reverse;
    margin-bottom: 0;
}
.tab-dots .ods-simple-tabs-nav {
    margin-top: 20px;
    margin-bottom: 0;
    justify-content: center;    
}
.tab-dots .ods-simple-tabs-nav-link {
    border: none;
    padding: 0;
    width: 14px;
    height: 14px;
    border-radius: 50%;
    background-color: rgba(0,0,0,.2);
    margin: 0 4px;
}
.tab-dots .ods-simple-tabs-nav-link:hover,
.tab-dots .ods-simple-tabs-nav-link-active {
    background-color: var(--links);
}
/* KPI Card
========================================================================== */
.kpi-card {
    background-color: var(--boxes-background);
    height: 100%;
    padding: 39px;
    border-radius: 4px;
    margin-bottom: 20px;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -webkit-box-orient: vertical;
    -webkit-box-direction: normal;
    -ms-flex-direction: column;
    flex-direction: column;
    -webkit-box-align: center;
    -ms-flex-align: center;
    align-items: center;
    text-align: center;
    -webkit-box-pack: center;
    -ms-flex-pack: center;
    justify-content: center;
    text-align: center;
}
.kpi-icon {
    color: var(--highlight);
    color: var(--secondary-color);
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;	
    max-width: 100%;
}
.kpi-title {
    font-weight: normal;
    color: var(--highlight);
    font-size: 3.2rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}
.kpi-description { 
    color: var(--text);
    font-size: 1rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 0;
    max-width: 100%;
}
      