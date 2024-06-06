const fs = require('fs');
const input = fs.readFileSync("27323/test.txt").toString().split("\n");

console.log(parseInt(input[0]) * parseInt(input[1]));