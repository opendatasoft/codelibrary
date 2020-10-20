/* Variables & Shared classes
   ========================================================================== */
@media screen and (min-width: 992px) {
	.row-equal-height {
		display: flex;
		flex-wrap: wrap;
		margin-bottom: 20px;
	}	
	/* Fix for early content wrapping in Safari*/
	.row-equal-height:before,
	.row-equal-height:after {
		content: normal;
	}
}
.margin-bottom-20 {
	margin-bottom: 20px;
}
/* Colored Card (Basic card)
   ========================================================================== */
.color-card {
	background-color: var(--boxes-background); /* Background color of card */
	color: var(--text);
	text-align: center;
	display: flex;
	flex-direction: column;
	align-items: center;
	justify-content: center;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	height: 100%;
	text-decoration: none;
	transition: all .2s;
}
.color-card:hover,
.color-card:focus {
	text-decoration: none;
    transform: scale(1.02);
    box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
}
.color-card-icon {
	font-size: 2rem;
	margin-bottom: 13px;
}
.color-card-picto {
	width: auto;
	height: 56px;
	margin-bottom: 13px;
	max-width: 100%;
}
.color-card-title {
	color: inherit;
	font-size: 1.2rem;
	line-height: 1.5; 
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 0;
	max-width: 100%;
}
.color-card-description {
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	color: inherit;
	margin-top: 13px;
	margin-bottom: 26px;
	max-width: 100%;
}
.color-card-link {
	color: inherit;
	font-weight: bold;
	margin-top: auto;
	max-width: 100%;
}
      