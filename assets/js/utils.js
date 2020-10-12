export const addAnchorsToHeaders = () => {
    var img = document.createElement('img');
    img.src = '/img/fas-link.svg';
    var h2s = document.querySelectorAll('.content h2');
    h2s.forEach((el) => {
        var a = document.createElement('a');
        a.classList.add('anchor-link');
        a.href = "#" + el.id;
        a.appendChild(img.cloneNode());
        el.appendChild(a);
    });
}

function slugify(separator = "-") {
    return this
        .toString()
        .normalize('NFD')                   // split an accented letter in the base letter and the acent
        .replace(/[\u0300-\u036f]/g, '')   // remove all previously split accents
        .toLowerCase()
        .trim()
        .replace(/[^a-z0-9 ]/g, '')   // remove all chars not letters, numbers and spaces (to be replaced)
        .replace(/\s+/g, separator);
};

export default () => { addAnchorsToHeaders, slugify }