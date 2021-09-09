#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define each(a,v) for(auto& a : v)
using namespace std;
int main()
{

    fast;
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    vector<vector <int>> position(26);
    rep(i,0,n)
    {
        position[str[i]-'a'].pb(i);
    }
    each(v,position){ reverse(all(v)); }
    rep(i,0,k)
    {
        rep(j,0,26)
        {
            if(!position[j].empty())
            {
                int x = position[j].back();
                str[x] = '-';
                position[j].pop_back();
                break;
            }
        }
    }
    string s;
    rep(i,0,n)
    {
        if(str[i]!='-')
        {
            s.pb(str[i]);
        }
    }
    cout<<s;
    return 0;
}
