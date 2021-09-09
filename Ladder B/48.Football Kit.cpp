#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
class kit
{
public:
    ll home,away;
};
int main()
{
    fast;
    ll n;
    cin>>n;
    kit a[n];
    kit count[n] = {0};
    map<int,int> ans;
    for(ll i=0;i<n;i++){ cin>>a[i].home>>a[i].away; ans[a[i].home]++; }
    ll k=0;
    for(ll i=0;i<n;i++)
    {
        count[i].home=n-1;
        count[i].home+=ans[a[i].away];
        count[i].away = 2*(n-1) - count[i].home;
    }
    for(ll i=0;i<n;i++){ cout<<count[i].home<<" "<<count[i].away<<endl; }
    return 0;
}
