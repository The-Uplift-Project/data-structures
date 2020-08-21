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
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
     
     return 0;
}


//Space Complexity: O(1)
//Time Complexity:-
//Worst Case:O(n^2)
//Best Case: O(n)
