#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,count=0;
    cin>>n>>m;
    ll a[m];
    for(int i=0;i<m;i++){cin>>a[i];}
    count += a[0] -1;
    for(int i=0;i<m-1;i++)
    {
        if(a[i+1]>a[i]){count += a[i+1] - a[i];}
        else if(a[i+1]<a[i]){count += (n-a[i]) + a[i+1];}
    }
    cout<<count;
    return 0;
}
