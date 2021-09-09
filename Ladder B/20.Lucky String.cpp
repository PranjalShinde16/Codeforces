#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q,r;
    cin>>n;
    q = n/4;
    r = n%4;
    for(ll i=0;i<q;i++){ cout<<"abcd"; }
    if(r==1){cout<<"a";}
    if(r==2){ cout<<"ab"; }
    if(r==3){ cout<<"abc"; }
    return 0;
}
