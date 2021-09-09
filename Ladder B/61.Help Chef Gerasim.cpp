#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    rep(i,n){ cin>>a[i];b[i]=a[i]; }
    sort(a,a+n);
    //cout<<a[0]<<a[n-1];
    if(a[0]==a[n-1]){ cout<<"Exemplary pages.";return 0; }
    else if(n==2){ if(b[1]>b[0]){ int k=b[1]-b[0];if(k%2==0){k=k/2;cout<<k<<" ml. from cup #1 to cup #2.";}else {cout<<"Unrecoverable configuration.";} }
    else if(b[0]>b[1]){ int k=b[0]-b[1];if(k%2==0){k=k/2;cout<<k<<" ml. from cup #2 to cup #1."; }else {cout<<"Unrecoverable configuration.";}}}
    else
    {
        float k=a[n-1]-a[0];
        k=k/2;
        float m=a[n-1]-k;
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]!=m){ cout<<"Unrecoverable configuration."; return 0;}
        }
        ll num1,num2;
        rep(i,n)
        {
            if(b[i]==a[0]){num1=i+1;}
        }
        rep(i,n)
        {
            if(b[i]==a[n-1]){num2=i+1;}
        }
        cout<<k<<" ml. from cup #"<<num1<<" to cup #"<<num2<<".";
        return 0;
    }
}
