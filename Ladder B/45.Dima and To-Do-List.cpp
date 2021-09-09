#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main()
{
    fast;
	ll n,k,m;
	cin >> n >> k;
    ll count[k] = {0};
	for (int i = 0; i < n; i++) {
		cin >> m;
		count[i % k] += m;}
	int z = 0;
	for (int i = 1; i < k; i++)
		if (count[z] > count[i]) {z = i;}
    z++;
	cout << z << endl;
}
