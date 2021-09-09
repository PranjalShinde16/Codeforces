#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
void solve()
{
  int x,y,k,n;
  bool flag(true);
  cin>>y>>k>>n;
  for (int i = k; i <= n; i+=k)
	{
		if (i<=n && i%k==0 && i>y)
		{
			cout << i - y << " ";
			flag = 0;
		}
	}
  if(flag){cout<<"-1";}
}
int main()
{
    fast;
    solve();
}
