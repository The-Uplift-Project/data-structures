/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <bits/stdc++.h>
 
using namespace std;
 
int dist(int a,int b,vector<vector<int> > adj,vector<bool>  visited)
{
    int dis[100000]={0};
    int d=0;
    queue<int> q;
    visited[a]=true;
    q.push(a);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        //dis[s]=0;
        vector<vector<int> >::iterator itr;
        for(auto itr=adj[s].begin();itr!=adj[s].end();itr++)
        {
            if(!visited[*itr])
            {
                dis[*itr]=dis[s]+1;
                if(dis[*itr]==b)
                d++;
                else
                if(dis[*itr]>b)
                return d;
                visited[*itr]=true;
                q.push(*itr);
            }
        }
 
    }
    return d;
}
int main()
{
    int n,m,e;
    cin>>n>>e;
    int x,y;
    vector<vector<int> > adj(n+1);
    for(int i=1;i<=e;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>m;
    //vector<vector<int> > inp;
    //vector<int> out;
    //for(int i=0;i<m;i++)
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        //inp[a].push_back(b);
        vector<bool> visited(n+1,false);
        int x=dist(a,b,adj,visited);
        cout<<x<<endl;
    }
    return 0;
}
