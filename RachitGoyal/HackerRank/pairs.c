#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(brr,brr+m);
    sort(arr,arr+n);
    int i=0;
    int j=0;
    vector<int> de;
    for(int k=0;k<n;k++)
    {
       
            if(arr[i]==brr[j])
            {
                i=i+1;
                j=j+1;
            }
            else
            {
                de.push_back(arr[i]);
                i=i+1;
            }
        
    }
    vector<int> fe;
    fe.push_back(de[0]);
    for(int i = 1; i < de.size(); i++){
        if(de[i]!=de[i-1])
            fe.push_back(de[i]);
    }
    for(auto a : fe)
        cout << a << " ";
    
}
