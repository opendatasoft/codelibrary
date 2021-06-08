/* Import des autres stylesheets css*/
body {
  background-color: #ffffff;
}

@media screen and (max-width: 992px) {
  body {
    padding: 0;
  }
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

.odswidget-charts {
  margin: 0 -12px;
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
  margin-top: -1em;
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

.menu {
  display: flex;
  justify-content: center;
  align-items: stretch;
  background: white;
  border-radius: 999px;
  padding: 0 16px;
  margin-top: 16px;
}

@media screen and (max-width: 768px) {
  .menu {
    flex-direction: column;
    width: 100%;
    border-radius: 0;
    margin: 0;
    padding: 0;
  }
}

.filter {
  display: flex;
  flex: 1 1;
  align-items: center;
  justify-content: flex-end;
  padding: 8px;
}

.filter:not(:last-child) {
  border-right: 1px solid lightgray;
}

.filter .odswidget-select {
  min-width: 220px;
}

.filter > *:not(:last-child) {
  margin-right: 8px;
}

.filter .odswidget-timerange {
  display: flex;
}

.filter .odswidget-timerange__to,
.filter .odswidget-timerange__from {
  display: flex;
  justify-content: space-between;
  margin-right: 16px;
}

.filter .odswidget-timerange__label {
  margin-right: 8px;
}

.filter .odswidget-select-button:hover {
  /*! border: 1px solid #33629C; */
}

.filter .odswidget-select-button,
.filter .odswidget-select-input {
  padding: 8px;
  border: none;
  background: transparent;
}

.filter .odswidget-select-button:hover {
  border: none;
}

.filter .odswidget-timerange__input {
  border: none;
  border-bottom: 1px solid lightgrey;
}

.filter .odswidget-select-dropdown-menu {
  top: 32px;
}

.filter .odswidget-select-input-container {
  border: none;
}

@media screen and (max-width: 768px) {
  .filter {
    justify-content: center;
  }

  .filter .odswidget-timerange {
    flex-direction: column;
  }

  .filter .odswidget-timerange__from {
    margin-bottom: 2em;
  }

  .filter:not(:last-child) {
      width: 100%;
      border-right: none;
      border-bottom: 1px solid lightgray;
  }
}

.card {
  border-radius: 4px;
  padding: 16px;
  height: 100%;
}

.data-table {
  width: 100%;
}

.data-table th {
  background-color: #f2f3f8;
  padding: 8px;
  color: #142e7b;
  font-weight: 300;
  white-space: nowrap;
}

.data-table td a {
  font-weight: 300;
}

.data-table td {
  padding: 8px;
  max-width: 265px;
  overflow: hidden;
  text-overflow: ellipsis;
}

.data-table tr {
  border-top: 1px solid #dee5ef;
}

.data-table tbody tr:nth-child(-n + 3) * {
  font-weight: 500;
}
