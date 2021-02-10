// Copy Button for Code Blocks

// References
// 1. https://tomspencer.dev/blog/2018/09/14/adding-click-to-copy-buttons-to-a-hugo-powered-blog/
// 2. https://www.dannyguo.com/blog/how-to-add-copy-to-clipboard-buttons-to-code-blocks-in-hugo/
export const initCopyColorToCB = (event) => {
  const copyText = 'Copy color to clipboard';
  const copiedText = 'Copied!';

  function addCopyButtons(clipboard) {
    const divs = document.querySelectorAll('.ods-content .theme-colors .color');

    divs.forEach((containerParent) => {
      const containerEl = containerParent.querySelectorAll('.highlight > pre')[0];
      containerParent.setAttribute("role", "button");
      containerParent.dataset['tooltip'] = copyText;
      containerParent.classList.add('has-tooltip-top');

      const codeBlock = containerEl.querySelector('code');

      containerParent.addEventListener('click', () => {
        clipboard.writeText(codeBlock.innerText).then(() => {
          /* Chrome doesn't seem to blur automatically,
          leaving the button in a focused state. */
          containerParent.blur();
          containerParent.dataset['tooltip'] = copiedText;
          containerParent.classList.add('copied');

          setTimeout(() => {
            containerParent.dataset['tooltip'] = copyText;
            containerParent.classList.remove('copied');
          }, 1000);
        }).catch((error) => {
          button.innerText = 'Error';
          console.error(error);
        });
      });
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
