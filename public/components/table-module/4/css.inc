/* Table Advanced
   ========================================================================== */
.table-module {
  height: 400px;
  overflow-y: auto;
}
.table-advanced {
  display: table;
  border-collapse: collapse;
  width: 100%;
  white-space: nowrap;
  background-color: #FFFFFF;
}
.table-advanced thead th {
  color: var(--titles);
  background-color: #f6f8fb;
  font-weight: 500;
  padding: 13px 3px;
  position: sticky;
  top: 0;
  z-index: 1;
}
.table-advanced thead th:first-child,
.table-advanced tbody th {
  padding-left: 13px;
}
.table-advanced tr td,
.table-advanced tbody th {
  font-weight: normal;
  border-top: 1px solid #dee5ef;
}
.table-advanced tr td {
  padding: 13px 3px;
}
/* Dropdown */
.table-dropdown-container {
  position: relative;
  margin-right: 4px;;
}
.table-dropdown-button {
  width: 28px;
  height: 28px;
  padding: 0;
  line-height: 1;
  display: flex;
  align-items: center;
  justify-content: center;
  background: white;
  border: 1px solid transparent;
  border-radius: 4px;
  margin-left: auto;
}
.table-advanced tr:hover .table-dropdown-button {
  border-color: var(--highlight);
}
.table-dropdown-button-active {
  box-shadow: 0 0 0 3px rgba(20, 46, 123, 0.3);
  border-color: var(--highlight);
}
.table-dropdown {
  visibility: hidden;
  opacity: 0;
  position: absolute;
  z-index: 3;
  top: 0;
  right: 0;
  border: 1px solid #FFFFFF;
  border-radius: 4px;
  border-color: rgba(222, 229, 239, 1);
  padding: 13px;
  white-space: nowrap;
  background: white;
  box-shadow: 0 2px 4px rgba(0, 0, 0, 0.15);
  transition: visibility 0s, opacity 0.1s ease, top 0.1s ease;
}
.table-dropdown-visible {
  visibility: visible;
  opacity: 1;
  top: 38px;
}
.table-dropdown-item {
  padding: 2px 6px 2px 0;
  display: block;
}
.table-dropdown-backdrop {
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  cursor: auto;
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
/* Details */
.table-advanced tbody tr th:hover {
  color: var(--links);
}
.table-advanced-active {
    color: var(--links);
}
.table-item-details {
  padding-bottom: 26px;
}
.table-advanced .table-item-details td {
  border-top: none;
}
.table-advanced .table-item-details td:first-child {
  padding-left: 13px;
}
