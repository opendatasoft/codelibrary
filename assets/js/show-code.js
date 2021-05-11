const addToggleButton = box => {
  const button = box.querySelector(".button");
  const codeBox = box.querySelector(".box-code");

  button.addEventListener("click", () => {
    codeBox.classList.toggle("is-hidden");
    button.classList.toggle("is-outlined");
    button.classList.toggle("is-active primary");
  });
};

export default () => {
  const boxes = document.querySelectorAll(".box");
  [...boxes].forEach(addToggleButton);
};
