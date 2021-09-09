#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    fast
    ll n;
    cin>>n;
    while(n--)
    {
        ll k;
        cin>>k;
        string str;
        cin>>str;
        ll start,dne;
        rep(i,k)
        {
            if(str[i]=='>'){start=i; break;}
        }
        reverse(str.begin(),str.end());
        rep(i,k)
        {
            if(str[i]=='<'){dne=i; break;}
        }
        cout<<min(dne,start);
        cout<<endl;
    }
    return 0;
}
