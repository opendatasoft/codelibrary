/* Image Card
   ========================================================================== */
.image-card {
	background-color: rgba(0,0,0,.1);
	background-color: var(--highlight);
	color: #FFFFFF;
	padding: 39px;
	border-radius: 4px;
	margin-bottom: 20px;
	min-height: 300px;
	height: 100%;
	display: -webkit-box;
	display: -ms-flexbox;
	display: flex;
	-webkit-box-orient: vertical;
	-webkit-box-direction: normal;
	    -ms-flex-direction: column;
	        flex-direction: column;
	-webkit-box-align: stretch;
	    -ms-flex-align: stretch;
	        align-items: stretch;
	text-align: center;
	-webkit-box-pack: center;
	    -ms-flex-pack: center;
	        justify-content: center;
	background-position: center center;
	background-repeat: no-repeat;
	background-size: cover;
	-webkit-transition: all .2s;
	-o-transition: all .2s;
	transition: all .2s;
	text-decoration: none;
}
.image-card:hover,
.image-card:focus {
	text-decoration: none;
    -webkit-transform: scale(1.02);
        -ms-transform: scale(1.02);
            transform: scale(1.02);
    -webkit-box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
            box-shadow: 0 0 10px 0 rgba(0,0,0,.1);
}
.image-title {
	color: inherit;
	font-size: 1.733rem;
	line-height: 2.26;
	font-weight: bold;
	margin-top: 0;
	margin-bottom: 13px;
}
.image-description {
	color: inherit;
	font-size: 1rem;
	line-height: 1.5;
	font-weight: bold;
	margin: 0;
}
/* Image card backgrounds
   ========================================================================== */
/**
 * - Replace the background image URL.
 * - Change the class name to something related to your project and update the HTML as well.
 */
.image-card-mobility {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card/mobility-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/mobility-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/mobility-bg.jpg');
}
.image-card-garden {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card/garden-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/garden-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/garden-bg.jpg');
}
.image-card-gastronomy {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card/gastronomy-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/gastronomy-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/gastronomy-bg.jpg');
}
.image-card-sport {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card/sport-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/sport-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/sport-bg.jpg');
}
.image-card-culture {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card//culture-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/culture-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/culture-bg.jpg');
}
.image-card-education {
	background-image: -webkit-gradient(linear, left top, left bottom, from(rgba(0,0,0,0.5)), to(rgba(0,0,0,0.5))), url('/img/image-card/education-bg.jpg');
	background-image: -o-linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/education-bg.jpg');
	background-image: linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)), url('/img/image-card/education-bg.jpg');
}
