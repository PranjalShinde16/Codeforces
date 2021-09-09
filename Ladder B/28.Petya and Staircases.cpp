#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++){ cin>>a[i];}
    sort(a,a+m);
    if(a[0]==1||a[m-1]==n){cout<<"NO"; return 0;}
    else
    {
        for(ll i=0;i<(m-2);i++)
        {
           if(a[i+1]-a[i]==1&&a[i+2]-a[i]==2){cout<<"NO"; return 0;}
        }
    }
    cout<<"YES";
    return 0;
}
