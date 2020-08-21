
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
    // process.stdout.write("Hi, " + input + ".\n");       // Writing output to STDOUT
    var data= input.split("\n");
    const T= data[0] // number of test cases
    

    for(var i=0;i<T;i++){
        var nkLine=(i*2)+1;
        var arrLine=(i*2)+2;
        var n= data[nkLine].split(" ")[0] // length of the array
        var k= data[nkLine].split(" ")[1] // number of rotations
        var arr=data[arrLine].split(" ");   
        rotateRight(n,k,arr);
        
    }

}

function rotateRight(n,k,arr){
    // arrayReverse(arr,n-k,n-1);
    
    // arrayReverse(arr,0,n-k-1);
    // arrayReverse(arr,0,n-1);
    // rotating array element by element 
    // for(var i=0;i<k;i++){
    //     var lastElement=arr[n-1];
    //     for(var j=n-1;j>0;j--){
    //         arr[j]=arr[j-1];
    //     }
    //     arr[0]=lastElement;
    // }
    // reducing the number of rotation
    k%=n;
    
    arrayReverse(arr,n-k,n-1);
    arrayReverse(arr,0,n-k-1);
    arrayReverse(arr,0,n-1);
    for(var i=0;i<n;i++){
        if(i==n-1){
            process.stdout.write(arr[i]+"\n");
        }else{
            process.stdout.write(arr[i]+" ");
        }
    }
    
}

function arrayReverse(arr,k,n){
    while(k<n){
        var temp= arr[k];
        arr[k]=arr[n];
        arr[n]=temp;
        k++;
        n--;
    }
}
