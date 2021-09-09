#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    fast;
    ll n;
    double vb,vs;
    cin>>n>>vb>>vs;
    ll a[n];
    double d[n];
    loop { cin>>a[i]; }
    ll c1,c2;
    cin>>c1>>c2;
    double time[n];
    loop
    {
        d[i] = ((c1-a[i])*(c1-a[i])) + (c2*c2);
        d[i] = sqrt(d[i]);
    }
    //loop { cout<<d[i]<<endl; }
    loop
    {
        time[i] = (a[i]/vb) + (d[i]/vs);
    }
    //loop { cout<<time[i]<<endl; }
    double mintime = time[0];
    ll index = 0;
    double mindist = d[0];
    loop
    {
        if(time[i]<=mintime)
        {
            if(time[i]==mintime)
            {
                if(d[i]<mindist)
                {
                    mindist = d[i];
                    index = i;
                }
            }
            else
            {
                mintime = time[i];
                index = i;
                mindist = d[i];
            }
        }
    }
    if(index==0){ cout<<"2"; }
    else{ cout<<index+1; }
    return 0;
}
