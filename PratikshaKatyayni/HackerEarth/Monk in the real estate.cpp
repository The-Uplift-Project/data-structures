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
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int e;
        cin>>e;
        int x,y;
        for(int i=1;i<=e;i++)
        {
            cin>>x>>y;
            s.insert(x);
            s.insert(y);
        }
        
        cout<<s.size()<<endl;
    }
    return 0;
}
