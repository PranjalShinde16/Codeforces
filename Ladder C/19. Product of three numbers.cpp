#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
using namespace std;
void solve(ll n)
{
    for(ll i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            for(ll j =i+1;j<sqrt(n/i);j++)
            {
                if((n/i)%j==0)
                {
                    cout<<"YES"<<endl<<i<<" "<<j<<" "<<(n/i)/j<<endl;
                    return ;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return ;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        solve(n);
    }
}
