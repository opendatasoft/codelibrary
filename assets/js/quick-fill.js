export default () => {
  const code = document.querySelector('pre');
  console.log('found', code);
  code.replace(/(?<={%)(.*?)(?=%})/, '#00C7B1')
  console.log(code)
}
