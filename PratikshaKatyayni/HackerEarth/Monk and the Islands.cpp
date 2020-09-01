/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>

using namespace std;

int bfs(int s,vector<vector<int>> adj,vector<bool> visited,int n,int d[])
{
    queue<int> q;
    q.push(s);
    //int min=INT_MAX;
    visited[s]=true;
    d[s]=0;
    vector<vector<int> >::iterator it;
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(auto it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                d[*it]=d[s]+1;
                q.push(*it);
            }
        }
    }
    return d[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x,y;
        vector<vector<int> > adj(n+1);
        vector<bool> visited(n+1,false);
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int d[10001];
        int cnt=bfs(1,adj,visited,n,d);
        cout<<cnt<<endl;
        
    }
    return 0;
}
