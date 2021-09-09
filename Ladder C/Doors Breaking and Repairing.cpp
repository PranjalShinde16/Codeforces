#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define each(a,v) for(auto& a : v)
using namespace std;
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    ll count = 0;
    rep(i,0,n){ cin>>a[i]; }
    sort(a,a+n);
    if(y<x){ cout<<n; return 0; }
    else if(y>=x)
    {
        rep(i,0,n){ if(a[i]<=x){ count++; } }
        if(count%2==0){ cout<<count/2; return 0; }
        else{ cout<<(count/2)+1; return 0; }
    }
}
