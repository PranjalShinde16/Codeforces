#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll m,n;
    cin>>m>>n;
    ll a[m][n];
    bool b[m][n];
    rep(i,m){ rep(j,n){ b[i][j]=1; } }
    rep(i,m){ rep(j,n){ cin>>a[i][j]; } }
    ll k=0;
    while(k<n)
    {
        ll x;
        rep(i,m)
        {
            x=a[i][k];
            if(x==0)
            {
                rep(j,m){ b[j][k]=0; }
                rep(j,n){ b[i][j]=0; }
            }
        }
        k++;
    }
    ll c[m][n];
    rep(i,m){ rep(j,n){ c[i][j]=0; } }
    k=0;
    while(k<n)
    {
        ll x;
        rep(i,m)
        {
            x=b[i][k];
            if(x==1)
            {
                rep(j,m){ c[j][k]=1; }
                rep(j,n){ c[i][j]=1; }
            }
        }
        k++;
    }
    rep(i,m){ rep(j,n){ if(a[i][j]!=c[i][j]){ cout<<"NO"; return 0; } } }
    cout<<"YES"<<endl;
    rep(i,m){ rep(j,n){ cout<<b[i][j]<<" "; } cout<<endl; }
    return 0;
}
