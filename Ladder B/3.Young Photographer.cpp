#include<bits/stdc++.h>
#define cal(a,b) max(a,b)-min(a,b)
using namespace std;
int main()
{
    long long n,xo;
    cin>>n>>xo;
    long long a[n][2];
    for(int i=0;i<n;i++){cin>>a[i][0]>>a[i][1];}
    for(int i=0;i<n;i++)
    {
        sort(a[i],a[i]+2);
    }
    long long min=1000,max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][0]>max){max = a[i][0];}
        if(a[i][1]<min){min = a[i][1];}
    }
    if(max>min){cout<<"-1";}
    else
    {
        if(xo<max){cout<<max-xo;}
        else if(xo>min){cout<<xo-min;}
        else {cout<<"0";}
    }
    return 0;
}
