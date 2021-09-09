#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define each(a,v) for(auto& a : v)
#define all(v) v.begin(),v.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll q;
    cin>>q;
    while(q--)
    {
        ll c,m,x;
        cin>>c>>m>>x;
        cout<<min({c,m,(c+m+x)/3})<<endl;
    }
}
