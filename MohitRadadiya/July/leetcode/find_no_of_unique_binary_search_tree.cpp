#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        int a[n+1];
        memset(a,0,sizeof(a));
        a[0]=a[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            a[i]+=a[j]*a[i-j-1];
        }
        return a[n];
    }
};
int main(){
	int n;
	cin >> n;
	Solution obj;
	cout << obj.numTrees(n);
	return 0;
}
