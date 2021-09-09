#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],count[n];
    for(ll i=0;i<n;i++){ cin>>a[i];count[i]=0; }
    for(ll i=0;i<n;i++)
    {
      count[i]++;
      for(ll j=i;j<n;j++)
      {
          if(a[j+1]<=a[j]){count[i]++;}
          else{break;}

      }
      for(ll j=i;j>0;j--)
      {
          if(a[j-1]<=a[j]){count[i]++;}
          else{break;}
      }
    }
    ll max=count[0];
    for(ll i=0;i<n;i++)
    {
        if(count[i]>max){max=count[i];}
    }
    cout<<max;
    return 0;
}
