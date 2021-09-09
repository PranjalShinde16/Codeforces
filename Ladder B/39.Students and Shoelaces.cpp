#include<bits/stdc++.h>
#define ll long long
using namespace std;
class lace
{
public:
    ll end1,end2;
};
int main()
{
    ll n,m;
    ll x=0,count=0;
    cin>>n>>m;
    lace a[m];
    for(ll i=0;i<m;i++){ cin>>a[i].end1>>a[i].end2; }
    ll degree[n+1],egree[n+1];
    for(ll i=0;i<n+1;i++){ degree[i]=0;egree[i]=0; }
    for(ll i=0;i<m;i++)
    {
        degree[a[i].end1]++;
        degree[a[i].end2]++;
        egree[a[i].end1]++;
        egree[a[i].end2]++;
    }
    for(ll z=0;z<1000;z++)
    {
        x=0;
        for(ll i=0;i<n+1;i++)
        {
            if(degree[i]==1){ x++; }
        }
        //cout<<x;
        if(x==0){ cout<<count; return 0; }
        for(ll i=0;i<n+1;i++)
        {
            if(degree[i]==1)
            {
                for(ll j=0;j<m;j++)
                {
                    if(a[j].end1==i||a[j].end2==i)
                    {
                        egree[a[j].end1]--;
                        egree[a[j].end2]--;
                        a[j].end1=0; a[j].end2=0;
                    }
                }
            }
        }
        for(ll k=0;k<n+1;k++)
        {
            degree[k]=egree[k];
        }
        count++;
    }
}
