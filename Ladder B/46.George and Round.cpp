#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<m;i++){cin>>b[i];}
    sort(a,a+n);
    sort(b,b+m);
    ll x=0,y=0;
    ll count =0;
    while(x<n&&y<m)
    {
        if(b[y]>=a[x])
        {
            y++;x++;count++;
        }
        else{ y++; }
    }
    cout<<n-count;
    return 0;
}
