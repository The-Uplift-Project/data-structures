#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a,v, n,pos = 0;
    cin >> v >> n;
    for(int i = 0; i < n; i ++){
        cin >> a;
        if(a == v){
            cout << pos << endl;
            return 0;
        }
        pos++;
    }
    return 0;
}
