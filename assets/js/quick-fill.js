const replaceField = (code, field) => {
    const label = field.dataset.label;
    const re = new RegExp(`%%${label}%%`, 'g');
    const filledCode = code.replaceAll(re, field.value || field.dataset.default);
    return filledCode;
}

export default ({ code }) => {
  const formFields = document.querySelectorAll('.quickfill input');
  const filledCode = [...formFields].reduce(replaceField, code);
  return { filledCode };
}
