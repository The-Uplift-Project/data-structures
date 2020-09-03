#include<bits/stdc++.h> 
using namespace std; 

void RightRotate(int a[], int n, int k) 
{ 
	
	
	k = k % n; 

	for(int i = 0; i < n; i++) 
	{ 
	if(i < k) 
	{ 
			
		 
		cout << a[n + i - k] << " "; 
	} 
	else
	{ 
			
		
		cout << (a[i - k]) << " "; 
	} 
	} 
	cout << "\n"; 
} 
	
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        int Array[N];
        for(int i=0;i<N;i++)
        {
            cin>>Array[i];
        }
	RightRotate(Array, N, K);
    cout<<'\n';
    } 
} 

