#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,flag=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int low=0;
	    int high=n-1;
	    int mid=0;
	    while(low<=high)
	    {
	        mid=(low+high)/2;
	        if(a[mid]==k)
	        {
	            flag=1;
	            cout<<1<<endl;
	            break;
	        }
	        else
	        if(k>a[mid])
	        low=mid+1;
	        else
	        high=mid-1;
	    }
	    if(flag==0)
	    cout<<-1<<endl;
	}
	return 0;
}

//Space Complexity: O(1)
//Time Complexity:-
//Worst Case: O(log n)
//Best Case: O(1)
