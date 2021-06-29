/* Table Module Basic
   ========================================================================== */
.table-module {
  height: 400px;
  overflow-y: auto;
}
.table-basic {
  display: table;
  border-collapse: collapse;
  width: 100%;
  white-space: nowrap;
  background-color: #FFFFFF;
}
.table-basic thead th {
  color: var(--titles);
  background-color: #f6f8fb;
  font-weight: 500;
  padding: 13px 3px;
  position: sticky;
  top: 0;
  z-index: 1;
}
.table-basic thead th:first-child,
.table-basic tbody th {
  padding-left: 13px;
}
.table-basic tr td,
.table-basic tbody th {
  font-weight: normal;
  border-top: 1px solid #dee5ef;
}
.table-basic tr td {
  padding: 13px 3px;
}
