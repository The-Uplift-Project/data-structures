/*
 * Author: MohitRadadiya
 * Link: https://www.codechef.com/COTH2020/problems/UNIQSTR
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int fib(int n){
    if(n==1 || n==2)
        return n;
    else return fib(n-1)+fib(n-2);
}
int main(){
    string s;cin>>s;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='c' || s[i]=='k'){
            cout<<"0";
            return 0;
        }
        if(s[i]=='f'||s[i]=='g'){
            int j=i+1;
            while(j<s.length() && s[i]==s[j])
                j++;
            v.push_back(j-i);
            i = j-1;
        }
    }
    ll pro = 1;
    for(int i=0;i<v.size();i++){
        pro *= fib(v[i]);
    }
    cout<<pro%1000000007;
    return 0;
}
