#include<bits/stdc++.h>
#define ll long long
using namespace std;
class racer
{
public:
    ll l,r,time,profit;
};
int main()
{
    ll n,m;
    ll count=0;
    cin>>n>>m;
    racer a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i].l>>a[i].r>>a[i].time>>a[i].profit;
    }
    for(int i=0;i<n;i++)
    {
        ll timer=10000,winner=999;
        for(ll j=0;j<m;j++)
        {
            if(a[j].l<=i+1&&a[j].r>=i+1)
            {
                if( a[j].time<timer )
                {
                    timer = a[j].time;
                    winner = j;
                }
            }
        }
    if(winner!=999)
    {
        count+= a[winner].profit;
    }
    }
    cout<<count;
    return 0;
}
