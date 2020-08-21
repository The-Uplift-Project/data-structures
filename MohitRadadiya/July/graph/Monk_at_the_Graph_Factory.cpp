#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
    fastio
    int n,sumOfDegree=0; 
    cin>>n; 
    for(int i=0;i<n;++i){
        int x; cin>>x; sumOfDegree+=x;
    }
    cout<<(sumOfDegree==(--n<<1)?"Yes\n":"No\n");
    return 0;
}
