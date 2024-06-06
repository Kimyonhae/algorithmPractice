const fs = require('fs');


answer = fs.readFileSync("15894/test.txt").toString();

console.log(parseInt(answer) * 4);