#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n,k,count=0;
    cin>>n;
    ll a[n];
    bool b=0;
    for(ll i=0;i<n;i++){ cin>>a[i]; }
    for(ll i=1;i<n;i++){ if(a[i]<a[i-1]){b=1;} }
    if(b==0){ cout<<"0"; return 0; }
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){ k=i;count++; }
    }
    //cout<<count<<endl<<k<<endl;
    //cout<<a[n-1]<<endl<<a[0]<<endl;
    if(count!=1||a[n-1]>a[0]){ cout<<"-1"; return 0; }
    else
    {
        cout<<n-k;
    }
    return 0;
}
