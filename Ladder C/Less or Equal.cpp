#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    a[n]=-1;
    rep(i,n){ cin>>a[i]; }
    sort(a,a+n);
    if(k<=n&&k>0)
    {
    ll ans = a[k-1];
    if(a[k-1]==a[k]){ cout<<"-1"; }
    else{ cout<<a[k-1]; }
    }
    else
    {
        if(k==0)
        {
            if(a[0]>1)
            {
                cout<<a[0]-1;
            }
            else
            {
                cout<<"-1";
            }
        }
    }
}
