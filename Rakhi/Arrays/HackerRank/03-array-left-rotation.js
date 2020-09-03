'use strict';

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


function rotateArrayLeftDTime(d,a){
    // number of rotation loop
    for(var i=0;i<d;i++){
        var firstPosElement=a[0];
        // rotate array to left by one position
        for(var pos=0;pos<a.length-1;pos++){
            a[pos]=a[pos+1];
        }
        a[a.length-1]=firstPosElement;
    }

    console.log(a.join(' '));
}
function main() {
    const nd = readLine().split(' ');

    const n = parseInt(nd[0], 10);

    const d = parseInt(nd[1], 10);

    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));

    rotateArrayLeftDTime(d,a);
}
