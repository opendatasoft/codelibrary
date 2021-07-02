const blockLinks = links => {
  console.log("found links", links);
  links.forEach(link => {
    link.addEventListener("click", e => e.preventDefault());
  });
};

const waitAndBlockLinks = iframe => {
  const observer = new MutationObserver(mutations => {
    const links = iframe.contentDocument.querySelectorAll('[href="#"]');
    links.length > 0 && blockLinks(links);
  });

  observer.observe(iframe.contentDocument, {
    childList: true,
    subtree: true
  });
};

export default () => {
  const iframes = document.querySelectorAll("iframe");
  iframes.forEach(waitAndBlockLinks);
};
