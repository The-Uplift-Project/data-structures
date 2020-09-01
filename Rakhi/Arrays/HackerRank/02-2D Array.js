'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the hourglassSum function below.
function hourglassSum(arr) {

    var hourglassresult=Number.MIN_SAFE_INTEGER;
    for(var row=0;row<arr.length-2;row++){
        for(var col=0;col<arr[0].length-2;col++){
            var add=0;
            for (var hrrow = row; hrrow <= row + 2; hrrow++) {
                    for (var hrcol = col; hrcol <= col + 2; hrcol++) {
                        add=add+arr[hrrow][hrcol];
                    }
                }
                add=add-arr[row+1][col]-arr[row+1][col+2];
                
                if(hourglassresult<add){
                    hourglassresult=add;
                   
                }
        }

    
    }
    
return hourglassresult;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    let arr = Array(6);

    for (let i = 0; i < 6; i++) {
        arr[i] = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));
    }

    let result = hourglassSum(arr);

    ws.write(result + "\n");

    ws.end();
}
