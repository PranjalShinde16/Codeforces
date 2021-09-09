#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
class pi
{
public:
    ll first,second;
};
int main()
{
    fast;
    ll n;
    cin>>n;
    pi a[n];
    ll b[6]={0};
    rep(i,n){ cin>>a[i].first>>a[i].second;b[a[i].first]++;b[a[i].second]++; }
    for(ll i=1;i<6;i++)
    {
        if(b[i]!=2){ cout<<"WIN"; return 0; }
    }
    cout<<"FAIL";
    return 0;
}
