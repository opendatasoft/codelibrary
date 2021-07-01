:root {
  --identity: #142e7b;
  --identity-light: #F2F3F8;
  --success: #00C7B1;
  --info: #0086D6;
  --warning: #EFB71B;
  --light-300: #DEE5EF;
  --light-500: #898D92;
  --light-600: #565656;
}

/* Default CSS override */
@media screen and (min-width: 968px) {
  .row > *:first-child {
    margin-left: 0;
  }

  .row > *:last-child {
    margin-right: 0;
  }

  .row {
    display: flex;
  }
}

.odswidget-charts {
  margin: 0 -12px;
}

.ods-chart {
  min-height: inherit;
}

.odswidget-tag-cloud {
  font-size: 0.8rem;
  color: var(--light-600);
}

/* Elements */
.title {
  font-weight: 300;
  margin-bottom: 1em;
}

h1.title {
  font-size: 24px;
}

h2.title {
  font-size: 20px;
}

.subtitle {
  font-size: 1rem;
  color: var(--light-500);
}

.title-info {
  font-size: 1rem;
}

.kpi {
  font-size: 42px;
}

.kpi i {
  color: var(--light-500);
}

.pill {
  border: 1px solid var(--light-300);
  border-radius: 999px;
  padding: 0.5rem 1.5rem;
  text-decoration: none;
  margin-right: 8px;
  margin-bottom: 8px;
}

.pill:hover {
  border: 1px solid var(--light-600);
  text-decoration: none;
}

/* Components */

.top-links {
  font-size: 1rem;
}

.top-links > *:not(:last-child) {
  margin-right: 8px;
}

.box {
  height: 100%;
  min-width: 220px;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: space-between;
  padding: 16px;
  border-radius: 4px;
  border: 1px solid var(--light-300);
}

.box .odswidget-charts {
  width: 250px;
  height: 250px;
  margin: 0;
}

.pill-list {
  display: flex;
  flex-wrap: wrap;
}

a.box:hover {
  text-decoration: none;
}

.box:hover {
  border: 1px solid var(--light-600);
}

.top3-table {
  width: 100%;
}

.top3-table th {
  background-color: var(--identity-light);
  padding: 8px;
  color: var(--identity);
  font-weight: 300;
  white-space: nowrap;
}

.top3-table td a {
  font-weight: 300;
}

.top3-table td {
  padding: 8px;
}

.top3-table tr {
  border-top: 1px solid #dee5ef;
}

.top3-table tbody tr:nth-child(-n + 3) * {
  font-weight: 500;
}

/* Utilities */

.m-4 {
  margin: 24px;
}
