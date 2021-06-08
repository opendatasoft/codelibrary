/* Style of your page goes here */
/* Variables & Shared classes
========================================================================== */
:root {
    --secondary-color: #142E7B;
    --positive-color: #24b837;
    --negative-color: #d61e00; }

/* General Layout
========================================================================== */
@media screen and (min-width: 992px) {
    .row-equal-height {
        display: -webkit-box;
        display: -ms-flexbox;
        display: flex;
        -ms-flex-wrap: wrap;
        flex-wrap: wrap;
        margin-bottom: 20px; }
    /* Fix for early content wrapping in Safari*/
    .row-equal-height:before,
    .row-equal-height:after {
        content: normal; } }

.row-equal-height {
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
    margin-bottom: 20px; }

/* Fix for early content wrapping in Safari*/
.row-equal-height:before,
.row-equal-height:after {
    content: normal; }

.margin-bottom-20 {
    margin-bottom: 20px; }

/* Tab Pills
   ========================================================================== */
.ods-simple-tabs-container {
    margin-top: 1.5rem; }

.tab-pills .ods-simple-tabs-nav-item {
    width: 100%; }
.tab-pills .ods-simple-tabs-nav-item:first-child .ods-simple-tabs-nav-link {
    border-radius: 30px 0 0 30px; }
.tab-pills .ods-simple-tabs-nav-item:last-child .ods-simple-tabs-nav-link {
    border-radius: 0 30px 30px 0; }
.tab-pills .ods-simple-tabs-nav-item:first-child:last-child .ods-simple-tabs-nav-link {
    border-radius: 30px; }

.tab-pills .ods-simple-tabs-nav-link {
    padding: 0.5rem 1.5rem;
    border-bottom: 0;
    background-color: transparent;
    border: 1px solid var(--highlight);
    text-transform: uppercase;
    font-size: 1.2em;
    font-weight: 300; }
.tab-pills .ods-simple-tabs-nav-link:hover {
    opacity: 0.65; }

.tab-pills .ods-simple-tabs-nav-link-active {
    background-color: var(--highlight); }

.tab-pills .ods-simple-tabs-nav-link-active,
.tab-pills .ods-simple-tabs-nav-link-active:hover {
    color: #FFFFFF; }

/* KPI Card
========================================================================== */
.kpi-card {
    background-color: var(--boxes-background);
    height: 100%;
    padding: 39px;
    border-radius: 4px;
    margin-bottom: 20px;
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
    text-align: center;
    -webkit-box-pack: center;
    -ms-flex-pack: center;
    justify-content: center;
    text-align: center; }

.kpi-icon {
    color: var(--highlight);
    color: var(--secondary-color);
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%; }

.kpi-img {
    width: 100px;
    height: 100px;
    margin-bottom: 26px; }
.kpi-img img {
    width: 100%;
    height: 100%;
    border-radius: 100%;
    object-fit: cover; }

.kpi-value {
    font-weight: 600;
    color: var(--secondary-color);
    font-size: 3rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
    white-space: nowrap; }
.kpi-value .kpi-unit {
    font-size: 1.5rem;
    color: inherit; }

.kpi-title {
    color: var(--text);
    font-size: 1.1rem;
    line-height: 1.5;
    font-weight: 500;
    margin-top: 0;
    margin-bottom: 0;
    max-width: 100%; }

.kpi-link {
    margin-top: 13px;
    align-self: end; }
.kpi-link a {
    padding: 6px 13px;
    border-radius: 9999px;
    border: 1px solid var(--links); }
.kpi-link a:hover {
    text-decoration: none;
    background-color: var(--links);
    color: white; }

.kpi-description-detail {
    opacity: 0.9;
    font-style: italic;
    font-size: 0.9em;
    margin-top: 0.8em; }

/* Flip component
========================================================================== */
.kpi-card.card-face-front {
    justify-content: start; }

.card-flip {
    position: relative;
    height: 100%;
    width: 100%;
    -webkit-transition: -webkit-transform 0.2s;
    transition: -webkit-transform 0.2s;
    -o-transition: transform 0.2s;
    transition: transform 0.2s;
    transition: transform 0.2s, -webkit-transform 0.2s;
    -webkit-perspective: 1200px;
    perspective: 1200px;
    -webkit-transform-style: preserve-3d;
    transform-style: preserve-3d;
    border-radius: 4px;
    margin-bottom: 20px;
    box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.13); }

.card-face {
    -webkit-backface-visibility: hidden;
    backface-visibility: hidden;
    height: 100%;
    width: 100%;
    margin-bottom: 0;
    /* remove kpi-card margin bottom */ }

.card-face-back {
    position: absolute;
    top: 0;
    left: 0;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -webkit-box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12);
    box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12); }

