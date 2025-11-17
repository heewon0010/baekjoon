const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split('\n');

let n = Number(input[0]);
let stack = [];
let ans = [];

for (let i = 1; i <= n; i++) {
    let a = input[i];

    if (a.startsWith('push')) {
        const x = Number(a.split(' ')[1]);
        stack.push(x);
    } 
    else if (a === 'pop') {
        ans.push(stack.length ? stack.pop() : -1);
    }
    else if (a === 'size') {
        ans.push(stack.length);
    } 
    else if (a === 'empty') {
        ans.push(stack.length === 0 ? 1 : 0);
    } 
    else if (a === 'top') {
        ans.push(stack.length ? stack[stack.length - 1] : -1);
    }
}

console.log(ans.join('\n'));
