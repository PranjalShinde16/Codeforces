#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll ans=2,sum=0;
    for(ll i=1;i<=n;i++)
    {
        sum+=ans;
        ans=ans*2;
    }
    cout<<sum;
}
