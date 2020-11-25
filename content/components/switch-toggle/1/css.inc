/* Switch toggle
   ========================================================================== */

.switch-input {
    display: none;
}

.switch-button {
    outline: 0;
    display: block;
    width: 43px;
    height: 25px;
    position: relative;
    cursor: pointer;
    -webkit-user-select: none;
       -moz-user-select: none;
        -ms-user-select: none;
            user-select: none;
    background: #FFFFFF;
    border-radius: 100px;
    border: 2px solid #e6e6e6;
    -webkit-transition: all .4s ease;
    -o-transition: all .4s ease;
    transition: all .4s ease;
}

.switch-button::after {
    position: relative;
    display: block;
    content: "";
    width: 21px;
    height: 21px;
    border-radius: 50%;
    background-color: #FFFFFF;
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

.switch-button:hover::after {
    will-change: padding;
}

.switch-button:active::after {
    padding-right: .4rem;
}

/* Checked state */

.switch-input:checked + .switch-button {
    border-color: #4BC467;
    background: #4BC467;
}

.switch-input:checked + .switch-button::after {
    -webkit-transform: translateX(18px);
        -ms-transform: translateX(18px);
            transform: translateX(18px);
}

.switch-input:checked + .switch-button:active::after {
    margin-left: -.4rem;
}

/* Disabled state */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
    -webkit-box-shadow: 0 0 0 transparent;
            box-shadow: 0 0 0 transparent;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    border-color: #cccccc;
    background: #cccccc;
}