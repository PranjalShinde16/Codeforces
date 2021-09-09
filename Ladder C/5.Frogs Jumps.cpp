#include<bits/stdc++.h>
#define ll long long
#define rep(i,l,n) for(ll i=l;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
ll max(int a,int b)
{
    if(a>b){ return a; }
    else{ return b; }
}
int main()
{
    fast;
    ll n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        ll k=str.length();
        vector<int> v;
        v.push_back(0);
        rep(i,0,k)
        {
            if(str[i]=='R')
            {
                v.push_back(i+1);
            }
        }
        v.push_back(k+1);
        ll ans=0;
        k=v.size();
        rep(i,0,k-1)
        {
            ans = max(ans,v[i+1]-v[i]);
        }
        cout<<ans;
    }
    return 0;
}
