#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    ll sum = 0;
    for(ll i=0;i<t;i++)
    {
        sum+= min(v1+(d*i),v2+(d*(t-i-1)));
    }
    cout<<sum;
}
