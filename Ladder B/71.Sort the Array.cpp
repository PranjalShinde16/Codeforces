#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,i=0;
    ll l=0,r=0;
    cin>>n;
    r=n-1;
    ll a[n];
    rep(i,n){ cin>>a[i]; }
    rep(i,n-1){ if(a[i+1]<a[i]){ l=i;break; } }
    if(l==0){ i=0; }
    for(ll j=i;j<n-1;j++){ if(a[j+1]>a[j]){ r=j;break; } }
    reverse(a+l,a+r+1);
    bool asc=1;
    rep(i,n-1){ if(a[i+1]<a[i]){ asc=0; } }
    if(asc==true){ cout<<"yes"<<endl<<l+1<<" "<<r+1; }
    else{ cout<<"no"; }
    return 0;
}
