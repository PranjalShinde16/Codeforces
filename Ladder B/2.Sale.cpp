#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define loop for(int i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,m,count=0,cost=0;
    cin>>n>>m;
    ll a[n];
    loop {cin>>a[i];}
    sort(a,a+n);
    loop
    {
        if(count<m){if(a[i]<0){cost += a[i];count++;}}
    }
    cost = cost*(-1);
    cout<<cost;
    return 0;
}
