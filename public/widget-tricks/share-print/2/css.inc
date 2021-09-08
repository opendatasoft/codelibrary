.card {
    width: 700px;
    margin-left: auto;
    margin-right: auto;
}
.field-list {
    list-style-type: none;
    display: grid;
}
.field {
    display: inline-flex;
    line-height: 18px;
    margin-bottom: 4px;
}
.label {
    width: 175px;
    color: black;
    font-weight: 500;
}
.value {
    width: 400px;
    border: 1px solid black;
    border-radius: 5px;
    padding: 2px 0px 0px 5px;
    line-height: 25px;
    background-color: #f0f0f0;
}
@media print {
    header, footer {
        display: none;
    }
}
      