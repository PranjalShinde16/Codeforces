#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,l;
    cin>>n>>l;
    ll a[n];
    for(ll i=0;i<n;i++){ cin>>a[i]; }
    sort(a,a+n);
    float x,y,z=0;
    for(ll i=1;i<n;i++)
    {
        if((a[i]-a[i-1])>z){ z=a[i]-a[i-1]; }
    }
    x=a[0];
    y=l-a[n-1];
    z=z/2;
    float k;
    if(x>=y&&x>=z){ k=x; }
    else if(y>=z&&y>=x){ k=y; }
    else if(z>=y&&z>=x){ k=z; }
    cout<<setprecision(11)<<k;
    return 0;
}
