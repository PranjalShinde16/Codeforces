#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,count=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){cin>>a[i];}
    count += a[0];
    for(int i=0;i<n-1;i++)
    {
        count = count + (max(a[i],a[i+1])-min(a[i],a[i+1])) + 1;
    }
    count += n;
    cout<<count;
    return 0;
}
