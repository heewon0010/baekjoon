const fs = require("fs");
const n = Number(fs.readFileSync(0, "utf8").trim());

let fibN;
if (n <= 2) {
  fibN = 1;
} else {
  let a = 1, b = 1;

  for (let i = 3; i <= n; i++) {
    const c = a + b;
    a = b;
    b = c;
  }
  fibN = b;
}

const dpCount = n - 2;
console.log(`${fibN} ${dpCount}`);
