/* General settings */
body {
    background-color: #f6f8fb;
}

.feature-box {
    margin: 21px 0px;
    padding: 13px;
    background: white;
    border-radius: 4px;
    background-color: #ffffff;
    background-size: cover;
    box-shadow: 0 1px 3px rgba(0,0,0,0.13);
}
/* Table design */
.summary-table {
    table-layout: fixed;
    white-space: nowrap;
    width: 100%;
    margin-bottom: 21px;
}

.summary-table thead {
    background: #f6f8fb;
    color: #142e7b;
}

.summary-table td,
th {
    padding: 1rem;
}

.summary-table td {
    border-top: 1px solid;
    border-color: #dee5ef;
}

.summary-table tr:hover {
    background: #f6f8fb;
}

.summary-table .toggled {
    background: #f6f8fb;
}

.hidden-checkbox {
    visibility: hidden;
}

.fake-checkbox {
    width: 21px;
    height: 21px;
    background: white;
    border: 1px solid #142e7b;
    border-radius: 4px;
    font-weight: normal;
}

.fake-checkbox:after {
    content: "\f00c";
    opacity: 0;
    font-family: FontAwesome;
    color: #142e7b;
    margin-left: 3px;
}

.hidden-checkbox:checked ~ .fake-checkbox:after {
    content: "\f00c";
    opacity: 1;
    font-family: FontAwesome;
    color: #142e7b;
    margin-left: 3px;
}

/* cards */
.insight-card {
    margin: 13px;
    border: 1px dotted #142e7b;
    border-radius: 4px;
    color: #565656;
    text-decoration: rgb(86, 86, 86);
    box-shadow: 0px 0px 0px rgba(0,0,0,0);
    text-align: center;
    padding: 21px;
    height: 100%;
}

.insight-figure {
    font-size: 34px;
}
/* tabs */
.tabs {
    margin: 1em;
    /* Adds lots of space around the tabs, to avoid the border to fall into the tab content area */
}

.tab {
    padding: 10px 20px;
    /* Gives some space to tab titles */
    color: gray;
    /* Colors the text in gray */
}
/* Only visible when the mouse is on a tab title */
.tab:hover {
    color: black;
    /* Colors the text in black to highlight the possible selection */
    text-decoration: none;
    /* Removes the hyperlink underline style */
}

.activetab {
    color: black;
    /* Colors the text in black */
    border-bottom: 3px solid #2d2d2d;
    /* Underlines the text with a bold dark border */
}

/* Utilities */
.mb-4 {
    margin-bottom: 55px;
}

.text-primary {
    color: #142e7b;
}

.text-highlight {
    color: #00c7b1;
}

.text-center {
    text-align: center;
}

.text-light {
    color: #898D92;
}

.justify-content-left {
    display: flex;
    justify-content: flex-start;
}
