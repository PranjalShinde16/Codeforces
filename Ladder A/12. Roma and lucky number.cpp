#include<iostream>
using namespace std;
int main()
{
    int n,k,count = 0;
    cin>>n>>k;
    int a[n],ld[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){ld[i]=0;}
    for(int i=0;i<n;i++)
    {
        while(a[i]>0){
        if(a[i]%10==4||a[i]%10==7){ld[i] = ld[i]+1;}
        a[i] = a[i]/10;
        }}
    for(int i=0;i<n;i++){if(ld[i]>k){count = count + 1;}}
    cout<<n - count;
}