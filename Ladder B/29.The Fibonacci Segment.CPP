#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,len=2,m=2;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){ cin>>a[i]; }
    for(ll i=2;i<n;i++)
    {
        if(a[i-1]+a[i-2]==a[i]){ len++;}
        else { len=2; }
        m=max(m,len);
    }
    if(n==1){cout<<n; return 0;}
    cout<<m;
    return 0;
}
