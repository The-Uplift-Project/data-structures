#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,flag=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==k)
        {
            flag++;
        }
    }
    if(flag!=0)
    {
        cout<<"search succesful  element present";
    }
    else
    {
        cout<<"NOT FOUND";
    }
    
    return 0;
    
}


//Space Complexity: O(1)
//Time Complexity:-
//Worst Case:O(n)
//Best Case:O(1)
