const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim();
const N = Number(input);

let sum = N * (N + 1) / 2;   // 1~N 합
let square = sum * sum;      // 그 합의 제곱

let cubeSum = 0;
for (let i = 1; i <= N; i++) {
  cubeSum += i * i * i;      // i^3 더하기
}

console.log(sum);
console.log(square);
console.log(cubeSum);
