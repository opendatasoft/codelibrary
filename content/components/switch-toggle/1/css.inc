/* Light switch
   ========================================================================== */

.switch {
    display: inline-block;
    margin-bottom: .5rem;
}

.switch-button {
    /* background color when "off" */
    background: #FFFFFF;

    /* size of switch */
    width: 43px;
    height: 25px;
    border: 2px solid #E6E6E6;
    border-radius: 100px;
    display: block;

    cursor: pointer;
    -webkit-user-select: none;
       -moz-user-select: none;
        -ms-user-select: none;
            user-select: none;
    outline: 0;
    -webkit-transition: all .4s ease;
    -o-transition: all .4s ease;
    transition: all .4s ease;
}

/* Style of the "bubble" that toggles */
.switch-button::after {
    /* size of bubble */
    width: 21px;
    height: 21px;
    border-radius: 50%;
    background-color: #FFFFFF;
    position: relative;
    display: block;
    content: "";
    -webkit-transition: tranform .4s cubic-bezier(0.175, 0.885, 0.320, 1.275), 
                padding .3s ease, margin .3s ease;
    -o-transition: tranform .4s cubic-bezier(0.175, 0.885, 0.320, 1.275), 
                padding .3s ease, margin .3s ease;
    transition: tranform .4s cubic-bezier(0.175, 0.885, 0.320, 1.275), 
                padding .3s ease, margin .3s ease;
    -webkit-transform: translateX(0);
        -ms-transform: translateX(0);
            transform: translateX(0);
    -webkit-box-shadow: 0 1px 3px rgba(0,0,0,.4);
            box-shadow: 0 1px 3px rgba(0,0,0,.4);
}

.switch-input {
    display: none;
}

.switch-button:hover::after {
    will-change: padding;
}

.switch-button:active::after {
    padding-right: .4rem;
}

/* "On" state
   ========================== */

.switch-input:checked + .switch-button {
    /* border and background color when the button is "on" */
    border-color: var(--highlight); 
    background: var(--highlight);
}

.switch-input:checked + .switch-button::after {
    /* bubble position when "on" */
    -webkit-transform: translateX(18px);
        -ms-transform: translateX(18px);
            transform: translateX(18px);
}

.switch-input:checked + .switch-button:active::after {
    margin-left: -.4rem;
}

/* Checkbox in disabled state
   ========================== */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
    -webkit-box-shadow: 0 0 0 transparent;
            box-shadow: 0 0 0 transparent;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    /* border and background color when button is disabled */
    border-color: #cccccc;
    background: #cccccc;
}