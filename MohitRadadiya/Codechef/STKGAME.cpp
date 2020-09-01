/*
 * Author: MohitRadadiya
 * Link: https://www.codechef.com/COTH2020/problems/STKGAME
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,c=0;
	cin>>n;
	long long a[n+1],h[n+1];
	for(int i=1;i<n+1;i++)
		cin>>a[i]>>h[i];
	a[0]=-1e9;
	for(long long i=1;i<n+1;i++)
	{
		if(a[i]-h[i]>a[i-1])
		{
			c++;
		}
		else if(a[i]+h[i]<a[i+1])
		{
			a[i]=a[i]+h[i];
			c++;
		}
	}
	cout<<c;
}
