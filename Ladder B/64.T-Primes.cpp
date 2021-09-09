#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
vector <bool> prime;
int main()
{
    fast;
 	int n;
 	cin >> n;
 	ll m=1000000;
 	bool prime[m+1];
 	memset(prime,true,sizeof(prime));
 	prime[0]=false;prime[1]=false;
 	for(ll p=0;p*p<=m;p++)
    {
        if(prime[p]==true)
        {
            for(ll i=p*p;i<=m;i+=p)
                {prime[i]=false;}
        }
    }
    //cout<<prime[5]<<prime[13]<<prime[10];
    //for(ll i=0;i<m;i++){ cout<<prime[i]<<" "; }
    while(n--)
    {
        ll x;
        cin>>x;
        ll k=sqrt(x);
        if((k*k)==x&&prime[k]==1&&x!=1){ cout<<"YES"<<endl; }
        else{ cout<<"NO"<<endl; }
    }
    return 0;
}
