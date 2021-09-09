#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k,fri=0;
    cin>>n>>m>>k;
    ll a[m+1];
    for(ll i=0;i<m+1;i++){ cin>>a[i]; }
    ll fedor=a[m];
    ll b[m];
    for(ll i=0;i<m;i++)
    {
        b[i]=fedor^a[i];
    }
    //for(ll i=0;i<m;i++){ cout<<b[i]<<endl; }
    for(ll i=0;i<m;i++)
    {
        ll x,y,z=0;
        while(b[i]!=0)
        {
           x = b[i]/2;
           y = b[i]%2;
           if(y==1){ z++; }
           b[i] = b[i]/2;
        }
        b[i] = z;
    }
    for(ll i=0;i<m;i++){ if(b[i]<=k){fri++;} }
    cout<<fri;
    return 0;
}
