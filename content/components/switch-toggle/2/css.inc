/* Skewed Switch toggle
   ========================================================================== */

.switch-input {
    display: none;
}

.switch-button {
    outline: 0;
    display: block;
    width: 4rem;
    height: 2rem;
    position: relative;
    cursor: pointer;
    -webkit-user-select: none;
       -moz-user-select: none;
        -ms-user-select: none;
            user-select: none;
    background: #888;
    -webkit-transform: skew(-10deg);
        -ms-transform: skew(-10deg);
            transform: skew(-10deg);
    -webkit-transition: all .2s ease;
    -o-transition: all .2s ease;
    transition: all .2s ease;
    overflow: hidden;
    -webkit-backface-visibility: hidden;
            backface-visibility: hidden;
}

.switch-button::before, 
.switch-button::after {
    -webkit-transform: skew(10deg);
        -ms-transform: skew(10deg);
            transform: skew(10deg);
    display: inline-block;
    -webkit-transition: all .2s ease;
    -o-transition: all .2s ease;
    transition: all .2s ease;
    width: 100%;
    text-align: center;
    position: absolute;
    line-height: 2rem;
    font-weight: bold;
    color: #FFFFFF;
    text-shadow: 0 1px 1px rgba(0,0,0,.3);
}

.switch-button::before {
    left: 0;
    content: attr(data-toggle-off);
}

.switch-button::after {
    left: 100%;
    content: attr(data-toggle-on);
}

.switch-button:active::before {
    left: -10%;
}

/* Checked state */

.switch-input:checked + .switch-button {
    background: #4BC467;
}

.switch-input:checked + .switch-button::before {
    left: -100%;
}

.switch-input:checked + .switch-button::after {
    left: 0;
}

.switch-input:checked + .switch-button:active::after {
    left: 10%;
}

/* Disabled state */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    border-color: #cccccc;
    background: #cccccc;
}