#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
signed main()
{
    fast;
    ll na,ma,x=0,y=0;
    ll temp=LLONG_MIN;
    cin>>na>>ma;
    vector<string>str1(na);
    rep(i,na){ cin>>str1[i]; }
    ll nb,mb;
    cin>>nb>>mb;
    vector<string>str2(nb);
    rep(i,nb){ cin>>str2[i]; }
    for(ll i1=-100;i1<100;i1++)
    {
        for(ll j1=-100;j1<100;j1++)
        {
            ll ans=0;
            rep(i,na)
            {
                rep(j,ma)
                {
                    ll a,b;
                    a=i1+i; b=j1+j;
                    if(i>=0&&i<na&&j>=0&&j<ma&&a>=0&&a<nb&&b>=0&&b<mb)
                    {
                        ans+=(str1[i][j]-48)*(str2[a][b]-48);
                    }
                }
            }
            if(ans>temp)
                {
                    temp = ans;
                    x=i1; y=j1;
                }
        }
    }
    cout<<x<<" "<<y;
}
