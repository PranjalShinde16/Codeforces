#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,count;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<n;i++)
    {for(ll j=0;j<n;j++)
        {if(i!=j){count = a[i]+a[j];
            for(ll k=0;k<n;k++)
            {if(count==a[k]){cout<<k+1<<endl<<i+1<<endl<<j+1;return 0;}}}}}
    cout<<"-1";
    return 0;
}
