#include<bits/stdc++.h>
#define ll long long
using namespace std;
class sez
{
public:
    ll first,second;
};
int main()
{
    ll n;
    cin>>n;
    sez a[n];
    bool b[n][2];
    for(int i=0;i<n;i++){ cin>>a[i].first>>a[i].second; b[i][0]=0; b[i][1]=0; }
    ll min=a[0].first,max=a[0].second;
    for(int i=0;i<n;i++)
    {
        if(a[i].first<min){ min=a[i].first; }
        if(a[i].second>max){ max=a[i].second; }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].first==min){ b[i][0]=1; }
        if(a[i].second==max){ b[i][1]=1; }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i][0]==1&&b[i][1]==1){ cout<<i+1; return 0; }
    }
    cout<<"-1";
    return 0;
}
