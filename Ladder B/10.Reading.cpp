#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    bool c[n];
    for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];c[i]=0;}
    sort(a,a+n);
    k = n - k;
    cout<<a[k]<<endl;
    for(int i=k;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j]&&c[j]==0){ c[j]=1; break;}
        }
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]==1){cout<<i+1<<"\t";}
    }
    return 0;
}
