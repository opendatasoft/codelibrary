/* Flip Switch toggle
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
    -webkit-transition: all .2s ease-out;
    -o-transition: all .2s ease-out;
    transition: all .2s ease-out;
    padding: 2px;
    -webkit-perspective: 100px;
            perspective: 100px;
}

.switch-button::before, 
.switch-button::after {
    display: inline-block;
    -webkit-transition: all .4s ease;
    -o-transition: all .4s ease;
    transition: all .4s ease;
    width: 100%;
    text-align: center;
    position: absolute;
    top: 0;
    left: 0;
    border-radius: 4px;
    line-height: 2rem;
    font-weight: bold;
    color: #FFFFFF;
    -webkit-backface-visibility: hidden;
            backface-visibility: hidden;
}

.switch-button::before {
    background: #CE0037;
    content: attr(data-toggle-off);
}

.switch-button::after {
    background: #4BC467;
    content: attr(data-toggle-on);
    -webkit-transform: rotateY(-180deg);
            transform: rotateY(-180deg);
}

.switch-button:active::before {
    -webkit-transform: rotateY(-20deg);
            transform: rotateY(-20deg);
}

/* Checked state */

.switch-input:checked + .switch-button:active::after {
    -webkit-transform: rotateY(20deg);
            transform: rotateY(20deg);
}

.switch-input:checked + .switch-button::before {
    -webkit-transform: rotateY(180deg);
            transform: rotateY(180deg);
    left: 0;
}

.switch-input:checked + .switch-button::after {
    -webkit-transform: rotateY(0);
            transform: rotateY(0);
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