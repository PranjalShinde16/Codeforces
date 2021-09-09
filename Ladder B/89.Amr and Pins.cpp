#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
    float r,x,y,xdash,ydash;
    cin>>r>>x>>y>>xdash>>ydash;
    float dist;
    dist = sqrt(((xdash-x)*(xdash-x))+((ydash-y)*(ydash-y)));
    ll c = dist/(2*r);
    if(c*(2*r)<dist){ c++; }
    cout<<c;
}
