#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    for(ll i=n-1;i>=1;i--)
    {
        if(n%i==0){ cout<<i<<" "; n=i;}
    }
    return 0;
}
