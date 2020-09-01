/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int N,sum=0;
	cin>>N;
	int deg[N];
	for(int i=0;i<N;i++)
	{
		cin>>deg[i];
		sum=sum+deg[i];
	}
	if(sum==(2*(N-1)))
	cout<<"Yes";
	else
	cout<<"No";
	
return 0;
}
