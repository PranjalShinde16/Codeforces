#include<bits/stdc++.h>
#define ll long long
#define rep(i,l,n) for(ll i=l;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n){ cin>>a[i]; }
    sort(a,a+n);
    ll b[200001]={0};
    rep(i,0,n)
    {
        b[a[i]]++;
    }
    vector<int>v1;
    vector<int>v2;
    bool k=0;
    rep(i,0,200001)
    {
        if(b[i]==1)
        {
            v1.push_back(i);
        }
        else if(b[i]==2)
        {
            v1.push_back(i);
            v2.push_back(i);
        }
        else if(b[i]>=3)
        {
            k=1;
        }
    }
    if(k==1){ cout<<"NO"; }
    else
    {
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        ll p1[v1.size()];
        rep(i,0,v1.size()){ p1[i]=v1[i]; }
        sort(p1,p1+v1.size());
        rep(i,0,v1.size()){ cout<<p1[i]<<" "; }
        cout<<endl;
        if(v2.size()==0)
        {
            cout<<"0"<<endl<<" ";
        }
        else
        {
            cout<<v2.size()<<endl;
            ll p2[v2.size()];
            rep(i,0,v2.size()){ p2[i]=v2[i]; }
            sort(p2, p2 + v2.size(), greater<ll>());
            rep(i,0,v2.size()){ cout<<p2[i]<<" "; }
        }
    }
    return 0;
}
