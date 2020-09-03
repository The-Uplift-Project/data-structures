/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<bits/stdc++.h>
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
 
void dfs(int i,vector<vector<int> > &adj,vector<bool> &visited)
{
    visited[i]=true;
    vector<vector<int> >::iterator itr;
    for(auto itr=adj[i].begin();itr!=adj[i].end();++itr)
    //for(auto itr:adj[i])
    {
        if(!visited[*itr])
        dfs(*itr,adj,visited);
    }
}
int main()
{
    fastio
    int n,m,k;
    cin>>n>>m>>k;
    int a,b;
    vector<vector<int> >adj(n+1);
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> visited(n+1);
    for(int i=0;i<=n;i++)
    visited[i]=false;
    int count=0;
 
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            count++;
            dfs(i,adj,visited);    
        }
    }
    if(count>k)
    cout<<-1;
    else
    cout<<m-n+k;
 
return 0;
    
}
 
