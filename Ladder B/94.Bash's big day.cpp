#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a;
    map<int,int> fact;
    while(n--)
    {
        cin>>a;
        ll root = sqrt(a);
        //cout<<root<<" ";
        for(ll i=1;i<=root;i++)
        {
            if(a%i==0)
            {
                fact[i]++;
                if(i!=a/i){ fact[a/i]++; }
            }
        }
    }
    ll maxi = 1;
    fact[1] = 0;
    for(auto& x : fact)
    {
        if(x.second>maxi){ maxi = x.second; }
    }
    cout<<maxi;
}
