#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
ll sumdigit(ll num)
{
    ll temp=0;
    string str=to_string(num);
    ll m=str.length();
    rep(j,m)
    {
        temp+=str[j]-48;
    }
    return temp;
}
int main()
{
    ll n;
    cin>>n;
    ll t=sqrt(n);
    for(ll i=t-1000;i<=t;i++)
    {
        ll k=sumdigit(i);
        if( (i*i)+(k*i)-n==0 ){ cout<<i; return 0; }
    }
    cout<<"-1";
    return 0;
}
