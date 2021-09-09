#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll n,m;
    ll max=0,min=0;
    cin>>n>>m;
    if((n-m)%2==0)
    max=(n-m+1)*((n-m)/2);
    else
    max=((n-m+1)/2)*(n-m);
    ll x=n/m;
    ll rem=n%m;

        min= rem*((x+1)*(x))/2+(m-rem)*(x*(x-1))/2;

    cout<<min<<" "<<max<<endl;
    return 0;
}
