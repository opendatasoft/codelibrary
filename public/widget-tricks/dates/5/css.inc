/* TIMERANGE */
.odswidget-timerange__to {
    display: none;
}
.odswidget-timerange {
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
}
.input-holder, .odswidget-timerange__from {
    border: 1px solid #e4e4e4;
    padding: 10px;
    border-radius: 3px;
    box-shadow: 1px 1px 5px gainsboro;
    background-color: white;
    z-index: 2;
    margin-bottom: 10px;
    display: flex;
    align-items: center;
    margin: 3px;
}
.odswidget-timerange__from {
    margin-right: 10px;
}
.input-holder input, .odswidget-timerange__from input {
    border: none;
    width: 110px;
    margin-left: 8px;
}
.input-holder input:focus, .odswidget-timerange__from input:focus {
    outline: 0;
}
/* SLIDER / RANGE */
.controler {
    display: flex;
    margin: 2px 15px;
}
.controler h2 {
    line-height: 2em;
    margin-right: 10px;
}
.control-hour input[type=range] {
    width: 150px;
}
.control-range input[type=range] {
    width: 200px;
}
.input-range-with-button {
    line-height: 3.5em;
}
.controler .ods-button i.fa {
    vertical-align: middle;
}
