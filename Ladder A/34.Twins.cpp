#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int k=a[n-1],count=1;
    for(int i=n-1;i>=0;i--){
    if(k>sum-k){cout<<count;return 0;}
    else{k=k+a[i-1];count+=1;}
    }
}
