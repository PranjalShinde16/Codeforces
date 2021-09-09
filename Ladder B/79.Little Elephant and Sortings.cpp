#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    rep(i,n){ cin>>a[i]; }
    ll v=a[0];
    ll ans=0;
    rep(i,n)
    {
        if(a[i]<v){ ans+=v-a[i]; }
        v=a[i];
    }
    cout<<ans;
    return 0;
}
