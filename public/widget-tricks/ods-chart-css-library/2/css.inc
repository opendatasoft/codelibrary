body {
    background-color: white;
}
.row {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
}
.row > * {
    flex-grow: 1;
    margin-bottom: 20px;
}
/* Fix for early content wrapping in Safari*/
.row:before,
.row:after {
    content: normal;
}
.ods-box {
    height: 100%;
    background-color: var(--boxes-background);
}

