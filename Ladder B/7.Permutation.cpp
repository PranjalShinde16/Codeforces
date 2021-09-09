#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,count=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=1;i<=n;i++)
    {
        bool s=false;
        for(int j=0;j<n;j++)
        {
            if(a[j]==i){s=true;}
        }
        if(s==false){count++;}
    }
    cout<<count;
    return 0;
}
