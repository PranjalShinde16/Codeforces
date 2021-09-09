#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=1;i<n;i++)
using namespace std;
int main()
{
    fast;
    ll n,m;
    cin>>n>>m;
    bool road[n+1]={0};
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        road[a]=1;
        road[b]=1;
    }
    ll constant=0;
    rep(i,n+1){ if(road[i]==0){ constant=i; break;} }
    cout<<n-1<<endl;
    rep(i,n+1){ if(i!=constant){ cout<<constant<<" "<<i<<endl; } }
    return 0;
}
