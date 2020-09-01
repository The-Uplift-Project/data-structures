#include <bits/stdc++.h>
using namespace std;


void Heapify(int *arr,int n){                                    // Creating a Max heap 
                                                                 // Complexity : O(n)
    for(int i = n; i>= 1; i--){                                  // usual heap creation (i.e. insertion of ele  ) takes : O(nlogn) : insert n ele * log(n) height of heap
          int child1 = 2*i;
          int child2 = 2*(i+1)-1;
          if(child1 <= n && child2 <= n){
              if(arr[child1]>= arr[child2] && arr[child1] > arr[i]){
                  swap(arr[i],arr[child1]);
              }
              else if(arr[child2]>= arr[child1] && arr[child2] > arr[i]){
                  swap(arr[i],arr[child2]);
              }
          }
          if(child1 <= n && child2 > n){
                if(arr[child1] > arr[i]){
                    swap(arr[i],arr[child1]);
                }
          }
    }


}

void HeapSort(int *arr,int n){                               // Complexity : O(nlogn) + O(n)

    while(n != 1){
         swap(arr[1],arr[n]);
         Heapify(arr,n-1);                              // swap + heapify is deletion process which takes log(n) as it depens on height of tree
         n--;
    }
         
}

int main(){
    cout<<"Enter the number of elements to sort using Merge Sort"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    Heapify(arr,n);
    HeapSort(arr,n);
    
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}