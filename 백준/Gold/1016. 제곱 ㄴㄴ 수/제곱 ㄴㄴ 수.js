const fs = require('fs');
const [min, max] = fs.readFileSync(0, 'utf8').trim().split(' ').map(BigInt);

const n = Number(max - min + 1n);
const check = new Array(n).fill(false);

for (let i = 2n; i * i <= max; i++) {
  const square = i * i;
  let start = (min % square === 0n) ? min : min - (min % square) + square;
  for (let j = start; j <= max; j += square) {
    check[Number(j - min)] = true;
  }
}

let cnt = 0;
for (let i = 0; i < n; i++) if (!check[i]) cnt++;
console.log(cnt);
