const fs = require('fs');
const input =  fs.readFileSync("/dev/stdin").toString().split(" ");
const secondLine =  fs.readFileSync("/dev/stdin").toString().split("\n")[1];

const firstInput = parseInt(input[0]);
const secondInput = parseInt(input[1]);
const array = [];

const loop = secondLine.split(" ");
if(loop.length === firstInput){
    for(let N in loop){
        if(loop[N] < secondInput){
            array.push(loop[N]);
        }
    }
}

console.log(array.join(" "));