#include<bits/stdc++.h>
#define ll long long
#define rep(i,l,n) for(ll i=l;i<n;i++)
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll p[n*m];ll h=0;
    ll d;
    bool b=0;
    cin>>d;
    ll a[n][m];
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>a[i][j];
            if(i!=0&&j!=0)
            {
                ll k=a[i-1][j]-a[i][j];
                k=abs(k);
                ll z=a[i][j-1]-a[i][j];
                z=abs(z);
                if(k%d!=0||z%d!=0){ b=1; }
            }
            else if(i==0&&j!=0)
            {
                ll k=a[i][j-1]-a[i][j];
                k=abs(k);
                if(k%d!=0){ b=1; }
            }
            else if(i!=0&&j==0)
            {
                ll z=a[i-1][j]-a[i][j];
                z = abs(z);
                if(z%d!=0){ b=1; }
            }
            p[h]=a[i][j];
            h++;
        }
    }
    if(b==1){ cout<<"-1";return 0; }
    ll moves=0;
    ll sum=0;
    sort(p,p+n*m);
    ll s=n*m;
    if(s%2==0){ h=p[(s/2)-1]; }
    else{ h=p[((s+1)/2)-1]; }
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            ll g = a[i][j]-h;
            g = abs(g);
            g = g/d;
            moves+=g;
        }
    }
    cout<<moves;
    return 0;
}
