#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],c[n];
    rep(i,n){ cin>>a[i];c[i]=a[i]; }
    ll diff=0;
    sort(c,c+n);
    diff=c[n-1]-c[0];
    if(diff>m){ cout<<"NO"; return 0; }
    cout<<"YES"<<endl;
    ll max=0;
    rep(i,n){ if(a[i]>max){ max=a[i]; } }
    ll b[max];
    rep(i,max)
    {
        b[i]=(i+1)%m;
        if(b[i]==0){ b[i]=m; }
    }
    rep(i,max)
    {
        b[i]=(i+1)%m;
        if(b[i]==0){ b[i]=m; }
    }
    rep(i,n)
    {
        ll x = a[i];
        rep(j,x){ cout<<b[j]<<" "; }
        cout<<endl;
    }
    return 0;
}
