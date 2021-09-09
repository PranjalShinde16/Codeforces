#include<bits/stdc++.h>
#define ll long long
#define rep(i,m) for(ll i=0;i<m;i++)
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int> vect;
    rep(i,n){ ll a; cin>>a; vect.push_back(a); }
    if(k>=n){ cout<<vect[vect.size()-1]; return 0; }
    ll p1,p2;
    p1 = 0;
    p2 = (2*(n-k))-1;
    while(p1<p2)
    {
        vect[p2] = vect[p2] + vect[p1];
        vect[p1] = INT_MIN;
        p2--;
        p1++;
    }
    sort(vect.begin(),vect.end());
    cout<<vect[vect.size()-1];
    return 0;
}
