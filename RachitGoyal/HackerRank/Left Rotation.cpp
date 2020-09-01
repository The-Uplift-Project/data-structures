#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=d;j++)
    {
        int t=arr[0];
        for(int i=1;i<=n-1;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=t;
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }

}
