/*
 * Author: MohitRadadiya
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> vl[N];
    int lastAns = 0;
    for(int i=0;i<Q;i++) {
        int choose, x, y;
        cin >> choose >> x >> y; 
        int pos = (x^lastAns)%N;
        if(choose == 1){
			vl[pos].push_back(y);
        }
        else if(choose == 2){
			int index = y%((int)vl[pos].size());
            lastAns = vl[pos][index];
            cout << lastAns << endl;
        }
    }
    return 0;
}
