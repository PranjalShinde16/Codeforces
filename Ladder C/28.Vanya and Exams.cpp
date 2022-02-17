#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define all(v) v.begin(),v.end()
#define each(a,v) for(auto& a : v)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define print(vect) for(auto& x : vect) { cout<<x<<" "; }
/*
reverse(v.begin(),v.end());
sort(vect.begin(),vect.end());
sort(a,a+n,greater <ll>());
min({a,b,c})
*/
using namespace std;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
void sortmap(map<int, int>& M)
{
    vector<pair<int, int> > A;
    for (auto& it : M) {A.push_back(it);}
    sort(A.begin(), A.end(), cmp);
}
void solve()
{
    ll n,r,avg;
    cin>>n>>r>>avg;
    vector<pair<int,int>> vect;
    ll allas = 0;
    rep(i,0,n)
    {
        ll a,b;
        cin>>a>>b;
        vect.push_back(make_pair(b,a));
        allas+=a;
    }
    sort(vect.begin(),vect.end());
    //calculating required points
    ll rpt = n*avg;
    ll reqpts = rpt - allas;
    //reqpts are required points
    ll ans = 0;
    ll t = 0;
    while(reqpts>0)
    {
        while(vect[t].second==r){ t++; }
        ans += (min(r-vect[t].second,reqpts))*vect[t].first;
        reqpts = reqpts - min(r-vect[t].second,reqpts);
        vect[t].second = r;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}


