#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        stack<int> s1, s2;
        int q;
        cin>>q;
        while(q--)
        {
            int ch;
            cin>>ch;
            if(ch==1)
            {
                int x;
                cin>>x;
                s1.push(x); 
            }
            else if(ch==2)
            {
                if (s2.empty()) { 
                    while (!s1.empty()) { 
                        s2.push(s1.top()); 
                        s1.pop(); 
                    } 
                }   
                if(!s2.empty())
                {
                    s2.pop();
                }
            }
            else
            {
                if (s2.empty()) { 
                    while (!s1.empty()) { 
                        s2.push(s1.top()); 
                        s1.pop(); 
                    } 
                }   
                if(!s2.empty())
                {
                    int ele=s2.top();
                    cout<<ele<<endl;
                }
            }
        }
        return 0;
    }

