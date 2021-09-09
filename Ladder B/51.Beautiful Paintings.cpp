#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){ cin>>a[i]; }
    sort(a,a+n);
    ll x=0,y=0,z=0;
	while(x<n && y<n)
	{
		if(a[y]!=a[x])
		{
			z++;
			x++;
			y++;
		}
		else
		y++;
	}
	cout<<z<<endl;
}
