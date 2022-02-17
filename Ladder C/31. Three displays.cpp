#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll size[n];
    rep(i,0,n){ cin>>size[i]; }
    ll cost[n];
    rep(i,0,n){ cin>>cost[i]; }
    ll ans = INT_MAX;
    for(ll j=1;j<n-1;j++)
    {
        ll besti=-1;
        ll besticost = INT_MAX;
        for(ll i=0;i<j;i++)
        {
            if(size[i]<size[j]&&cost[i]<besticost)
            {
                besti = i;
                besticost = cost[i];
            }
        }
        if(besti!=-1)
        {
            ll bestk = -1;
            ll bestkcost = INT_MAX;
            for(ll k=j+1;k<n;k++)
            {
                if(size[k]>size[j]&&cost[k]<bestkcost)
                {
                    bestk = k;
                    bestkcost = cost[k];
                }
            }
            if(bestk!=-1)
            {
                if(cost[j]+cost[besti]+cost[bestk]<ans)
                {
                    ans = cost[j]+cost[besti]+cost[bestk];
                }
            }
        }
    }
    if(ans==INT_MAX)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<ans;
}
