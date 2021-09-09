#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll m,n;
    cin>>m>>n;
    ll time[m][n];
    rep(i,m){ rep(j,n){ cin>>time[i][j]; } }
    ll finaltime[m]={0};
    rep(i,n)
    {
        ll time1=0;
        rep(j,m)
        {
            ll start=max(time1,finaltime[j]);
            finaltime[j]=start + time[j][i];
            time1 = finaltime[j];
        }
    }
    for (auto x : finaltime){ cout<<x<<" "; }
}
