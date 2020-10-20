.app {
    max-width: 760px;
}
ul {
    list-style: none;
}
.header {
    position: relative;
}
.logos {
    position: absolute;
    right: 15px;
}
.logos img:nth-child(1) {
    height: 50px;
}
/*.logos img:nth-child(2) {
position: absolute;
right: 0;
width: 149px;
height: 49px;
}*/
.menus {
    text-align: center;
}
h1 {
    margin: 0px 0px 30px 15px;
    text-align: left;
    margin-top: 3px;
}
.menu h2 {
    margin-bottom: 15px;
    font-size: 1.2em;
}
.items {
    display: flex;
    justify-content: space-around;
    flex-wrap: wrap;
}
.type {
    margin: 0px 5px;
}
.logo {
    width: 110px;
}
.logo img {
    max-height: 30px;
    max-width: 30px;
}
.item.type h2 {
    width: 105px;
}
.item.plat h3 {
    width: 110px;
    font-size: 1.1em;
}
.stronger {
    font-weight: 400;
}
.weeks-selects {
    display: flex;
    justify-content: center;
}
.week-select {
    padding: 5px 0;
    margin: 5px;
    border: 1px solid #1f0d3340;
    width: 201px;
    text-align: center;
}
.week-select:hover {
    border-bottom: 1px solid #1f0d33;
}
.week-selected {
    border-color: #1f0d33;
    font-weight: 500;
    background-color: white;
}
@media print {
    header, footer, #debug, .weeks-selects, .external-links {
        display: none;
    }
    .ods-box.header {
        border: none;
    }
}
