

process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";

process.stdin.on("data", function (input) {
    stdin_input += input;                               // Reading input from STDIN
});

process.stdin.on("end", function () {
   main(stdin_input);
});
ction main(input) {
     
         // Writing output to STDOUT
         var count =0;
         var tempCount=0;
         for(var i=0;i<input.length;i++){
             if(input[i]==='a'||input[i]==='e'||input[i]==='i'||input[i]==='o'||input[i]==='u'){
                 tempCount++;
             }else{
                 if(count<tempCount){
                     count=tempCount;
                 }
                 tempCount=0;
             }
         }
         process.stdout.write(count+""); 
}

