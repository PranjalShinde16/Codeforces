#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],b[k+100],c[k+100];
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<k+100;i++){ b[i]=0;c[i]=0; }
    for(ll i=0;i<n;i++)
    {
        b[a[i]]++;c[a[i]]++;
    }
    ll count=0,x=0;
    for(ll i=1;i<k;i++)
    {
            x+=b[i];
    }
    //cout<<x;
    for(ll i=0;i<1000;i++)
    {
    if(x>0)
    {
        //cout<<"M";
        x=0;
        count++;
        for(ll i=1;i<k;i++)
        {
            if(b[i]!=0)
            {
                c[i]--;
                c[i+1]++;
            }
        }
        for(ll i=1;i<k;i++)
        {
            b[i]=c[i];
        }
        for(ll i=1;i<k;i++)
        {
            x+=b[i];
        }
    }
    }
    cout<<count;
    return 0;
}
