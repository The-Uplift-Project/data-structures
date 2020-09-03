#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

    int main() {
    int n;
    cin>>n;
    stack<long long int> s1,smax;
    for(int i=0;i<n;i++)
    {
        int que;
        cin>>que;
        switch(que)
        {
            case 1:
            int ele;
            cin>>ele;
            s1.push(ele);
            if(!smax.empty())
            {if(ele>smax.top())
            smax.push(ele);
            else{
                smax.push(smax.top());
            }}
            else
            smax.push(ele);
            break;
            case 2:
            if(!s1.empty())
            {
                // if(s1.top()==smax.top())
                smax.pop();
                s1.pop();
            }
            break;
            case 3:
            int max=smax.top();
            cout<<max<<endl;
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
