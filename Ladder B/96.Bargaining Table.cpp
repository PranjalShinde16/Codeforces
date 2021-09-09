#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,b,n) for(ll i=b;i<n;i++)
using namespace std;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    if(a.first!=b.first)
       return a.first < b.first;
    else
        return a.second < b.second;
}
class cordi
{
public:
    ll x,y;
};
int main()
{
    fast;
    ll n,m;
    cin>>n>>m;
    vector<string> vect(n);
    rep(i,0,n)
    {
        cin>>vect[i];
    }
    vector<vector<int>> v(n+1,vector<int>(m+1,0));
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            v[i+1][j+1] = v[i][j+1] + v[i+1][j] - v[i][j] + (vect[i][j]-48);
        }
    }
    ll ans = 0;
    rep(i,0,n){
        rep(j,0,m){
            rep(i1,i,n){
                rep(j1,j,m){
                    if(v[i1+1][j1+1]-v[i][j1+1]-v[i1+1][j]+v[i][j]==0)
                    {
                        ans = max(ans,((i1+1-i)*2)+((j1+1-j)*2));
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
