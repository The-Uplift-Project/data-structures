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
    int r,c,c1,c2;
    cin>>r>>c>>c1>>c2;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<max(abs(c1-i),abs(c2-j))<<" ";
        }
        cout<<endl;
    }
}
