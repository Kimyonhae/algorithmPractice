const fs = require('fs');

const input = fs.readFileSync("2562/test.txt").toString().split("\n");
let maxValue = {'value' : parseInt(input[0]) , 'index' : 1};

for(var number in input){
    if(maxValue.value < parseInt(input[number])){
        maxValue.value = parseInt(input[number]);
        maxValue.index = parseInt(number) + 1;
    }
}

console.log(maxValue.value);
console.log(maxValue.index);