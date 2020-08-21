#include <bits/stdc++.h>
using namespace std;


int partition(int *arr,int l,int h){

   int i=l;
   int j=h;
   int pivot = arr[l];
   while(i < j){
   do{
      i++;
   }
   while(arr[i] < pivot);
   do{
       j--;
   }
   while(arr[j] > pivot);
   if(i < j){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
   }
   }   

   int temp2 = arr[l];
   arr[l] = arr[j];
   arr[j] = temp2;

   return j; 

}

void quicksort(int *arr,int l,int h){                          // Best Case : O(nlogn) 
    if(l < h){                                                 // Average Case : O(nlogn)
        int pat = partition(arr,l,h);                          // Worst Case : O(n2)
        quicksort(arr,l,pat);
        quicksort(arr,pat+1,h);
    }
}


int main(){
    int arr[5] = {3,4,2,6,1};
    quicksort(arr,0,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}