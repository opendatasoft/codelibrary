/* Search Module
   ========================================================================== */
.search-module {
  display: flex;
  align-items: stretch;
  border-bottom: 1px solid #dee5ef;
  margin-bottom: 20px;
  transition: all .2s;
}
.search-module:hover,
.search-module:focus-within {
  border-bottom-color: var(--links);
}
.search-module-icon {
  color: #898d92;
  margin-right: 8px;
  align-self: center;
}
.search-module-input {
  background-color: transparent;
  width: 100%;
  outline: none;
  border: none;
  padding: 12px 0;
  transition: all .2s;
  color: var(--text);
}
.search-module-input::placeholder {
  transition: all .2s;
}
.search-module-clear {
  color: #898d92;
  font-size: 1rem;
  background: transparent;
  border: none;
  margin: 0;
  outline: none;
  padding: 0 0 0 12px;
  transition: all .2s;
}
.search-module-clear:hover {
  opacity: .65;
}
.search-module:hover .search-module-icon,
.search-module:focus-within .search-module-icon,
.search-module:hover .search-module-input::placeholder,
.search-module:focus-within .search-module-input::placeholder {
  color: var(--links)
}
