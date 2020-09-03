#include<bits/stdc++.h>
using namespace std;

void binarysearch(int n,int arr[],int k)
{
    int beg=0,flag=0;
    int end=n-1;
    
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==k)
        {
            
            flag++;
            cout<<"search suceesfull";
            break;
        }
        else if(arr[mid]>k)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"NOT PRESENT";
    }
    
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    binarysearch(n,arr,k);
    
    return 0;
}



//Space Complexity: O(1)
//Time Complexity:-
//Worst Case: O(log n)
//Best Case: O(1)
