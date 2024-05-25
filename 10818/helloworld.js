const fs = require('fs');
const input = fs.readFileSync("10818/test.txt").toString().split("\n");

const firstInput = parseInt(input[0]);
const secondInput = input[1].split(" ");
let maxValue = 0;
let minValue = secondInput[0];
for (let index = 0; index < firstInput; index++) {
    const comparison = parseInt(secondInput[index]);
    if(maxValue < comparison){
        maxValue = comparison;
    }
    if(minValue > comparison){
        minValue = comparison;
    }
}

console.log(`${minValue} ${maxValue}`);