#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    map<string,int> Map;
    while(q--)
    {
        int type,y;
        cin>>type;
        string X;
        
        if(type==1)
        {
            cin>>X>>y;
            Map[X]+=y;
        }
        else if(type==2)
        {
            cin>>X;
            Map.erase(X);
        }
        else
        {
            cin>>X;
            cout<<Map[X]<<endl;
        }
    }
    
    return 0;
}
