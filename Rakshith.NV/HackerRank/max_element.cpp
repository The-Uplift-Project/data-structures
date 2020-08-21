#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int main() {
     vector<int>s(0),max(0);
    int n,c,x,t=-1;
    
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>c;
        if(c==1)
            {
            cin>>x;
            t++;
            if(t+1>s.size())
                {
                s.push_back(x);
                
                    max.push_back(x);
            }
            else
            {
                s[t]=x;
                max[t]=x;
            }
            if(t!=0)
                {
                if(max[t-1]>max[t])
                    max[t]=max[t-1];
            }
        }
        else
            if(c==2)
            {
            t--;
        }
        else
            {
            
            
                cout<<max[t]<<"\n";
        }
    }
    return 0;
}
