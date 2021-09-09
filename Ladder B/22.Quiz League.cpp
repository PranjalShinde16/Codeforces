#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){ cin>>a[i]; }
    if(a[k-1]==1){ cout<<k; }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[(k+i)%n]==1){ cout<<((k+i)%n)+1;break; }
        }
    }
    return 0;
}