.card-flip.is-flipped {
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg); }

.card-flip:not(.not-flippable):hover {
    -webkit-transform: rotateY(5deg);
    transform: rotateY(5deg);
    -webkit-box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12);
    box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12); }

.card-flip.is-flipped:hover {
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg); }

.kpi-card-middle {
    display: grid;
    height: 100%; }

.kpi-card-bottom {
    align-self: flex-end;
    margin: 9px -26px -30px 0; }

p.hint {
    color: darkgrey; }

/* Not flippable */
.card-flip.not-flippable {
    cursor: default; }
.card-flip.not-flippable .card-face-back {
    display: none; }

/* Print safe */
@media print {
    .col-print-6 {
        width: 50%; }
    .card-flip {
        page-break-before: auto;
        page-break-after: auto;
        page-break-inside: avoid; }
    /*  .card-face-back {
        display: none;
      }*/ }

/* Value reference / compare specific */
.kpi-valref {
    font-size: 1em;
    font-weight: 200;
    margin: 15px 0; }
.kpi-valref .kpi-valref-unit,
.kpi-valref .kpi-valref-value {
    color: var(--secondary-color);
    font-size: 2rem;
    font-weight: 400; }
.kpi-valref .kpi-valref-carret i.fa {
    font-size: 3.5em;
    margin-left: 0.2em;
    line-height: 10px;
    vertical-align: sub;
    color: var(--negative-color); }
.kpi-valref .kpi-valref-carret i.fa.kpi-valref-carret-good {
    color: var(--positive-color); }
.kpi-valref .kpi-valref-text {
    margin-top: 5px;
    font-weight: 300; }
.kpi-valref .kpi-valref-secondaryvalue {
    white-space: nowrap; }

/* pop-in
   ========================================================================== */
.ods-pop-in__container {
    z-index: 102; }

.ods-pop-in__backdrop {
    position: fixed;
    top: 0;
    bottom: 0;
    left: 0;
    right: 0;
    background-color: rgba(0, 0, 0, 0.7);
    z-index: 101;
    cursor: auto; }
.ods-pop-in__backdrop:before {
    content: url('data:image/svg+xml; utf8, <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 -2 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-arrow-left"><line x1="19" y1="12" x2="5" y2="12"></line><polyline points="12 19 5 12 12 5"></polyline></svg>');
    background-color: white;
    width: 40px;
    height: 40px;
    border-radius: 100%;
    position: absolute;
    top: 20px;
    left: 20px;
    z-index: 103;
    justify-content: center;
    align-items: center;
    cursor: pointer;
    display: none; }

.iframe-container {
    height: 80%;
    max-height: inherit;
    width: 100%;
    padding: 10px;
    max-width: inherit;
    margin-left: 120px;
    margin-right: 120px; }

.iframe-container iframe {
    border: none; }

@media screen and (max-width: 768px) {
    .ods-pop-in__backdrop:before {
        display: flex; }
    .iframe-container {
        height: calc(100% - 80px);
        margin: 0; }
    .ods-pop-in {
        align-items: flex-end; } }

/** Print **/
@media print {
    header, nav, footer {
        display: none; } }

/**
SPECIFIC
**/
.depuis-le-dbut-de-lanne .kpi-valref {
    visibility: hidden; }
