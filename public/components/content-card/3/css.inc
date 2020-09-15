/* Class used to center the content within the card */
.centered-card {
	display: flex;
	flex-direction: column;
	align-items: center;
	justify-content: center;
}
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
