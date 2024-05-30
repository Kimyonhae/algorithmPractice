const fs = require('fs');
const input = fs.readFileSync("10807/test.txt").toString().split("\n");

let count = 0;

const secondInput = input[1];
const threeInput = input[2];

const loopState = secondInput.split(" ");


for(var state  in loopState){
    if(loopState[state] === threeInput){
        count++;
    }
}

console.log(count);