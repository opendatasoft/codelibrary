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
    user-select: none;
    transition: all .2s ease-out;
    padding: 2px;
    perspective: 100px;
}

.switch-button::before, 
.switch-button::after {
    display: inline-block;
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
    backface-visibility: hidden;
}

.switch-button::before {
    background: #CE0037;
    content: attr(data-toggle-off);
}

.switch-button::after {
    background: #4BC467;
    content: attr(data-toggle-on);
    transform: rotateY(-180deg);
}

.switch-button:active::before {
    transform: rotateY(-20deg);
}

/* Checked state */

.switch-input:checked + .switch-button:active::after {
    transform: rotateY(20deg);
}

.switch-input:checked + .switch-button::before {
    transform: rotateY(180deg);
    left: 0;
}

.switch-input:checked + .switch-button::after {
    transform: rotateY(0);
}

/* Disabled state */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
    box-shadow: 0 0 0 transparent;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    border-color: #cccccc;
    background: #cccccc;
}