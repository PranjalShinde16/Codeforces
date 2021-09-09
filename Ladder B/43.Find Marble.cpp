#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,s,t;
    cin>>n>>s>>t;
    ll count=0;
    ll a[n+1];
    for(ll i=1;i<n+1;i++){ cin>>a[i]; }
    if(s==t){cout<<"0"; return 0;}
    ll k=s;
    while(true)
    {
        k=a[k];
        if(k==s)
        {
            count = -1;
            break;
        }
        count++;
        if(k==t){ break; }
    }
    cout<<count;
    return 0;
}
