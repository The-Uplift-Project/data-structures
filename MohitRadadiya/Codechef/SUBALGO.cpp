/*
 * Author: MohitRadadiya
 * Link: https://www.codechef.com/COTH2020/problems/SUBALGO
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	int a;
	cin >> n >> a;
	while(a--){
		if(n%10 == 0){
			n = n/10;
		}else if(n%10 > 0){
			n = n-1;
		}
	}
	cout << n;
	return 0;
}
