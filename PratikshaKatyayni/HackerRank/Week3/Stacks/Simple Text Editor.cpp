#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    stack<string> str;
    int ch,k1,k2;
    string s="";
    str.push(s);
    string w;
    for(int i=0;i<q;i++)
    {
        cin>>ch;
        if(ch==1)
        {
            cin>>w;
            s=str.top();
            s.append(w);
            str.push(s);
        }
        else if(ch==2)
        {
            cin>>k1;
            s=str.top();
            int k=s.length()-k1;
            s.erase(k);
            str.push(s);
        }
        else if(ch==3)
        {
            cin>>k2;
            s=str.top();
            cout<<s[k2-1]<<endl;
        }
        else if(ch==4)
        {
            str.pop();
        }
    } 
    return 0;
}
