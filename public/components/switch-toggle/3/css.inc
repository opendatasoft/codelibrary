/* Flip Switch
   ========================================================================== */

.switch {
    display: inline-block;
    margin-bottom: .5rem;
}

.switch-button {
    width: 4rem;
    height: 2rem;
    padding: 2px;
    position: relative;
    cursor: pointer;
    outline: 0;
    display: block;
    -webkit-user-select: none;
       -moz-user-select: none;
        -ms-user-select: none;
            user-select: none;
    -webkit-transition: all .2s ease-out;
         -o-transition: all .2s ease-out;
            transition: all .2s ease-out;
    -webkit-perspective: 100px;
            perspective: 100px;
}

.switch-button::before, 
.switch-button::after {
    line-height: 2rem;
    font-weight: bold;
    color: #FFFFFF;
    text-align: center;
    display: inline-block;
    border-radius: 4px;
    width: 100%;
    position: absolute;
    top: 0;
    left: 0;
    -webkit-backface-visibility: hidden;
            backface-visibility: hidden;
    -webkit-transition: all .4s ease;
         -o-transition: all .4s ease;
            transition: all .4s ease;
}

.switch-input {
    display: none;
}

/* When switch is "off" */
.switch-button::before {
    background: var(--links);
    content: attr(data-toggle-off);
}

/* When switch is "on" */
.switch-button::after {
    background: var(--highlight);
    content: attr(data-toggle-on);
    -webkit-transform: rotateY(-180deg);
            transform: rotateY(-180deg);
}

.switch-button:hover::before {
    -webkit-transform: rotateY(-20deg);
            transform: rotateY(-20deg);
}

/* "On" state
   ========================== */

.switch-input:checked + .switch-button:hover::after {
    -webkit-transform: rotateY(20deg);
            transform: rotateY(20deg);
}

.switch-input:checked + .switch-button::before {
    -webkit-transform: rotateY(180deg);
            transform: rotateY(180deg);
}

.switch-input:checked + .switch-button::after {
    -webkit-transform: rotateY(0);
            transform: rotateY(0);
}

/* Checkbox in disabled
   ========================== */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    border-color: #cccccc;
    background: #cccccc;
}