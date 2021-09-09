#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define each(a,v) for(auto& a : v)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n){ cin>>a[i]; }
    bool b[n]={0};
    sort(a,a+n);
    ll c[n];
    ll j=0;
    rep(i,0,n)
    {
       if(b[j]==0)
       {
           c[j]=a[i];
           b[j]=1;
           i++;
       }
       else{ break; }
       if(i<n&&b[n-1-j]==0)
       {
           c[n-1-j]=a[i];
           b[n-1-j]=1;
       }
       else{ break; }
       j++;
    }
    rep(i,0,n){ cout<<c[i]<<" "; }
}
