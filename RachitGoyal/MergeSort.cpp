#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    for(int i=1;i<=n1;i++)
    {
        L[i]=arr[p+i-1];
    }
    for(int j=1;j<=n2;j++)
    {
        R[j]=arr[q+j];
    }
    L[n1+1]=INT_MAX;
    R[n2+1]=INT_MAX;
    int i=1;
    int j=1;
    for(int k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i=i+1;
        }
        else
        {
            arr[k]=R[j];
            j=j+1;
        }
    }
    
    
    
}

void mergesort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r) /2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
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
    mergesort(arr,1,n);
    
    printarray(arr,n);
    
    return 0;
}



//Space Complexity: O(n)
//Time Complexity: O(n*log n)
