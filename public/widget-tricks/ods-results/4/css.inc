/**
 * License: MIT License
 * Generated on 25 Jun 2021
 * Author: Labs from opendatasoft
 * Version: 0.3
 * Description: ODS Layout over-ride to Flexbox system
 */

.box,.row.full-height{height:100%}.row{display:flex;flex-wrap:wrap}.row>*{margin-bottom:20px}.order-0{order:0}@media screen and (min-width:750px){.order-sm-0{order:0}}@media screen and (min-width:970px){.order-md-0{order:0}}@media screen and (min-width:1170px){.order-lg-0{order:0}.order-lg-1{order:1}}.order-1{order:1}@media screen and (min-width:750px){.order-sm-1{order:1}}@media screen and (min-width:970px){.order-md-1{order:1}.order-md-2{order:2}}.order-2{order:2}@media screen and (min-width:750px){.order-sm-2{order:2}}@media screen and (min-width:1170px){.order-lg-2{order:2}.order-lg-3{order:3}}.order-3{order:3}@media screen and (min-width:750px){.order-sm-3{order:3}}@media screen and (min-width:970px){.order-md-3{order:3}.order-md-4{order:4}}.order-4{order:4}@media screen and (min-width:750px){.order-sm-4{order:4}}@media screen and (min-width:1170px){.order-lg-4{order:4}.order-lg-5{order:5}}.order-5{order:5}@media screen and (min-width:750px){.order-sm-5{order:5}}@media screen and (min-width:970px){.order-md-5{order:5}.order-md-6{order:6}}.order-6{order:6}@media screen and (min-width:750px){.order-sm-6{order:6}}@media screen and (min-width:1170px){.order-lg-6{order:6}.order-lg-7{order:7}}.order-7{order:7}@media screen and (min-width:750px){.order-sm-7{order:7}}@media screen and (min-width:970px){.order-md-7{order:7}.order-md-8{order:8}}.order-8{order:8}@media screen and (min-width:750px){.order-sm-8{order:8}}@media screen and (min-width:1170px){.order-lg-8{order:8}.order-lg-9{order:9}}.order-9{order:9}@media screen and (min-width:750px){.order-sm-9{order:9}}@media screen and (min-width:970px){.order-md-9{order:9}.order-md-10{order:10}}.order-10{order:10}@media screen and (min-width:750px){.order-sm-10{order:10}}@media screen and (min-width:1170px){.order-lg-10{order:10}.order-lg-11{order:11}}.order-11{order:11}@media screen and (min-width:750px){.order-sm-11{order:11}}@media screen and (min-width:970px){.order-md-11{order:11}.order-md-12{order:12}}.order-12{order:12}@media screen and (min-width:750px){.order-sm-12{order:12}}@media screen and (min-width:1170px){.order-lg-12{order:12}}@media screen and (max-width:1169px){:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-1,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-10,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-11,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-12,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-2,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-3,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-4,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-5,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-6,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-7,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-8,:not([class*=col-md]):not([class*=col-sm]):not([class*=col-xs]).col-lg-9{width:100%}}@media screen and (max-width:969px){:not([class*=col-sm]):not([class*=col-xs]).col-md-1,:not([class*=col-sm]):not([class*=col-xs]).col-md-10,:not([class*=col-sm]):not([class*=col-xs]).col-md-11,:not([class*=col-sm]):not([class*=col-xs]).col-md-12,:not([class*=col-sm]):not([class*=col-xs]).col-md-2,:not([class*=col-sm]):not([class*=col-xs]).col-md-3,:not([class*=col-sm]):not([class*=col-xs]).col-md-4,:not([class*=col-sm]):not([class*=col-xs]).col-md-5,:not([class*=col-sm]):not([class*=col-xs]).col-md-6,:not([class*=col-sm]):not([class*=col-xs]).col-md-7,:not([class*=col-sm]):not([class*=col-xs]).col-md-8,:not([class*=col-sm]):not([class*=col-xs]).col-md-9{width:100%}}@media screen and (max-width:749px){.row{flex-direction:column}:not([class*=col-xs]).col-sm-1,:not([class*=col-xs]).col-sm-10,:not([class*=col-xs]).col-sm-11,:not([class*=col-xs]).col-sm-12,:not([class*=col-xs]).col-sm-2,:not([class*=col-xs]).col-sm-3,:not([class*=col-xs]).col-sm-4,:not([class*=col-xs]).col-sm-5,:not([class*=col-xs]).col-sm-6,:not([class*=col-xs]).col-sm-7,:not([class*=col-xs]).col-sm-8,:not([class*=col-xs]).col-sm-9{width:100%}}.no-margin-bottom,.no-mb{margin-bottom:0!important}.no-margin-x,.no-mx{margin-left:0!important;margin-right:0!important}

/* Box style */
.box {
    position: relative;
    display: flex;
    flex-direction: column;
    /*justify-content: space-between;*/
}
.box.white {
    background-color: white;
}
.box.flat {
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.16);
    border-radius: 6px;
}
/* Image */
.odswidget.odswidget-record-image > img {
    height: 100px;
    width: 100%;
    object-fit: cover;
    margin: auto;
   border-radius: 6px 6px 0 0;
}
.box-content {
    padding: 13px;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    height: 100%;
}
dd {
    margin: 0;
    font-weight: 600;
}

/* Utils */
.mt {
    margin-top: 13px;
}

/* ods-pagination */
.odswidget-pagination {
    margin: 20px auto;
}


