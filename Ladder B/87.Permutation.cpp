#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define print for(auto& x : vect) { cout<<x<<" "; }
using namespace std;
int main()
{
    ll n,k;
    vector<int> vect;
    cin>>n>>k;
    for(ll i=2*n;i>0;i--)
    {
        vect.pb(i);
    }
    if(k==0){ print return 0;}
    ll poi = 0;
    while(k--)
    {
        swap(vect[poi],vect[poi+1]);
        poi+=2;
    }
    print
}
