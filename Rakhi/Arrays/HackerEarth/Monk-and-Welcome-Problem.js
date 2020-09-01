
// Sample code to perform I/O:

process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";

process.stdin.on("data", function (input) {
    stdin_input += input;                               // Reading input from STDIN
});

process.stdin.on("end", function () {
   main(stdin_input);
});

function main(input) {
   var data=input.split('\n');
    const N=data[0];
    var a=data[1].split(" ");
    var b=data[2].split(" ");
    var c="";
    for(var i=0; i<N;i++){
        if(i==N-1){
            c += (parseInt(a[i])+ parseInt(b[i])) ;
        }else{
            c += (parseInt(a[i])+ parseInt(b[i])) + " ";
        }
       
    }
     process.stdout.write(c);
    
}

