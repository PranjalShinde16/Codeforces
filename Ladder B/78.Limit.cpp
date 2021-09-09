#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
void decimaltofraction(ll num1,ll num2)
{
    ll min,gcd=1;
    bool b=0;
    if(num1<0&&num2>0||num1>0&&num2<0){ b=1; }
    num1 = abs(num1);
    num2 = abs(num2);
    if(num1<=num2){ min=num1; }
    else{ min=num2; }
    for(ll i=1;i<min+1;i++){ if(num1%i==0&&num2%i==0){ gcd=i; } }
    num1=num1/gcd;
    num2=num2/gcd;
    if(b==1){ cout<<"-"<<num1<<"/"<<num2; }
    else{ cout<<num1<<"/"<<num2; }
}
int main()
{
    fast;
    ll n,m;
    cin>>n>>m;
    ll a[n+1],b[m+1];
    rep(i,n+1){ cin>>a[i]; }
    rep(i,m+1){ cin>>b[i]; }
    if(n<m)
    {
        cout<<"0/1";
    }
    if(n>m)
    {
        if(a[0]>0&&b[0]>0){ cout<<"Infinity"; }
        else if(a[0]<0&&b[0]>0){ cout<<"-Infinity"; }
        else if(a[0]>0&&b[0]<0){ cout<<"-Infinity"; }
        else if(a[0]<0&&b[0]<0){ cout<<"Infinity"; }
    }
    if(n==m)
    {
        decimaltofraction(a[0],b[0]);
        return 0;
    }
}
