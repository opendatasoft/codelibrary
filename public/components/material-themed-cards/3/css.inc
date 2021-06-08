:root {
  --primary-hue: 316;
  --primary-saturation: 71%;
  --primary-lightness: 21%;

  --surface: white;
  --background: hsl(316, 71%, 21%);
  --card-text: black;
  --body-text: white;

  /* These are automatically computed unless you need to overwrite them */
  --primary:    hsl(var(--primary-hue), var(--primary-saturation), var(--primary-lightness));
  --primary-10: hsl(var(--primary-hue), var(--primary-saturation), 10%);
  --primary-20: hsl(var(--primary-hue), var(--primary-saturation), 20%);
  --primary-30: hsl(var(--primary-hue), var(--primary-saturation), 30%);
  --primary-40: hsl(var(--primary-hue), var(--primary-saturation), 40%);
  --primary-50: hsl(var(--primary-hue), var(--primary-saturation), 50%);
  --primary-60: hsl(var(--primary-hue), var(--primary-saturation), 60%);
  --primary-70: hsl(var(--primary-hue), var(--primary-saturation), 70%);
  --primary-80: hsl(var(--primary-hue), var(--primary-saturation), 80%);
  --primary-90: hsl(var(--primary-hue), var(--primary-saturation), 90%);

  --overlay-10: hsla(var(--primary-hue), var(--primary-saturation), 90%, 50%);
}

body {
  background-color: var(--background);
  color: var(--body-text);
}

h1 {
  color: var(--body-text);
}

/* ODS Over-ride */
.row > *:first-child {
  margin-left: 0;
}

.row > *:last-child {
  margin-right: 0;
}

.row {
  display: flex;
  justify-content: center;
}

@media screen and (max-width: 992px) {
  .row {
    flex-direction: column;
  }

  .row > *:not(:last-child) {
    margin-bottom: 16px;
  }
}

/* Utilities */
.z-depth-1 {
  z-index: 1;
  box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.14),
    0 3px 1px -2px rgba(0, 0, 0, 0.12), 0 1px 5px 0 rgba(0, 0, 0, 0.2);
}

.z-depth-2 {
  z-index: 2;
  box-shadow: 0 4px 5px 0 rgba(0, 0, 0, 0.14), 0 1px 10px 0 rgba(0, 0, 0, 0.12),
    0 2px 4px -1px rgba(0, 0, 0, 0.3);
}

.row-sticky {
  position: sticky;
  top: 0;
  z-index: 20;
}

/* Elements */
section {
  padding: 0 16px;
  margin: 16px 0;
}

.title {
  margin-bottom: 1em;
}

.subtitle {
  margin-top: -0.75em;
}

h1.title {
  font-size: 2.25rem;
}

h2.title {
  font-size: 1.5rem;
}

h5.subtitle {
  font-size: 1.25rem;
  font-weight: 600;
  margin: 0;
}

/* Components */
.card {
  background: var(--surface);
  color: var(--card-text);
  border-radius: 4px;
  padding: 16px;
  height: 100%;
}

.card-head {
  padding-bottom: 2rem;
}

.card .title,
.card .subtitle {
  color: var(--card-text);
}

.data-table {
  margin: 0 -16px;
  color: var(--card-text);
}

.data-table thead {
  background: var(--overlay-10);
  border-bottom: 1px solid var(--card-text);
}

.data-table tr {
  line-height: 32px;
  position: relative;
}

.data-table tr:hover {
  background: var(--overlay-10);
}

.data-table td,
.data-table th {
  padding: 8px;
  max-width: 265px;
  overflow: hidden;
  text-overflow: ellipsis;
}

.data-table tbody tr:nth-child(-n + 3) * {
  font-weight: 500;
}
