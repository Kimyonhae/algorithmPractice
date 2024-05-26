const fs = require('fs');

const file = fs.readFileSync("10810/test.txt").toString().split("\n");

const [baguni , count] = file[0].split(" ");

const init_state = Array(parseInt(baguni)).fill(0);
for (let index = 1; index <= parseInt(count); index++) {
    let process = file[index].split(" ");
    for (let second = parseInt(process[0]); second <= parseInt(process[1]); second++) {
        init_state[second - 1] = parseInt(process[2]);
    }
}


console.log(init_state.join(" "));