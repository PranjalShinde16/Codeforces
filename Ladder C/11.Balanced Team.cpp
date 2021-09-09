#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define each(a,v) for(auto& a : v)
#define all(v) v.begin(),v.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int ans = 0;
	int j = 0;
	for (int i = 0; i < n; ++i) {
		while (j < n && a[j] - a[i] <= 5) {
			++j;
			ans = max(ans, j - i);
		}
	}

	cout << ans << endl;

    return 0;
}
