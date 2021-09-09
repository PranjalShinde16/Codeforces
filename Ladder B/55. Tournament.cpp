#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class no
{
public:
    ll first,second;
};
using namespace std;
int main()
{
    fast
    ll n,num1=0,num2=0;
    cin>>n;
    ll k=(n*(n-1))/2; k--;
    no a[k];
    ll win[n+1]={0},lose[n+1]={0};
    rep(i,k)
    {
        cin>>a[i].first>>a[i].second;
        win[a[i].first]++;
        lose[a[i].second]++;
    }
    rep(i,n+1)
    {
        if(win[i]+lose[i]==n-2&&num1==0){ num1=i; }
        if(win[i]+lose[i]==n-2&&num1!=i){ num2=i; }
    }
    if(win[num1]>win[num2]){ cout<<num1<<" "<<num2; }
    else{ cout<<num2<<" "<<num1; }
    return 0;
}
