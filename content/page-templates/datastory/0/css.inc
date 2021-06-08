main {
    margin: 0;
}

/* Data story */
section {
    padding-top: 2rem;
    background: linear-gradient(0deg, #F2F3F8, white);
}

.heading {
    display: flex;
    flex-direction: column;
    align-items: center;
    text-align: center;
    margin: 2rem;
}
.heading h1.title {
    font-size: 3em;
}
.heading h1 ~ .subtitle {
    font-size: 2em;
    font-weight: 200;
    margin: 0 1em 2em;
}
.heading h3.title {
    font-size: 1.7em;
}
.heading p {
    text-align: center;
}
@media screen and (min-width: 640px) {
    .heading {
        margin: 2rem 12%;
    }
}

.my-4\.5 {
    margin-top: 4.5rem;
    margin-bottom: 4.5rem;
}

.content-box {
    height: 100%;
    /* Content management */
    word-break: break-word;
    position: relative;
}
.content-box.text {
    padding: 1rem;
}
.content-box.tiny-shadow {
    background: white;
    border-radius: 6px;
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.16);
}
.content-box.heavy-shadow {
    box-shadow: 30px 20px 70px lightgrey;
}
.content-box .ods-chart {
    height: 400px;
}

g.highcharts-label.highcharts-data-label {
    display: none;
}
g.highcharts-label.highcharts-data-label:first-child, g.highcharts-label.highcharts-data-label:nth-child(5n) {
    display: inherit;
}

/**
 * License: MIT License
 * Generated on 26 May 2021
 * Author: Labs from Opendatasoft
 * Version: 0.1
 * Description: ods-chart CSS Library
 */

.hide-x-legend .highcharts-xaxis tspan, .hide-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line, .hide-y-values .highcharts-yaxis-labels span, .hide-y-values .highcharts-yaxis-labels text {
    display: none !important;
}

.highcharts-axis tspan, .highcharts-data-label tspan, .highcharts-label span, .highcharts-xaxis-labels text, .highcharts-yaxis-labels text {
    font-family: Gotham-book, Arial, sans-serif !important;
}

.medium-x-values .highcharts-xaxis-labels span, .medium-x-values .highcharts-xaxis-labels text, .medium-y-values .highcharts-yaxis-labels span, .medium-y-values .highcharts-yaxis-labels text {
    font-size: 14px !important;
}

.small-chart-series .highcharts-series path.highcharts-graph, .small-chart-series .highcharts-series rect, .small-y-gridline .highcharts-yaxis-grid path.highcharts-grid-line {
    stroke-width: 0.8px !important;
}

.no-bg rect.highcharts-background {
    fill: transparent !important;
}

.ods-highcharts__tooltip {
    align-items: center;
}

/**
 * License: MIT License
 * Generated on 07 Jun 2021
 * Author: Labs from opendatasoft
 * Version: 0.2
 * Description: ODS Layout over-ride to Flexbox system
 */

.box,.row.full-height{height:100%}.row{display:flex;flex-wrap:wrap;justify-content:center}.row>*{margin-bottom:20px;flex-grow:1}.order-0{order:0}@media screen and (min-width:750px){.order-sm-0{order:0}}@media screen and (min-width:970px){.order-md-0{order:0}}@media screen and (min-width:1170px){.order-lg-0{order:0}.order-lg-1{order:1}}.order-1{order:1}@media screen and (min-width:750px){.order-sm-1{order:1}}@media screen and (min-width:970px){.order-md-1{order:1}.order-md-2{order:2}}.order-2{order:2}@media screen and (min-width:750px){.order-sm-2{order:2}}@media screen and (min-width:1170px){.order-lg-2{order:2}.order-lg-3{order:3}}.order-3{order:3}@media screen and (min-width:750px){.order-sm-3{order:3}}@media screen and (min-width:970px){.order-md-3{order:3}.order-md-4{order:4}}.order-4{order:4}@media screen and (min-width:750px){.order-sm-4{order:4}}@media screen and (min-width:1170px){.order-lg-4{order:4}.order-lg-5{order:5}}.order-5{order:5}@media screen and (min-width:750px){.order-sm-5{order:5}}@media screen and (min-width:970px){.order-md-5{order:5}.order-md-6{order:6}}.order-6{order:6}@media screen and (min-width:750px){.order-sm-6{order:6}}@media screen and (min-width:1170px){.order-lg-6{order:6}.order-lg-7{order:7}}.order-7{order:7}@media screen and (min-width:750px){.order-sm-7{order:7}}@media screen and (min-width:970px){.order-md-7{order:7}.order-md-8{order:8}}.order-8{order:8}@media screen and (min-width:750px){.order-sm-8{order:8}}@media screen and (min-width:1170px){.order-lg-8{order:8}.order-lg-9{order:9}}.order-9{order:9}@media screen and (min-width:750px){.order-sm-9{order:9}}@media screen and (min-width:970px){.order-md-9{order:9}.order-md-10{order:10}}.order-10{order:10}@media screen and (min-width:750px){.order-sm-10{order:10}}@media screen and (min-width:1170px){.order-lg-10{order:10}.order-lg-11{order:11}}.order-11{order:11}@media screen and (min-width:750px){.order-sm-11{order:11}}@media screen and (min-width:970px){.order-md-11{order:11}.order-md-12{order:12}}.order-12{order:12}@media screen and (min-width:750px){.order-sm-12{order:12}}@media screen and (min-width:1170px){.order-lg-12{order:12}}@media screen and (max-width:1169px){:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-1,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-10,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-11,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-12,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-2,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-3,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-4,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-5,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-6,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-7,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-8,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-9{width:100%}}@media screen and (max-width:969px){:not([class*=col-sm]):not([class*=col-xs]).col-md-1,:not([class*=col-sm]):not([class*=col-xs]).col-md-10,:not([class*=col-sm]):not([class*=col-xs]).col-md-11,:not([class*=col-sm]):not([class*=col-xs]).col-md-12,:not([class*=col-sm]):not([class*=col-xs]).col-md-2,:not([class*=col-sm]):not([class*=col-xs]).col-md-3,:not([class*=col-sm]):not([class*=col-xs]).col-md-4,:not([class*=col-sm]):not([class*=col-xs]).col-md-5,:not([class*=col-sm]):not([class*=col-xs]).col-md-6,:not([class*=col-sm]):not([class*=col-xs]).col-md-7,:not([class*=col-sm]):not([class*=col-xs]).col-md-8,:not([class*=col-sm]):not([class*=col-xs]).col-md-9{width:100%}}@media screen and (max-width:749px){.row{flex-direction:column}:not([class*=col-xs]).col-sm-1,:not([class*=col-xs]).col-sm-10,:not([class*=col-xs]).col-sm-11,:not([class*=col-xs]).col-sm-12,:not([class*=col-xs]).col-sm-2,:not([class*=col-xs]).col-sm-3,:not([class*=col-xs]).col-sm-4,:not([class*=col-xs]).col-sm-5,:not([class*=col-xs]).col-sm-6,:not([class*=col-xs]).col-sm-7,:not([class*=col-xs]).col-sm-8,:not([class*=col-xs]).col-sm-9{width:100%}}.no-margin-bottom,.no-mb{margin-bottom:0!important}.no-margin-x,.no-mx{margin-left:0!important;margin-right:0!important}
