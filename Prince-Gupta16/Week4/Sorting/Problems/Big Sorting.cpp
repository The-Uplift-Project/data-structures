#include<bits/stdc++.h>
using namespace std;



bool check(string a, string b){
    return a.length() == b.length() ? a > b : a.length() > b.length();
}

int main() {
    int n;
    cin >> n;
    vector<string> ar;
    for(int i = 0; i < n; i++){
        string a;cin >> a;
        ar.push_back(a);
    }
    
    sort(ar.begin(),ar.end(),check);
    for(int i = ar.size() - 1; i >= 0; i--)cout << ar[i] << endl;
    return 0;
}