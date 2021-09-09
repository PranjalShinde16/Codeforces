#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
class chats
{
public:
    ll first,second;
};
int main()
{
    ll p,q,l,r;
    ll count=0;
    cin>>p>>q>>l>>r;
    chats a[p],b[q];
    rep(i,p){ cin>>a[i].first>>a[i].second; }
    rep(i,q){ cin>>b[i].first>>b[i].second; }
    ll n;
    if(a[p-1].second>=b[q-1].second+r){ n=a[p-1].second; }
    else{ n=b[q-1].second+r; }
    bool z[n+1]={0},x[n+1]={0};
    while(p>0)
    {
        for(ll i=a[p-1].first;i<=a[p-1].second;i++){ z[i]=1; }
        p--;
    }
    ll k=l;
    while(k<=r)
    {
        rep(i,n+1){ x[i]=0; }
        rep(j,q)
        {
            for(ll i=b[j].first+k;i<=b[j].second+k;i++){ x[i]=1; }
        }
        rep(i,n+1){ if(z[i]==1&&x[i]==1){ count++;break; } }
        k++;
    }
    cout<<count;
    return 0;
}
