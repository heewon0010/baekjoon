const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(' ').map(Number);

const s1 = input[0];
const s2 = input[1];

if (s1 >= s2 / 2) {
  console.log("E");
} else {
  console.log("H");
}
