const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);

const n = input[0];
const ppl = input.slice(1);

ppl.sort((a, b) => a - b);

let sum = 0;
let total = 0;

for (let i = 0; i < n; i++) {
    sum += ppl[i];
    total += sum;
}

console.log(total);
