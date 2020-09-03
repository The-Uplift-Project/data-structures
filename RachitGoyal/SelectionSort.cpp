#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp,min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    
}


//Space Complexity: O(1)
//Time Complexity:-
//Worst Case: O(n^2)
//Best Case: O(n^2)
