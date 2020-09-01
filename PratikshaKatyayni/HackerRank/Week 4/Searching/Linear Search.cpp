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
	    for(int i=0;i<n;i++)
	    {
	       if(a[i]==k)
	       {
	           cout<<i+1<<endl;
	           flag=1;
	           break;
	       }
	    }
	    if(flag==0)
	    cout<<-1<<endl;
	}
	return 0;
}

//Space Complexity: O(1)
//Time Complexity:-
//Worst Case:O(n)
//Best Case:O(1)
