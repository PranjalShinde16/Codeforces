#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    string str[n];
    for(ll i=0;i<n;i++)
    {
        cin>>str[i];
    }
    map<char,int> mp;
    vector<int> vect;
    for(ll i=0;i<m;i++)
    {
        mp.clear();
        for(ll j=0;j<n;j++)
        {
            mp[str[j][i]]++;
        }
        ll k=0;
        for(auto& x : mp)
        {
            k++;
        }
        vect.push_back(k);
    }
    ll ans = 1;
    for(auto& x: vect)
    {
        ans *= x;
        ans = ans%mod;
    }
    cout<<ans;
    return 0;
}
