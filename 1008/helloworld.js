const fs = require('fs');

const input = fs.readFileSync("/dev/stdin").toString().split(" ");

const first_answer = input[0];
const second_answer = input[1];


console.log(first_answer / second_answer);