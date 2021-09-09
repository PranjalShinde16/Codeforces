#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n;
    bool b=0;
    cin>>n;
    vector <unsigned int>v;
    if(n%7==0)
    {
        ll k=n/7;
        rep(i,k){ v.push_back(7); }
    }
    else
    {
        while(n%7!=0)
        {
            v.push_back(4);
            n-=4;
            if(n<0){ b=1; }
        }
        ll k=n/7;
        rep(i,k){ v.push_back(7); }
    }
    if(b==1){ cout<<"-1"; }
    else
    {
        rep(i,v.size())
        {
            cout<<v[i];
        }
    }
    return 0;
}
