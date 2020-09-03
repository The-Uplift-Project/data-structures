#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 100001;
const int MAX_K = 1000001;
int n, m, k, ia[MAX_K], ib[MAX_K], ee[MAX_K], pos[MAX_K] = {1};
set<int> G[MAX_N], temp[MAX_N], ans;
int main()
{
	cin >> n >> m >> k;
	for (int i = 0, a, b; i < m; i++) {
		cin >> a >> b;
		G[a].insert(b);
	}
	for (int i = 0; i < k; i++) {
		cin >> ia[i] >> ib[i];
		if (pos[i] == ia[i]) {
			pos[i + 1] = ib[i];
		} else {
			pos[i + 1] = pos[i];
		}
	}
	ans.insert(pos[k]);
	for (int i = 1; i <= n; i++) {
		ee[i] = i;
	}
	for (int i = k; i >= 0; i--) {
		for (int j : G[pos[i]]) {
			ans.insert(ee[j]);
			temp[j].insert(pos[i]);
		}
		G[pos[i]].clear();
		if (i > 0) {
			ee[ia[i - 1]] = ee[ib[i - 1]];

			for (int j : temp[ia[i - 1]]) {
				G[j].insert(ia[i - 1]);
			}
		}
	}
	cout << ans.size() << "\n";
	vector<int> xx(ans.begin(), ans.end());
	sort(xx.begin(), xx.end());
	for (int i = 0; i < xx.size(); i++) {
		cout << xx[i] << " ";
	}
	return 0;
}
