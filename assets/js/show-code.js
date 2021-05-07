const addToggleButton = box => {
  const button = box.querySelector(".button");
  const codeBox = box.querySelector(".box-code");

  button.addEventListener("click", () => {
    codeBox.classList.toggle("is-hidden");
  });
};

export default () => {
  const boxes = document.querySelectorAll(".box");
  [...boxes].forEach(addToggleButton);
};
