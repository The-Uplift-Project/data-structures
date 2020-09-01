#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int p,int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    
    return i+1;
}

void quicksort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=Partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
        
    }
}

void printarray(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,1,n);
    
    printarray(arr,n);
    
    return 0;
}



//Space Complexity: O(n*log n)
//Time Complexity:-
//Worst Case: O(n^2)
//Best Case,Average Case: O(n*log n)
