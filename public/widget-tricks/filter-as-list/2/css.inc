/* DATE SELECTOR */
.input-range-with-button {
    display: flex;
}
.controler-button {
    border: 1px solid;
    background-color: #e5e5e5;
    border-color: #ccc;
    font-weight: 500;
    min-width: 42px;
    height: 42px;
    display: flex;
    align-items: center;
    justify-content: center;
}
.controler-button:nth-child(1) {
    border-radius: 0.5em 0 0 0.5em;
}
.controler-button:nth-child(3) {
    border-radius: 0 0.5em 0.5em 0;
}
.controler-button:hover {
    background-color: #ccc;
}
.controler-button.controler-selection select {
    box-sizing: border-box;
    -webkit-box-sizing: border-box;
    -moz-box-sizing: border-box;
    -webkit-appearance: none;
    -moz-appearance: none;
    appearance: none;
    border: none;
    border-radius: 0px;
    width: 100%;
    height: 100%;
    padding-left: 10px;
    padding-right: 25px;
}
.controler-button.controler-selection::after {
    position:absolute;
    right:.5rem;
    content:'\2193';
    pointer-events: none;
}
.controler-selection {
    width: auto;
    position: relative;
}
.controler-selection:hover {
    background-color: #e5e5e5;
}
.controler-button.disabled {
    color: #adadad;
}
.controler-button.disabled:hover {
    cursor: inherit;
    background-color: #e5e5e5;
}
      
