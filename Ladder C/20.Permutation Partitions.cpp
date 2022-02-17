#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll total=0;
    ll x=k,c=n;
    while(x--)
    {
        total+=c;
        c--;
    }
    //cout<<endl;
    ll a[n];
    vector<int> pos;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>n-k)
        {
            pos.push_back(i);
        }
    }
    //for(auto& x : pos){cout<<x<<" ";}
    sort(pos.begin(),pos.end());
    ll ni = pos.size();
    ll ans = 1;
    for(ll i=0;i<ni-1;i++)
    {
        k = pos[i+1] - pos[i];
        ans = (ans*k)%mod;
    }
    cout<<total<<" ";
    cout<<ans;
    return 0;
}
