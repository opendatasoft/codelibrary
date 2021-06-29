/* Content Card
   ========================================================================== */
   
.content-card {
	background-color: var(--boxes-background);
	padding: 26px;
	border-radius: 4px;
	margin-bottom: 20px;
	height: 100%;
}
.content-card-title {
	color: var(--titles);
	font-size: 1.2rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 13px;
	max-width: 100%;
}
.content-card-description {
	color: var(--text);
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 26px;
	max-width: 100%;
}
.content-card-icon {
	color: var(--highlight);
	font-size: 2rem;
	margin-bottom: 13px;
	max-width: 100%;
}
.content-card-link {
	color: var(--links);
	font-weight: bold;
	transition: all .2s;
	opacity: 1;
	max-width: 100%;
}
.content-card-link:hover {
	opacity: .7;
	text-decoration: none;
}
.content-card-button {
	color: var(--highlight);
	border: 1px solid var(--highlight);
    background: transparent;
	display: inline-block;
	text-align: center;
	font-size: .867rem;
    border-radius: 4px;
    padding: .5rem 1.15rem;
    text-decoration: none;
    transition: all .2s;
}
.content-card-button:hover {
	background-color: var(--highlight);
	color: #FFFFFF;
	text-decoration: none;
}

.switch-container {
    display: flex;
    align-items: center;
}

/* Button Group Switch
   ========================================================================== */

.switch {
    display: inline-block;
    margin-bottom: 0;
    margin-left: 0.5rem;
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
