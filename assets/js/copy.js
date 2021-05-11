// Copy Button for Code Blocks

// References
// 1. https://tomspencer.dev/blog/2018/09/14/adding-click-to-copy-buttons-to-a-hugo-powered-blog/
// 2. https://www.dannyguo.com/blog/how-to-add-copy-to-clipboard-buttons-to-code-blocks-in-hugo/

const addCopyButtons = (clipboard) => {
  const copyButton = document.querySelector('.copy-to-cc')
  const copiedButton = document.querySelector('.copied-to-cc')

  const toggleButtons = () => {
    console.log('toggle');
    copyButton.classList.toggle('is-hidden');
    copiedButton.classList.toggle('is-hidden');
  }

  copyButton.addEventListener('click', async (event) => {
    const activeTab = document.querySelector('.js-tabcontent.is-active');
    const clipContent = activeTab.dataset.clipboard;
    await clipboard.writeText(clipContent);
    copyButton.blur();
    toggleButtons();
  })

  copiedButton.addEventListener('mouseleave', (event) => {
    setTimeout(toggleButtons, 200);
  })
}

export default (event) => {
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
};
