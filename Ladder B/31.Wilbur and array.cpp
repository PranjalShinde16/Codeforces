#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,step=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){ cin>>a[i]; }
    step += abs(a[0]);
    for(ll i=0;i<n-1;i++)
    {
        step = step + abs(max(a[i],a[i+1]) - min(a[i],a[i+1]));
    }
    cout<<step;
    return 0;
}
