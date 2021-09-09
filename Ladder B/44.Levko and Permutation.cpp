#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m){cout<<"-1"; return 0;}
    int a[n+1];
    a[0]=0;
    int k=0;
    for(int i=m;i>0;i--)
    {
        a[n-k]=n-k;
        k++;
    }
    for(int i=1;i<n-m+1;i++)
    {
        if(i==n-m){a[i]=1;}
        else{ a[i]=i+1; }
    }
    for(int i=1;i<n+1;i++){ cout<<a[i]<<" "; }
    return 0;
}
