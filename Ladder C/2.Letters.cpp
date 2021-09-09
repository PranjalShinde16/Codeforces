#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n,m,p,q;
    cin>>n>>m;
    ll a[n];
    rep(i,n){ cin>>a[i]; }
    for(ll i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    rep(j,m)
    {
        ll k;
        cin>>k;
        ll l,r;
        l=0;r=n;
        ll mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(k<=a[mid]){ r=mid-1; }
            else{ l=mid+1; }
        }
        p=r+2;
        if(r+2==1)
        {
            q=k;
        }
        else
        {
            q=k-a[r];
        }
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
