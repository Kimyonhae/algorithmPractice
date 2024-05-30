const fs = require('fs');

const input = fs.readFileSync("27866/test.txt").toString().split("\n");

const firstLine = input[0].split("");
const secondLine = parseInt(input[1]);

console.log(firstLine[secondLine - 1]);