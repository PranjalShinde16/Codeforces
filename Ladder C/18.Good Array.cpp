#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define print(vect) for(auto& x : vect){ cout<<x<<" "; }
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll sum = 0;
    rep(i,n){ cin>>a[i];sum+=a[i];b[i]=a[i]; }
    if(n==2){ cout<<"0"; return 0; }
    sort(b,b+n);
    ll maxa = b[n-1];
    ll submax = b[n-2];
    //cout<<maxa<<" "<<submax<<endl;
    vector<int> vect;
    rep(i,n)
    {
        if(a[i]==maxa)
        {
            ll dummy = sum - maxa;
            if(dummy==submax*2){ vect.push_back(i+1); }
        }
        else
        {
            ll dummy = sum - a[i];
            if(dummy==maxa*2){ vect.push_back(i+1); }
        }
    }
    cout<<vect.size()<<endl;
    print(vect);
    return 0;
}
