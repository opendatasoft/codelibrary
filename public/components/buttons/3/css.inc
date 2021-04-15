/* Shared Styles
========================================================================== */
@media screen and (min-width: 992px) {
	.row-equal-height {
		display: -webkit-box;
		display: -ms-flexbox;
		display: flex;
		-ms-flex-wrap: wrap;
		    flex-wrap: wrap;
		margin-bottom: 20px;
	}
	/* Fix for early content wrapping in Safari*/
	.row-equal-height:before,
	.row-equal-height:after {
		content: normal;
	}
}
.margin-bottom-2 {
	margin-bottom: 20px;
}
/* Action Card
   ========================================================================== */
.action-card {
	background-color: var(--links);
	color: #FFFFFF;
	text-align: center;
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-orient: vertical;
	-webkit-box-direction: normal;
	    -ms-flex-direction: column;
	        flex-direction: column;
	-webkit-box-align: center;
	    -ms-flex-align: center;
	        align-items: center;
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	height: 100%;
	text-decoration: none;
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
}
.action-card:hover,
.action-card:focus {
	text-decoration: none;
    -webkit-transform: scale(1.02);
        -ms-transform: scale(1.02);
            transform: scale(1.02);
    -webkit-box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
            box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
}
.action-card-icon {
	font-size: 2rem;
	margin-bottom: 13px;
}
.action-card-picto {
	width: 56px;
	height: auto;
	max-height: 56px;
	margin-bottom: 13px;
}
.action-card-title {
	color: inherit;
	font-size: 1.2rem;
	line-height: 1.5;
	font-weight: normal;
	margin-top: 0;
	margin-bottom: 0;
}
.action-card-description {
	font-size: 1rem;
	line-height: 1.5;
	font-weight: normal;
	color: inherit;
	margin-top: 13px;
	margin-bottom: 26px;
}
.action-card-link {
	color: inherit;
	font-weight: bold;
	margin-top: auto;
}
