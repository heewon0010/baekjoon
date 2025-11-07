const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(' ');

const str = input[0];

console.log(str*4000);