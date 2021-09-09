#include <bits/stdc++.h>
using namespace std;
int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end());
	vector<vector<int>> buck(k);
	vector<int> res(n);
	for (int i = 0; i < n; ++i) {
		buck[i % k].push_back(a[i].first);
		res[a[i].second] = i % k;
	}

	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < int(buck[i].size()) - 1; ++j) {
			if (buck[i][j] == buck[i][j + 1]) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i) {
		cout << res[i] + 1 << " ";
	}
	cout << endl;
	return 0;
}
