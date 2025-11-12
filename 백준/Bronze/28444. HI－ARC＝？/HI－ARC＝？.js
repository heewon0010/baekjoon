const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(' ');
console.log(input[0]*input[1]-input[2]*input[3]*input[4]);
