#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
void dfs(int node,vector<vector<int>>&vec,vector<bool>&bo){
    bo[node] = true;
    for(auto it : vec[node]){
        if(bo[it] == false){
            dfs(it,vec,bo);
        }
    }
}
int main(){
	fastio
	int v,e,k;
	cin >> v >> e >> k;
	int a,b;
	int count = 0;
	vector<vector<int>>vec(v+1);
	vector<bool>bo(v+1,false);
	for(int i = 1 ; i <= e ; i++){
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for(int i = 1 ; i <= v ; i++){
		if(!bo[i]){
			count++;
			dfs(i,vec,bo);
		}
	}
	if(count > k){
		cout << -1;
	}
	else{
		cout << e-v+k;
	}
}
