#include<bits/stdc++.h>
#define ll unsigned long long int
#define rep(i,n) for(ll i=1;i<=n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n,t,ans=0,j=0;
    cin>>n>>t;
    ll a[n+1];
    a[0]=0;
    rep(i,n){ cin>>a[i];a[i]=a[i]+a[i-1]; }
    rep(i,n)
    {
         while(j<=i && (a[i]-a[j-1])>t) {j++;}
         ans=max(ans,i-j+1);
    }
    cout<<ans;
}
