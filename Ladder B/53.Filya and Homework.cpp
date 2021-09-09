#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    loop(i,n){ cin>>a[i]; }
    ll count=0;
    sort(a,a+n);
    loop(i,n-1){ if(a[i]!=a[i+1]){count++;} }
    if(count==0){ cout<<"YES"; }
    else if(count==1){ cout<<"YES"; }
    else if(count>=3){ cout<<"NO"; }
    else if(count==2)
    {
        ll k;
        loop(i,n){ if(a[i]!=a[0]&&a[i]!=a[n-1]){ k=a[i]; break; } }
        if(a[0]+a[n-1]==2*k){ cout<<"YES"; }
        else{ cout<<"NO"; }
    }
    //cout<<count;
    return 0;
}
