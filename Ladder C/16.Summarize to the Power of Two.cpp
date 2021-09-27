#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
#define print(v) for(auto& x : v){ cout<<x<<" "; }
using namespace std;
int main()
{
    fast;
    set<int> s = {2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
    //print(s);
    ll n;
    cin>>n;
    ll a[n];
    map<int,int> mp;
    ll vis[n] = {0};
    rep(i,n){ cin>>a[i]; mp[a[i]]++; }
    rep(i,n)
    {
        for(auto& x : s)
        {
            if(mp[a[i]]>0&&mp[x-a[i]]>0&&a[i]!=x-a[i])
            {
                vis[i]=1;
            }
            if(a[i]==x-a[i])
            {
                if(mp[a[i]]>1){ vis[i]=1; }
            }
        }
    }
    ll count = 0;
    rep(i,n)
    {
        if(vis[i]!=1){ count++; }
    }
    cout<<count;
    return 0;
}
