const fs = require('fs');
const input = fs.readFileSync("10813/test.txt").toString().split("\n");

const [firstLine_first, firstLine_second] = input[0].split(" ");

const firstIn = parseInt(firstLine_first);
const secondIn = parseInt(firstLine_second);

let newArray = [];

for (let index = 0; index < firstIn; index++) {
    newArray[index] = index + 1;
}

for (let i = 0; i < secondIn; i++) {
    const [first , second] = input[i + 1].split(" ");
    const savedFirst = newArray[parseInt(first) - 1];
    const savedSecond = newArray[parseInt(second) - 1];

    newArray[parseInt(first) - 1] = savedSecond;
    newArray[parseInt(second) - 1] = savedFirst;
}


console.log(newArray.join(" "));