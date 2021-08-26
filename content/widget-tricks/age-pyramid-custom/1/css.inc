:root {
    --left-color: #142E7B;
    --right-color: #ffcc00;
}

/* Age pyramid */
.pyramid-line {
    display: flex;
    justify-content: space-between;
    width: 100%;
    margin: auto;
}

.pyramid-middle {
    font-weight: 500;
    width: 230px;
    text-align: center;
}

.pyramid-side {
    width: 74%;
    margin: 0px 10px;
    text-align: center;
    display: flex;
    align-items: center;
} 

.pyramid-side-left {
    color: var(--left-color);
    flex-direction: row-reverse;
}

.pyramid-side-right {
    color: var(--right-color);
    flex-direction: row;
}

.pyramid-side-value {
    width: 60px;
}

div.fond_bar{
    background-color: #f3f3f382;
    height: 15px;
    border-radius: 1000px;
}

div.bar{
    border-radius: 1000px;
    height: 15px;
}

.pyramid-side-left div.bar { 
    background-color : var(--left-color);
    float: right;
}

.pyramid-side-right div.bar { 
    background-color : var(--right-color);
}

.pyramid-value {
    font-size: 12px;
    padding: 0px 5px;
    width: 13%;
}

.left {
    text-align: start;
}

.right {
    text-align: end;
}

/* SWITCH BUTTON */

.pyramid-switch {
    display: flex;
    align-items: baseline;
    margin-top: 13px;
}
.pyramid-switch .switch {
    margin-left: 6px;
}

/* Button Group Switch
   ========================================================================== */

.switch {
    display: inline-block;
    margin-bottom: 0.5rem;
}

.switch-button {
    /* background and border when in "off" state */
    background: var(--highlight);
    border: 2px solid var(--highlight);
    display: grid; 
    grid-template-columns: 1fr 1fr;
    border-radius: 6px;
    color: #FFFFFF;
    position: relative;
    cursor: pointer;
    outline: 0;
    user-select: none;
}

.switch-input:not(:checked) + .switch-button .switch-button-left {
    /* text color when in "off" state */
    color: var(--highlight);
}

.switch-input {
    display: none;
}

.switch-button span {
    font-size: 1rem;
    padding: 0.2rem .7rem;
    text-align: center;
    z-index: 2;
    color: #FFFFFF;
    transition: color .2s;
}

.switch-button::before {
    content: '';
    position: absolute;
    background-color: #FFFFFF;
    box-shadow: 0 1px 3px rgba(0,0,0,.4);
    border-radius: 4px;
    top: 0;
    left: 0;
    height: 100%;
    width: 50%;
    z-index: 1;
    transition: left .3s cubic-bezier(0.175, 0.885, 0.320, 1), 
                padding .2s ease, margin .2s ease;
}

.switch-button:hover::before {
    will-change: padding;
}

.switch-button:active::before {
    padding-right: .4rem;
}


/* "On" state
   ========================== */

.switch-input:checked + .switch-button {
    /* background and border when in "on" state */
    background-color: var(--links);
    border-color: var(--links);
}

.switch-input:checked + .switch-button .switch-button-right {
    /* text color when in "on" state */
    color: var(--links);
}

.switch-input:checked + .switch-button::before {
    left: 50%;
}

.switch-input:checked + .switch-button:active::before {
    margin-left: -.4rem;
}

/* Checkbox in disabled state
   ========================== */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: 0.6;
    cursor: not-allowed;
}
