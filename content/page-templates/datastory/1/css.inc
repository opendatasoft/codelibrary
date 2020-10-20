main.main--page {
    margin: 0;
}
body {
    font-size: 1.4rem;
    background-color: #FFFFFF;
    line-height: 1.6;
    font-weight: 300;
}
/* Body text */
p {
    text-align: justify;
    margin-top: 0;
    margin-bottom: 1.5rem;
}
.three-columns {
    display: grid;
    grid-gap: 20px;
    grid-template-columns: 1fr;
}
@media (min-width: 994px) {
    .three-columns {
        grid-template-columns: 1fr 1fr 1fr;
    }
}
.small-link {
    font-size: 0.9rem;
    font-style: italic;
}
.placeholder {
    width: 100%;
    height: 400px;
    border-radius: 6px;
    background-color: #eee;
}
/* Header
    ========================================================================== */
.page-header {
    background-color: var(--highlight);
    /* Banner image. Put your image in the "Assets" tab of your back-office. Then, take copy/paste here the address begininng with "/assets" */
    background-image: url('/assets/theme_image/Capture d’écran 2019-11-22 à 14.51.30.png');
    background-repeat: no-repeat;
    background-position: center;
    background-size: cover;
    min-height: 190px; /* Change the height of the image here by increasing or decreasing the pixels. */
    /* Properties of the title located within the image banner */
    display: flex;
    flex-direction: column-reverse;
    justify-content: space-between;
    align-items: center;    
} 
.page-title {
    color: #142E7B;
    text-align: center; 
    background-color: #FFFFFF;  
    position: relative;
    vertical-align: bottom;
    margin: 0;
    font-weight: 400;
    font-size: 2.5rem;
    padding: 15px 20px 10px 20px;
    border-radius: 7px 7px 0px 0px;    
}
.page-subtitle {
    margin-top: 4rem;
    margin-bottom: 2rem;
}
/* KPIs
    ========================================================================== */
.kpi-box {
    display: flex;
    flex-direction: column;
    align-items: center;
    text-align: center;
    text-align: center;
    padding: 26px;
    border: 1px solid #e6e6e6;
    box-shadow: 0 4px 6px 0 rgba(100,100,100,0.2);
    border-radius: 7px;
}
@media (min-width: 994px) { 
    .kpi-box {
        margin-bottom: 2rem;
    }
}
.kpi-icon {
    color: #142E7B;;
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;    
    max-width: 100%;
}
.kpi-value {
    color: #142E7B;
    font-size: 3.2rem;
    font-weight: 400;
    margin: 0;
}
.kpi-description {
    margin: 0;
    padding: 0;
}
/* Sections
    ========================================================================== */
.page-section {
    margin-top: 2rem;
    margin-bottom: 4rem;
    padding-bottom: 4rem;
    box-shadow: 0 15px 13px -15px rgba(100,100,100,0.2);
}
.section-title {
    font-size: 2.2rem;
    font-weight: 400;
    color: #142E7B;
    margin-top: 1.5rem;
    margin-bottom: 1.5rem;
}
      