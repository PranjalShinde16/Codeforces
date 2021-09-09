#include<bits/stdc++.h>
#define ll long long
#define rep(i,l,n) for(ll i=l;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
        fast;
        ll n,m,a,b,c;
        cin>>n>>m;
        ll color[n+1];
        rep(i,1,n+1){ color[i]=0; }
        rep(i,0,m)
        {
            cin>>a>>b>>c;
            if(color[a]==0 && color[b]==0 && color[c]==0)
            {
                color[a]=1;
                color[b]=2;
                color[c]=3;
            }
            else if(color[a]!=0)
            {
                if(color[a]==1) color[b]=2,color[c]=3;
                else if(color[a]==2) color[b]=3,color[c]=1;
                else color[b]=1,color[c]=2;
            }
            else if(color[b]!=0)
            {
                if(color[b]==1) color[a]=2,color[c]=3;
                else if(color[b]==2) color[a]=3,color[c]=1;
                else color[a]=1,color[c]=2;
            }
            else if(color[c]!=0)
            {
                if(color[c]==1) color[b]=2,color[a]=3;
                else if(color[c]==2) color[b]=3,color[a]=1;
                else color[b]=1,color[a]=2;
            }
        }
        for(ll i=1;i<=n;i++) printf("%d ",color[i]);
}
