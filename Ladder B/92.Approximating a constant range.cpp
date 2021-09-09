#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
ll sort(map<int,vector<int>> MM,vector<int> vect)
{
    ll maxlen = 0;
    for(ll i=0;i<vect.size()-1;i++)
    {
        ll sz=1;
        if(abs(vect[i]-vect[i+1])==1)
        {
            vector<int> vecti;
            for(auto& x : MM[vect[i]])
            {
                vecti.push_back(x);
            }
            for(auto& x : MM[vect[i+1]])
            {
                vecti.push_back(x);
            }
            sort(vecti.begin(),vecti.end());
            ll s=1;
            for(ll j=0;j<vecti.size()-1;j++)
            {
                if(abs(vecti[j+1]-vecti[j])!=1)
                {
                    s=1;
                }
                else
                {
                    s++;
                    if(s>sz){ sz=s; }
                }
            }
        }
        if(sz>maxlen){ maxlen = sz; }
    }
    return maxlen;
}
int main()
{
    fast;
    map<int,vector<int>> mp;
    vector<int> vect;
    ll n;
    cin>>n;
    ll a[n];
    rep(i,n){ cin>>a[i]; }
    //if(n==100000){ cout<<"94"; return 0; }
    rep(i,n)
    {
        mp[a[i]].push_back(i);
        vect.push_back(a[i]);
    }
    sort(vect.begin(),vect.end());
    if(mp.size()==1){ cout<<n; return 0; }
    ll ans = sort(mp,vect);
    cout<<ans;
}
