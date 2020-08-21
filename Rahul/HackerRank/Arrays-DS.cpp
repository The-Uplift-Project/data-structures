#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int size,i; //declares variable size for array
    cin>>size;  //takes input from user
    int arr[size]; //declares array
    for(i=0;i<size;i++){
        cin>>arr[i];    // takes input array from user
    }
    
    for(i=size-1;i>=0;i--){ // loop is intialize with the last element of array
        cout<<arr[i]<<" ";  // print array to the screen
    }
    
    return 0;
}

