/*
 * Author: MohitRadadiya
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	cin >> n >> d;
	int array[n];
    for(int i=0; i<n;i++) {
       cin >> array[(i+n-d)%n];
    }
    for(int i=0; i<n;i++) {
        cout << array[i] << " ";
    }
	return 0;
}
