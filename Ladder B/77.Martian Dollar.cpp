#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n,b,temp;
    cin>>n>>b;
    ll a[n];
    rep(i,n){ cin>>a[i]; }
    temp=b;
    rep(i,n-1)
    {
        for(ll j=i+1;j<n;j++){ temp=max(temp,(b%a[i])+((b/a[i])*a[j])); }
    }
    cout<<temp;
    return 0;
}
