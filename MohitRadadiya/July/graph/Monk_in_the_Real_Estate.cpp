#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
    fastio
    int t; 
    cin >> t; 
    while(t--){
        unordered_set<int> st;
        int e; 
        cin >> e; 
        while(e--){
            int x,y; 
            cin >> x >> y; 
            st.insert(x); 
            st.insert(y);
        }
        cout << st.size() << "\n";
    }
    return 0;
}
