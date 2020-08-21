




#include<bits/stdc++.h>
using namespace std; 
 void insertionSort(int * ar,int size) {    
   int i,j,value;  
   for(i=1;i<size;i++)  
   {  
     value=ar[i];  
     j=i-1;  
     while(j>=0 && value<ar[j])  
     {  
       ar[j+1]=ar[j];  
       j=j-1;  
     }  
     ar[j+1]=value;      
   }  
   for(j=0;j<size;j++)  
     {  
       cout<<ar[j]<<" ";  
       
     }  
 }  
 int main() {    
   int size;  
 cin>>size;  
 int arr[size],i;  
 for(i = 0; i < size;i++) {   
   cin>>arr[i];   
 }  
 insertionSort(arr,size);  
   return 0;  
 }  