let domain = process.argv[2];
let dataset = process.argv[3];
let fields = process.argv[4];

let query = `https://${domain}.opendatasoft.com/explore/dataset/${dataset}/download/?format=csv&use_labels_for_header=false&rows=4&fields=${fields}`;

const axios = require("axios");
const fs = require('fs');

function writeDisk(path, content) {
    fs.writeFileSync(path, content, (err) => {
        if (err) throw err;
    });
}

axios.get(query)
    .then(res => res)
    .then(res => {
        // console.log(res.data);
        let data = res.data;
        let dataByLine = data.split('\r\n');
        let dataHeaders = dataByLine.shift();
        let nbHeaders = 1;
        let markdownSep = '|---|';
        if (dataHeaders.match(/;/g)) {
            nbHeaders = dataHeaders.match(/;/g).length;
            markdownSep = new Array(nbHeaders + 2).join('|---') + '|'
        }
        let markdownHeader = `|${dataHeaders.replaceAll(';', '|')}|`;
        let markdownData = '';
        dataByLine.filter(r => r).forEach((line) => {
            markdownData = `${markdownData}|${line.replaceAll(';', '|')}|\n`;
        })

        writeDisk('./schema.md',
            `**Dataset in use:** \`${dataset}\` [(See it on ${domain} domain)](https://${domain}.opendatasoft.com/explore/dataset/${dataset}/table/)

**Fields in use:**

${markdownHeader}
${markdownSep}
${markdownData}
`);
    });