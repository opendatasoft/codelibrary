.scene {
  perspective: 1200px;
  display: flex;
  justify-content: center;
  align-items: stretch;
}

.card-flip {
  position: relative;
  height: 100%;
  width: 100%;
  transition: transform 0.2s;
  transform-style: preserve-3d;
  border-radius: 0;
  border: 1px solid darkgrey;
}

.card-face {
  position: absolute;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100%;
  width: 100%;
  backface-visibility: hidden;
  background-color: white;
  box-sizing: border-box;
  border-radius: inherit;
  padding: 21px;
}

.card-face li {
  margin: 8px 0;
}

.card-face ul {
  padding: 0 21px 0 34px;
}

.card-face-back {
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

.kpi {
  font-size: 34px;
  font-weight: bold;
}

.kpi-legend {
  display: inline;
  text-align: center;
  font-size: 16px;
  padding: 0 21px;
}

.hint {
  color: darkgrey;
}

.grid-layout {
  display: grid;
  grid: 280px 280px / 280px 280px;
  margin: 55px;
}

.demo-tile {
  display: flex;
  justify-content: center;
  align-items: center;
  height: 280px;
  width: 280px;
  background: #efb71b;
}

.demo-tile.is-dark {
  background: #ef7809;
}
