#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<stack>
#include <algorithm>
using namespace std;


int main() {
    stack<string> s1;
    s1.push("");
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        switch(m)
        {
            case 1:
            {string s;
            cin>>s;
            if(s1.empty())
            s1.push("");
            if(!s1.empty())
            {string sp=s1.top();
            s=sp+s;}
            s1.push(s);
            break;}
            case 2:
            {
                int num;
            cin>>num;
            if(!s1.empty())
               { string spt=s1.top();
                spt=spt.substr(0,spt.length()-num);
            s1.push(spt);
            break;}}
            case 3:
            {
                int num1;
            cin>>num1;
                if(!s1.empty())
            {string sptp=s1.top();
           
                cout<<sptp[num1-1]<<endl;
            break;}}
            case 4:
            {if(!s1.empty())
            s1.pop();
            break;}

        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
