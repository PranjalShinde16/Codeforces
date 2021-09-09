#include<bits/stdc++.h>
#define ll long long
#define float double
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
float getslope(float x0,float y0,float x,float y)
{
    float slope;
    if(x0-x!=0)
         slope = (y0-y)/(x0-x);
    else
        slope = INT_MIN;
    return slope;
}
int main()
{
    ll n;
    float x,y;
    cin>>n>>x>>y;
    float a[n] = {0};
    ll i=0;
    ll m = n;
    while(n--)
    {
        float x0,y0;
        cin>>x0>>y0;
        a[i] = getslope(x0,y0,x,y);
        i++;
    }
    map<float,int> mp;
    rep(j,m)
    {
        mp[a[j]]++;
    }
    cout<<mp.size();
}
