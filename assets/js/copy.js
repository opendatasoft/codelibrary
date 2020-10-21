// Copy Button for Code Blocks

// References
// 1. https://tomspencer.dev/blog/2018/09/14/adding-click-to-copy-buttons-to-a-hugo-powered-blog/
// 2. https://www.dannyguo.com/blog/how-to-add-copy-to-clipboard-buttons-to-code-blocks-in-hugo/
export const initCopyToCB = (event) => {
  const copyText = '<img src="/img/copy.svg" />';
  const copiedText = 'Copied!';

  document.querySelectorAll('.post-body > pre').forEach((e) => {
    let div = document.createElement('div');
    e.parentNode.replaceChild(div, e);
    div.appendChild(e);
  });

  function addCopyButtons(clipboard) {
    const divs = document.querySelectorAll('table.lntable, .highlight > pre, .post-body > div > pre');

    divs.forEach((containerEl) => {
      containerEl.parentNode.style.position = 'relative';

      const button = document.createElement('button');
      button.className = 'button button-copy is-rounded is-secondary has-tooltip-left';
      button.dataset['tooltip'] = "Copy to clipboard";
      button.type = 'button';
      button.innerHTML = copyText;

      if (containerEl.classList.contains('lntable')) {
        var codeBlock = containerEl.querySelectorAll('.lntd')[1];
      } else {
        var codeBlock = containerEl.querySelector('code');
      }

      button.addEventListener('click', () => {
        clipboard.writeText(codeBlock.innerText).then(() => {
          /* Chrome doesn't seem to blur automatically,
          leaving the button in a focused state. */
          button.blur();

          button.innerText = copiedText;
          button.classList.add('copied');

          setTimeout(() => {
            button.innerHTML = copyText;
            button.classList.remove('copied');
          }, 1000);
        }).catch((error) => {
          button.innerText = 'Error';

          console.error(error);
        });
      });

      containerEl.appendChild(button);
    });
  }

  if (navigator && navigator.clipboard) {
    addCopyButtons(navigator.clipboard);
  } else {
    const script = document.createElement('script');
    script.src = 'https://cdn.jsdelivr.net/npm/clipboard-polyfill@2.8.6/dist/clipboard-polyfill.min.js';
    script.defer = true;
    script.onload = function() {
      addCopyButtons(clipboard);
    };

    document.head.appendChild(script);
  }
}
