/* Variables & Shared classes
========================================================================== */
:root {
    --secondary-color: #142E7B;
}
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
.scene {
  perspective: 1200px;
}

.card-flip {
  position: relative;
  height: 100%;
  width: 100%;
  transition: transform 0.2s;
  transform-style: preserve-3d;
  border-radius: 8px;
}

.card-face {
  backface-visibility: hidden;
  height: 100%;
  width: 100%;
}

.card-face-back {
  position: absolute;
  top: 0;
  left: 0;
  transform: rotateY(180deg);
  box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
}

.card-flip.is-flipped {
  transform: rotateY(180deg);
}

.card-flip:hover {
  transform: rotateY(5deg);
  box-shadow: 0 2px 4px -1px rgba(0, 0, 0, 0.2), 0 4px 5px 0 rgba(0, 0, 0, 0.14),
    0 1px 10px 0 rgba(0, 0, 0, 0.12);
}

.card-flip.is-flipped:hover {
  transform: rotateY(180deg);
}

.hint {
  color: darkgrey;
}
