// Copy Button for Code Blocks

// References
// 1. https://tomspencer.dev/blog/2018/09/14/adding-click-to-copy-buttons-to-a-hugo-powered-blog/
// 2. https://www.dannyguo.com/blog/how-to-add-copy-to-clipboard-buttons-to-code-blocks-in-hugo/
import * as clipboard from 'clipboard-polyfill';

const addCCtoColor = (color) => {
  const clipContent = color.querySelector('code').innerText;
  color.addEventListener('click', async (event) => {
    await clipboard.writeText(clipContent);
    color.classList.add('is-success');
    color.dataset.tooltip = 'Copied!';
  })

  color.addEventListener('mouseleave', (event) => {
      color.classList.remove('is-success');
      color.dataset.tooltip = 'Copy color to clipboard';
  })
}

const addCCToCode = (codeBox, copyButton, copiedButton) => {
  copyButton.addEventListener('click', async (event) => {
    const activeTab = codeBox.querySelector('.js-tabcontent.is-active');
    const clipContent = activeTab.dataset.clipboard;
    if (clipContent) {
      await clipboard.writeText(clipContent);
      copyButton.blur();
      toggleHidden([copyButton, copiedButton]);
    }
  });

  copiedButton.addEventListener('mouseleave', (event) => {
    setTimeout(() => toggleHidden([copyButton, copiedButton]), 200);
  })
}

const toggleHidden = (nodeArray) => {
  nodeArray.forEach((node) => node.classList.toggle('is-hidden'));
}

const hideCopyIfColors = (copyButton, colorsTab) => {
  const observer = new MutationObserver((mutations) => {
    colorsTab.classList.contains('is-active')
      ? copyButton.classList.add('is-hidden')
      : copyButton.classList.remove('is-hidden')
  })

  observer.observe(colorsTab, { attributeFilter: ['class'] })
}

const initCC = (codeBox) => {
  const copyButton = codeBox.querySelector('.copy-to-cc');
  const copiedButton = codeBox.querySelector('.copied-to-cc');
  const colorsTab = codeBox.querySelector('.theme-colors');

  if (colorsTab) {
    hideCopyIfColors(copyButton, colorsTab);
    const colorNodes =  colorsTab.querySelectorAll('.color')
    colorNodes.forEach(addCCtoColor);
  }

  addCCToCode(codeBox, copyButton, copiedButton)
}

export default () => {
    const codeBoxes = document.querySelectorAll('.box-code');
    codeBoxes.forEach(codeBox => initCC(codeBox));
}
