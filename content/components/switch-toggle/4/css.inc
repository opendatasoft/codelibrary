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

/* Skewed Switch toggle
   ========================================================================== */

.switch {
    display: inline-block;
    margin-bottom: 0;
    margin-left: .5rem;
}

.switch-button {
    /* Change width and height to modify size of switch */
    width: 4rem;
    height: 2rem;

    /* background color when "off" */
    background: #888888;

    display: block;
    position: relative;
    cursor: pointer;
    outline: 0;
    overflow: hidden;
    -webkit-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
            user-select: none;
    -webkit-transform: skew(-10deg);
        -ms-transform: skew(-10deg);
            transform: skew(-10deg);
    -webkit-transition: all .2s ease;
        -o-transition: all .2s ease;
            transition: all .2s ease;
    -webkit-backface-visibility: hidden;
            backface-visibility: hidden;
}

.switch-button::before, 
.switch-button::after {
    /* the line-height must be the same as the height above */
    line-height: 2rem;

    color: #FFFFFF;
    font-weight: bold;
    text-shadow: 0 1px 1px rgba(0,0,0,.3);
    display: inline-block;
    width: 100%;
    text-align: center;
    position: absolute;
    -webkit-transform: skew(10deg);
        -ms-transform: skew(10deg);
            transform: skew(10deg);
    -webkit-transition: all .2s ease;
        -o-transition: all .2s ease;
            transition: all .2s ease;
}

.switch-input {
    display: none;
}

.switch-button::before {
    content: attr(data-toggle-off);
    left: 0;
}

.switch-button::after {
    content: attr(data-toggle-on);
    left: 100%;
}

.switch-button:active::before {
    left: -10%;
}

/* "On" state
   ========================== */

.switch-input:checked + .switch-button {
    /* color of background when "on" */
    background: var(--highlight);
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

/* Checkbox in disabled state
   ========================== */

.switch-input[type="checkbox"]:disabled + .switch-button {
    opacity: .6;
    cursor: not-allowed;
}

.switch-input[type="checkbox"]:checked:disabled + .switch-button {
    /* border and background color when button is disabled */
    border-color: #cccccc;
    background: #cccccc;
}