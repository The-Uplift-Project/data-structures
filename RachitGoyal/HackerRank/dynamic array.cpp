
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector <vector<int> > s(n,vector <int> ());
    int lastans=0;
    for(int i=0;i<q;i++)
    {
        int r,x,y;
        cin>>r>>x>>y;
        if(r==1)
        {
            s[(x^lastans) % n].push_back(y);
        }
        else
        {
            lastans=s[(x^lastans) %n][y%s[(x^lastans) %n] .size()];
            cout<<lastans<<endl;
        }
    

    
    }
}
