/*
 * Author: MohitRadadiya
 * Link: https://www.codechef.com/COTH2020/problems/MINCARDS
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i] == s[i+1]){
			c += 1;
		}
	}
	cout << c;
	return 0;
}
