#include<bits/stdc++.h>
#define ll long long
#define rep(i,l,n) for(ll i=l;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c*b>a*d)
    {
        ll num = (b*c)-(a*d);
        ll deno = (b*c);
        ll k = __gcd(num,deno);
        if(k>1)
        {
            num/=k;
            deno/=k;
        }
        cout<<num<<"/"<<deno;
        return 0;
    }
    else if(a*d>c*b)
    {
        ll num = (a*d)-(c*b);
        ll deno = (d*a);
        ll k = __gcd(num,deno);
        if(k>1)
        {
            num/=k;
            deno/=k;
        }
        cout<<num<<"/"<<deno;
        return 0;
    }
    else
    {
        cout<<"0/1";
        return 0;
    }
}
