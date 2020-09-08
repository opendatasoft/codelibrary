(() => {
  // assets/js/copy.js
  window.addEventListener("DOMContentLoaded", (event) => {
    const copyText = "copy";
    const copiedText = "copied";
    document.querySelectorAll(".post-body > pre").forEach((e) => {
      let div = document.createElement("div");
      e.parentNode.replaceChild(div, e);
      div.appendChild(e);
    });
    function addCopyButtons(clipboard2) {
      const divs = document.querySelectorAll("table.lntable, .highlight > pre, .post-body > div > pre");
      divs.forEach((containerEl) => {
        containerEl.parentNode.style.position = "relative";
        const button = document.createElement("button");
        button.className = "copy-button";
        button.type = "button";
        button.innerText = copyText;
        if (containerEl.classList.contains("lntable")) {
          var codeBlock = containerEl.querySelectorAll(".lntd")[1];
        } else {
          var codeBlock = containerEl.querySelector("code");
        }
        button.addEventListener("click", () => {
          clipboard2.writeText(codeBlock.innerText).then(() => {
            button.blur();
            button.innerText = copiedText;
            setTimeout(() => {
              button.innerText = copyText;
            }, 1e3);
          }).catch((error) => {
            button.innerText = "Error";
            console.error(error);
          });
        });
        containerEl.appendChild(button);
      });
    }
    if (navigator && navigator.clipboard) {
      addCopyButtons(navigator.clipboard);
    } else {
      const script = document.createElement("script");
      script.src = "https://cdn.jsdelivr.net/npm/clipboard-polyfill@2.8.6/dist/clipboard-polyfill.min.js";
      script.defer = true;
      script.onload = function() {
        addCopyButtons(clipboard);
      };
      document.head.appendChild(script);
    }
  }, {once: true});

  // assets/js/algolia.js
  const search = instantsearch({
    appId: "XGE67QYGAR",
    apiKey: "4de1a710351e1933128b8010dbc2a327",
    indexName: "Codelibrary",
    hitsPerPage: 5,
    routing: true,
    searchFunction(helper) {
      const container = document.querySelector("#algolia-results");
      container.style.display = helper.state.query === "" ? "none" : "";
      helper.search();
    }
  });
  search.addWidget(instantsearch.widgets.searchBox({
    container: "#algolia-box",
    reset: true,
    placeholder: "Search for content"
  }));
  search.addWidget(instantsearch.widgets.infiniteHits({
    container: "#algolia-results",
    templates: {
      empty: "No results",
      item: "<hr/> {{{_highlightResult.title.value}}}<br/> {{{_highlightResult.summary.value}}} <br/>{{{_highlightResult.tags[0].value}}}"
    }
  }));
  search.addWidget(instantsearch.widgets.refinementList({
    container: "#algolia-refine",
    attributeName: "tags"
  }));
  search.start();

  // main.js
})();
