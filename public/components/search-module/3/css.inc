/* Search Module
========================================================================== */
.search-bar {
  display: flex;
  align-items: stretch;
  border-bottom: 1px solid #dee5ef;
  margin-bottom: 20px;
  transition: all .2s;
}
.search-bar:hover,
.search-bar:focus-within {
  border-bottom-color: var(--links);
}
.search-bar-icon {
  color: #898d92;
  margin-right: 8px;
  align-self: center;
}
.search-bar-input {
  background-color: transparent;
  width: 100%;
  outline: none;
  border: none;
  padding: 12px 0;
  transition: all .2s;
  color: var(--text);
}
.search-bar-input::placeholder {
  transition: all .2s;
}
.search-bar-clear {
  color: #898d92;
  font-size: 1rem;
  background: transparent;
  border: none;
  margin: 0;
  outline: none;
  padding: 0 0 0 12px;
  transition: all .2s;
}
.search-bar-clear:hover {
  opacity: .65;
}
.search-bar:hover .search-bar-icon,
.search-bar:focus-within .search-bar-icon,
.search-bar:hover .search-bar-input::placeholder,
.search-bar:focus-within .search-bar-input::placeholder {
  color: var(--links)
}



/* Display results */

.display-tags {
  display: flex;
  flex-wrap: wrap;
  margin: 20px 10px;
  padding: 0;
}
.display-tags li {
  list-style: none;
}
.display-tags a {
  align-items: center;
  background-color: #f5f5f5;
  border-radius: 4px;
  color: #4a4a4a;
  display: inline-flex;
  font-size: 0.85rem;
  justify-content: center;
  line-height: 1.5;
  padding: 0.25em .75em;
  white-space: nowrap;
  margin: 0.2rem;
  text-decoration: none;
}
.display-tags a i {
    margin-left: 6px;
}
.display-tags a:focus, .display-tags a:hover {
  border-color: #4a4a4a;
  background-color: #d0d0d0;
}

.more-than-ten {
  display: flex;
  align-items: center;
  color: #4a4a4a;
  padding: 2px 5px;
}
