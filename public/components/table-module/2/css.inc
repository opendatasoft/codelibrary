/* Table with details panel
   ========================================================================== */
.table-module {
  height: 400px;
  overflow-y: auto;
}
.table-detail {
  display: table;
  border-collapse: collapse;
  width: 100%;
  white-space: nowrap;
  background-color: #FFFFFF;
}
.table-detail thead th {
  color: var(--titles);
  background-color: #f6f8fb;
  font-weight: 500;
  padding: 13px 3px;
  position: sticky;
  top: 0;
  z-index: 1;
}
.table-detail thead th:first-child,
.table-detail tbody th {
  padding-left: 13px;
}
.table-detail tr td,
.table-detail tbody th {
  font-weight: normal;
  border-top: 1px solid #dee5ef;
}
.table-detail tr td {
  padding: 13px 3px;
}
/* Summary */
.table-row-header {
  display: flex;
  align-items: center;
}
.table-row-header-details {
  opacity: .8;
  margin: 0 3px;
}
.table-detail tbody tr th:hover {
  color: var(--links);
}
/* Details */
.table-detail-active {
    color: var(--links);
}
.table-item-details {
  padding-bottom: 26px;
}
.table-detail .table-item-details td {
  border-top: none;
}
.table-detail .table-item-details td:first-child {
  padding-left: 13px;
}
