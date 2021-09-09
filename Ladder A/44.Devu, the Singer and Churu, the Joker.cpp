#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++){cin>>a[i];}
int time=0;
for(int i=0;i<n;i++){time = time + a[i];}
int k = time +((n-1)*10);
if(k>d){cout<<"-1";}
else{
    k = (n-1)*2;
    time = time + (n-1)*10;
    int m = d-time;
    m = m/5;
    k = k+m;
    cout<<k;
}
return 0;
}
