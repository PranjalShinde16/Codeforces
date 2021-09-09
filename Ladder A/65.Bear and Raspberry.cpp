#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int diff=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i]){
        if(max(a[i+1],a[i])-min(a[i+1],a[i])>diff){diff = max(a[i+1],a[i])-min(a[i+1],a[i]);}}
    }
    n = diff - r;
    if(n>0){cout<<n;}
    else {cout<<"0";}
}
