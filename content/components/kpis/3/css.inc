/* Variables & Shared classes
========================================================================== */
:root {
    --secondary-color: #142E7B;
}

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
    text-align: center;
}

.kpi-icon {
    color: var(--highlight);
    color: var(--secondary-color);
    font-size: 4rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}

.kpi-title {
    font-weight: normal;
    color: var(--highlight);
    font-size: 3.2rem;
    margin-top: 0;
    margin-bottom: 13px;
    max-width: 100%;
}

.kpi-description {
    color: var(--text);
    font-size: 1rem;
    line-height: 1.5;
    font-weight: normal;
    margin-top: 0;
    margin-bottom: 0;
    max-width: 100%;
}

.kpi-description-detail {
    opacity: 0.9;
    font-style: italic;
    font-size: 0.9em;
    margin-top: 0.8em;
}

/* Flip component
========================================================================== */
.kpi-card.card-face-front {
    justify-content: space-between;
}

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
}

.card-face {
    -webkit-backface-visibility: hidden;
    backface-visibility: hidden;
    height: 100%;
    width: 100%;
    margin-bottom: 0; /* remove kpi-card margin bottom */
}

.card-face-back {
    position: absolute;
    top: 0;
    left: 0;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -webkit-box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
    box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
}

.card-flip.is-flipped {
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
}

.card-flip:hover {
    -webkit-transform: rotateY(5deg);
    transform: rotateY(5deg);
    -webkit-box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
    box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
}

.card-flip.is-flipped:hover {
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
}

.kpi-card-bottom {
    align-self: flex-end;
    margin: 16px -27px -27px 0;
}

p.hint {
    color: darkgrey;
}
