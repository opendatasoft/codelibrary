const addToggleButton = (box, name) => {
  const button = box.querySelector(`button.show-${name}`);
  const content = box.querySelector(`div.box-${name}`);

  if (!button || !content) { return }

  button.addEventListener("click", () => {
    content.classList.toggle("is-hidden");
    button.classList.toggle("is-active");
  });
};

export default () => {
  const boxes = document.querySelectorAll(".box");
  [...boxes].forEach((box) => {
    addToggleButton(box, 'code');
    addToggleButton(box, 'schema');
  } );
};
