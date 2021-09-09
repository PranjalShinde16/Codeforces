#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vect;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>b>>a;
        vect.push_back(make_pair(a,b));
    }
    sort(vect.begin(),vect.end());
    ll count=0,k=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(vect[i].first!=0)
        {
            count+=vect[i].second;
            k+=vect[i].first;
            m++;
        }
    }
    k-=m;
    for(int i=n-1;i>=0;i--)
    {
        if(k>=0){ if(vect[i].first==0){count+=vect[i].second; k--;} }
    }
    cout<<count;
    return 0;
}
